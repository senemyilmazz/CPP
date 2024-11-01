#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> class Array 
{
    private:
        T* array;
        unsigned int len;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T>& copyArray);
        Array& operator=(const Array<T>& copyArray);
        T& operator[](unsigned int index);
        ~Array();

        unsigned int size() const;

};

#include "Array.tpp" 

#endif