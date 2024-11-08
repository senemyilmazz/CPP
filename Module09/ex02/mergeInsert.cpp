#include "PmergeMe.hpp"

static void insertionSort(std::vector<int>::iterator &begin, std::vector<int>::iterator &end)
{
    int swap;
    std::vector<int>::iterator itB = begin + 1;
    while (itB != end + 1)
    {
        std::vector<int>::iterator it = itB;
        while (it != begin && *it < *(it - 1))
        {
            swap = *it;
            *it = *(it - 1);
            *(it - 1) = swap;
            it--;
        }
        itB++;
    }
}

static void merge(std::vector<int>::iterator &begin, std::vector<int>::iterator &middle, std::vector<int>::iterator &end)
{
    std::vector<int> temp;
    std::vector<int>::iterator itB = begin;
    std::vector<int>::iterator itM = middle;
    while(itB != middle && itM != end)
    {
        if (*itB < *itM)
            temp.push_back(*itB++);
        else
            temp.push_back(*itM++);
    }
    while (itB != middle)
        temp.push_back(*itB++);
    while (itM != end)
        temp.push_back(*itM++);
    std::copy(temp.begin(), temp.end(), begin);
}

static void divideSortMerge(std::vector<int>::iterator &begin, std::vector<int>::iterator &end)
{
    if (begin == end)
        return;
    if (begin - end < 10)
        insertionSort(begin, end);
    else
    {
        std::vector<int>::iterator middle = begin + (distance(begin, end) / 2);
        divideSortMerge(begin, middle);
        divideSortMerge(middle, end);
        merge(begin, middle, end);
    }
}


void PmergeMe::mergeInsert(std::vector<int> &vector)
{
    std::vector<int>::iterator itB = vector.begin();
    std::vector<int>::iterator itE = vector.end() -1;
    divideSortMerge(itB, itE);
}