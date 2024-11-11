#include "PmergeMe.hpp"

void PmergeMe::insertionSort(std::deque<int> &deque, int begin, int end)
{
    int swap;
    std::deque<int>::iterator itB = deque.begin() + begin + 1;
    std::deque<int>::iterator itE = deque.begin() + end;

    while (itB != itE + 1)
    {
        std::deque<int>::iterator it = itB;
        while (it !=deque.begin() + begin && *it < *(it - 1))
        {
            swap = *it;
            *it = *(it - 1);
            *(it - 1) = swap;
            it--;
        }
        itB++;
    }
}

void PmergeMe::insertionSort(std::vector<int> &vector, int begin, int end)
{
    int i = begin + 1;

    while (vector[i] != vector[end + 1])
    {
        int j = i;
        while (vector[j] != vector[begin] && vector[j] < vector[j - 1])
        {
            int swap = vector[j];
            vector[j] = vector[j - 1];
            vector[j - 1] = swap;
            j--;
        }
        i++;
    }
}

void PmergeMe::merge(std::deque<int> &deque, int begin, int middle, int end)
{
    std::vector<int> temp;
    std::deque<int>::iterator itB = deque.begin() + begin;
    std::deque<int>::iterator itM = deque.begin() + middle;
    std::deque<int>::iterator itE = deque.begin() + end;
    while(itB != deque.begin() + middle && itM != itE)
    {
        if (*itB < *itM)
            temp.push_back(*itB++);
        else
            temp.push_back(*itM++);
    }
    while (itB != deque.begin() + middle)
        temp.push_back(*itB++);
    while (itM != itE)
        temp.push_back(*itM++);
    std::copy(temp.begin(), temp.end(), deque.begin());
}


void PmergeMe::merge(std::vector<int> &vector, int begin, int middle, int end)
{
    std::deque<int> temp;
    while(vector[begin] != vector[middle] && vector[middle]!= vector[end])
    {
        if (vector[begin] < vector[middle])
            temp.push_back(vector[begin++]);
        else
            temp.push_back(vector[middle++]);
    }
    while (vector[begin] != vector[middle])
        temp.push_back(vector[begin++]);
    while (vector[middle] != vector[end])
        temp.push_back(vector[middle++]);
    std::copy(temp.begin(), temp.end(), vector.begin());
}
