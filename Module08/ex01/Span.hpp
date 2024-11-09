#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <climits>

template <typename Container> class Span
{
    private:
        unsigned int size;
        Container container;
    public:
        Span(unsigned int N);
        Span(const Span& copyObj);
        Span& operator=(const Span& copyObj);
        ~Span();

        void addNumber(int number); 
        void addNumber(typename Container::iterator begin, typename Container::iterator end);

        int shortestSpan();
        int longestSpan();
        Container getContainer() const;

        class OverflowException : public std::exception 
        {
            public : 
                const char* what() const throw();
        };

        class UnderflowException : public std::exception
        {
            public : 
                const char* what() const throw();
        };
};


template <typename Container> Span<Container>::Span(unsigned int N) : size(N) {}

template <typename Container>  Span<Container>::Span(const Span& copyObj) : size(copyObj.size), container(copyObj.container) {}

template <typename Container>  Span<Container>& Span<Container>::operator=(const Span& copyObj)
{
    if (this == &copyObj)
        return *this;
    if (this->container.size() > 0)
        this->container.clear();
    if (this->size < copyObj.size)
    {
        this->container.insert(this->container.begin(), copyObj.container.begin(), copyObj.container.begin() + size);
        throw Span<Container>::OverflowException();
    }
    this->container = copyObj.container;
    return *this;
}

template <typename Container> Span<Container>::~Span() {}

template <typename Container> void Span<Container>::addNumber(int number)
{
    if (container.size() == size)
        throw Span<Container>::OverflowException();
    container.push_back(number);
}

template <typename Container> void Span<Container>::addNumber(typename Container::iterator begin, typename Container::iterator end)
{
    if (container.size() + std::distance(begin, end) > size)
        throw Span<Container>::OverflowException();
    container.insert(container.end(), begin, end);
}

template <typename Container> int Span<Container>::shortestSpan()
{
    if (container.size() <= 1)
        throw Span<Container>::UnderflowException();
    std::vector<int> sorted = container;
    std::sort(sorted.begin(), sorted.end());
    int min = *(sorted.end() -1);
    for (size_t i = 0; i < sorted.size() - 1; i++)
    {
        if (sorted[i + 1] - sorted[i] < min)
            min = sorted[i + 1] - sorted[i];
    }
    return min;
}

template <typename Container> int Span<Container>::longestSpan()
{
    if (this->container.size() <= 1)
        throw Span<Container>::UnderflowException();
    return *(std::max_element(container.begin(), container.end())) - *(std::min_element(container.begin(), container.end()));
}

template <typename Container> Container Span<Container>::getContainer() const
{
    return this->container;
}

template <typename Container> const char* Span<Container>::OverflowException::what() const throw()
{
    return "Container is full.";
}

template <typename Container> const char* Span<Container>::UnderflowException::what() const throw()
{
    return "Not enough elements.";
}



#endif