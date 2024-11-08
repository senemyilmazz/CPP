#include "PmergeMe.hpp"

void checkArgs(int ac, char** av, std::vector<int> &numbers)
{
    double number;
    for (int i = 1; i < ac; i++)
    {
        number = std::strtod(av[i], NULL);
        if (number < 0 || number > INT_MAX)
            throw std::invalid_argument("Error");
        numbers.push_back(number);
    }
}

void checkArgs(int ac, char** av, std::deque<int> &numbers)
{
    double number;
    for (int i = 1; i < ac; i++)
    {
        number = std::strtod(av[i], NULL);
        if (number < 0 || number > INT_MAX)
            throw std::invalid_argument("Error");
        numbers.push_back(number);
    }
}