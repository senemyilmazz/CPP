#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    this->len = 0;
    this->array = new T[0];
    std::cout << "An empty array is created." << std::endl;

}

template <typename T> Array<T>::Array(unsigned int n)
{
    if (n < 1)
    {
        std::cout << "An empty array is created." << std::endl;
        n = 0;
    }
    else
        std::cout << "An array with " << n << " elements is created." << std::endl;
    this->array = new T[n](); 
    this->len = n;
}

template <typename T> Array<T>::Array(const Array<T>& copyobject)
{
    this->array = new T[copyobject.size()];
    for (unsigned int i = 0; i < copyobject.size(); i++)
        this->array[i] = copyobject.array[i];
    this->len = copyobject.size();
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T>& copyobject)
{
    if (this == &copyobject) 
        return *this;
    if (this->array)
        delete [] this->array;
    this->array = new T[copyobject.size()];
    for (unsigned int i = 0; i < copyobject.size(); i++)
        this->array[i] = copyobject.array[i];
    this->len = copyobject.size();
    return this;
}

template <typename T> Array<T>::~Array()
{
    if (this->array)
        delete [] this->array;
}

template <typename T>  unsigned int Array<T>::size() const
{
    return this->len;
}

template <typename T> T& Array<T>::operator[](unsigned int index){
	if (index < 0 || index >= this->size())
		throw std::out_of_range("Index is out of bounds of the array.");
	else
		return this->array[index];
}