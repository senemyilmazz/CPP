#include "PmergeMe.hpp"

void printArgs(int ac, char **av)
{
    std::cout << "Before: ";
    for (int i = 1; i < ac; i++)
        std::cout << av[i] << " ";
    std::cout << std::endl;
}

void printSortedVector(std::vector<int> &vector)
{
    std::cout << "After: ";
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

double formatTime(std::clock_t start, std::clock_t end)
{
    return static_cast<float>(end - start) / (float)CLOCKS_PER_SEC * 10000;
}

int main (int ac, char** av)
{
    if (ac < 2)
    {
        std::cout << "Usage: " << av[0] << " [list of integers]" << std::endl;
        return 1;
    }
    std::vector<int> vector;
    std::deque<int> deque;
    try{
        checkArgs(ac, av, vector);
        checkArgs(ac, av, deque);
    } catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }
    printArgs(ac, av);
    std::clock_t timeVec = std::clock();
    PmergeMe::mergeInsert(vector);
    double tvec = formatTime(timeVec, std::clock());
    std::clock_t timeDeq = std::clock();
    //PmergeMe::mergeInsert(deque);
    double tdeq = formatTime(timeDeq, std::clock());

    printSortedVector(vector);
    std::cout << "Time to process a range of " << ac -1 << " elements with std::vector : " << tvec << " us" << std::endl;
    std::cout << "Time to process a range of " << ac -1 << " elements with std::deque : " << tdeq << " us" << std::endl;
}

