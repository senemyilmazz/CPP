#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <limits>
# include <vector>
# include <deque>
# include <ctime>
# include <cstdlib>

# define INT_MAX std::numeric_limits<int>::max()

template <typename T> void checkArgs(int ac, char** av, T &container)
{
    double number;
    for (int i = 1; i < ac; i++)
    {
        number = std::strtod(av[i], NULL);
        if (number < 0 || number > INT_MAX)
            throw std::invalid_argument("Error");
        container.push_back(number);
    }
};


class PmergeMe {
    private:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        ~PmergeMe();
        PmergeMe &operator=(const PmergeMe &copy);

        static void divideSortMerge(std::vector<int>::iterator &begin, std::vector<int>::iterator &end);
        static void divideSortMerge(std::deque<int>::iterator &begin, std::deque<int>::iterator &end);
        static double getDuration(std::clock_t start, std::clock_t end);
    public:
        template <typename T> static double mergeInsert(T &container);
};

template <typename T> double PmergeMe::mergeInsert(T &container)
{
    std::vector<int>::iterator itB = container.begin();
    std::vector<int>::iterator itE = container.end() -1;
    std::clock_t timeVec = std::clock();
    divideSortMerge(itB, itE);
    return getDuration(timeVec, std::clock());
};





#endif