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

int main (int ac, char** av)
{
    if (ac < 2)
    {
        std::cout << "Usage: " << av[0] << " [list of integers]" << std::endl;
        return 1;
    }
    try{
        std::vector<int> vector;
        std::deque<int> deque;
        checkArgs(ac, av, vector);
        checkArgs(ac, av, deque);
        std::clock_t timeVec = PmergeMe::mergeInsert<std::vector<int> >(vector);
        //std::clock_t timeDeq = PmergeMe::mergeInsert(deque);
        printArgs(ac, av);
        printSortedVector(vector);
        std::cout << "Time to process a range of " << ac -1 << " elements with std::vector : " << timeVec << " us" << std::endl;
        //std::cout << "Time to process a range of " << ac -1 << " elements with std::deque : " << timeDeq << " us" << std::endl;
    } catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }

}

