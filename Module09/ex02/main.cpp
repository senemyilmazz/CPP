#include "mainHeader.hpp"

void printArgs(int ac, char **av)
{
    std::cout << "Before:   ";
    for (int i = 1; i < ac; i++)
        std::cout << av[i] << " ";
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
        double timeVec = PmergeMe::mergeInsert<std::vector<int> >(vector);
        double timeDeq = PmergeMe::mergeInsert<std::deque<int> >(deque);
        printArgs(ac, av);
        printSortedContainer(deque);
        std::cout << "Time to process a range of " << ac -1 << " elements with std::vector : " << timeVec << " us" << std::endl;
        std::cout << "Time to process a range of " << ac -1 << " elements with std::deque : " << timeDeq << " us" << std::endl;
    } catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }
}

