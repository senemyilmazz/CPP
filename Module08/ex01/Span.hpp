#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <climits>

class Span
{
    private:
        unsigned int size;
        std::vector<int> container;
    public:
        Span(unsigned int N);
        Span(const Span& copyObj);
        Span& operator=(const Span& copyObj);
        ~Span();


        void addNumber(int number); 
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

        /*This class will have a member function called addNumber() to add a single number
to the Span. It will be used in order to fill it. Any attempt to add a new element if there
are already N elements stored should throw an exception.*/

        int shortestSpan();
        int longestSpan();
        /*They will respectively find out the shortest span or the longest span (or distance, if
you prefer) between all the numbers stored, and return it. If there are no numbers stored,
or only one, no span can be found. Thus, throw an exception.*/

/*Last but not least, it would be wonderful to fill your Span using a range of iterators.
Making thousands calls to addNumber() is so annoying. Implement a member function
to add many numbers to your Span in one call.*/
};


#endif