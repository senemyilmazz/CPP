#include "Span.hpp"

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span& copyObj) : size(copyObj.size), container(copyObj.container) {}

Span& Span::operator=(const Span& copyObj)
{
    if (this == &copyObj)
        return *this;
    if (container.size() > 0)
        container.clear(); // kontrol et
    container = copyObj.container;
    size = copyObj.size;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (container.size() == size)
        throw std::exception(); // exception yaz
    container.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (container.size() + std::distance(begin, end) > size)
        throw std::exception(); // exception yaz
    container.insert(container.end(), begin, end);
}

int Span::shortestSpan()
{
    if (container.size() <= 1)
        throw std::exception(); // exception yaz
    std::vector<int> sorted = container; // bu kısmı kontrol et -- direkt eşitlemiş// yeni adreste tutmalı
    std::sort(sorted.begin(), sorted.end());
    int min = INT_MAX; //bunu listedeki ilk değere eşitleyebiliriz
    for (size_t i = 0; i < sorted.size() - 1; i++)
    {
        if (sorted[i + 1] - sorted[i] < min)
            min = sorted[i + 1] - sorted[i];
    }
    return min;
}

int Span::longestSpan()
{
    if (this->container.size() <= 1)
        throw std::exception(); // exception yaz
    std::vector<int> sorted = container; // bu kısmı kontrol et -- direkt eşitlemiş// yeni adreste tutmalı
    std::sort(sorted.begin(), sorted.end());
    return sorted[sorted.size() - 1] - sorted[0];
}
