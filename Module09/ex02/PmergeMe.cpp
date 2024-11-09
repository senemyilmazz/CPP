#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy) { *this = copy; }

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy) { 
    if (this == &copy)
        return *this;
    return *this; 
}

double PmergeMe::getDuration(std::clock_t start, std::clock_t end)
{
    return static_cast<float>(end - start) / (float)CLOCKS_PER_SEC * 10000;
}


