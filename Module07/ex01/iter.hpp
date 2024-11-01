#include <iostream>

template <typename T> void printElements(T &value)
{
    std::cout << value << std::endl;
}


template <typename T> void iter(T *array, int length, void (*function)(T&))
{
    for (int i = 0; i < length; i++)
        function(array[i]);
};