#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <ctime>
# include <cstdlib>

class PmergeMe 
{
    private:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        ~PmergeMe();
        PmergeMe &operator=(const PmergeMe &copy);

        template <typename T> static void divideSortMerge(T &container, int begin, int end);
        
        static void insertionSort(std::deque<int> &container, int begin, int end);
        static void insertionSort(std::vector<int> &container, int begin, int end);
        
        static void merge(std::deque<int> &container, int begin, int middle, int end);
        static void merge(std::vector<int> &container, int begin, int middle, int end);
        
        static double getDuration(std::clock_t start, std::clock_t end);

    public:
        template <typename T> static double mergeInsert(T &container);
};


template <typename T> double PmergeMe::mergeInsert(T &container)
{
    std::clock_t timeVec = std::clock();
    divideSortMerge(container, 0, container.size() -1);
    return getDuration(timeVec, std::clock());
};

template <typename T> void PmergeMe::divideSortMerge(T& container, int begin, int end)
{
    if (begin == end)
        return;
    if (begin - end < 10)
        insertionSort(container, begin, end);
    else
    {
        int middle = begin + ((end - begin) / 2);
        divideSortMerge(container, begin, middle);
        divideSortMerge(container, middle, end);
        merge(container, begin, middle, end);
    }
};

#endif