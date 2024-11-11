#ifndef MAIN_HEADR_HPP
# define MAIN_HEADR_HPP

# include "PmergeMe.hpp"
# include <limits>

# define INT_MAX std::numeric_limits<int>::max()


template <typename T> void checkArgs(int ac, char** av, T &container)
{
    double number;
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            if(!isdigit(av[i][j]))
                throw std::invalid_argument("Not a positive integer!");
        }
        number = std::strtod(av[i], NULL);
        if (number > INT_MAX)
            throw std::invalid_argument("Not a positive integer!");
        container.push_back(number);
    }
};

template <typename T> void printSortedContainer(T &container)
{
    std::cout << "After: ";
    typename T::iterator it = container.begin();
    while(it != container.end())
        std::cout << *it++ << " ";
    std::cout << std::endl;
}; 

#endif