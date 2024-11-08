#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <limits>
# include <vector>
# include <deque>
# include <ctime>
# include <cstdlib>

# define INT_MAX std::numeric_limits<int>::max()

 class PmergeMe {
    private:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        ~PmergeMe();
        PmergeMe &operator=(const PmergeMe &copy);

    public:
        static void mergeInsert(std::vector<int> &vector);
        static void mergeInsert(std::deque<int> &deque);
};

void checkArgs(int ac, char** av, std::vector<int> &vector);
void checkArgs(int ac, char** av, std::deque<int> &deque);

#endif