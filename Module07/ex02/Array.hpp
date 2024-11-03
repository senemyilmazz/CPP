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

template <typename T> Array<T>::Array()
{
    this->len = 0;
    this->array = new T[0]();
    std::cout << "An empty array is created." << std::endl;
}

template <typename T> Array<T>::Array(unsigned int n)
{
    if (n == 0)
        std::cout << "An empty array is created." << std::endl;
    else
        std::cout << "An array with " << n << " elements is created." << std::endl;
    this->array = new T[n]();
    this->len = n;
}

template <typename T> Array<T>::Array(const Array<T>& copyobject)
{
    this->array = new T[copyobject.size()]();
    for (unsigned int i = 0; i < copyobject.size(); i++)
        this->array[i] = copyobject.array[i];
    this->len = copyobject.size();
    std::cout << "An array with " << this->len << " elements is created." << std::endl;
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T>& copyobject)
{
    if (this == &copyobject) 
        return *this;
    if (this->array)
        delete [] this->array;
    this->len = copyobject.size();
    this->array = new T[this->len]();
    for (unsigned int i = 0; i < this->len; i++)
        this->array[i] = copyobject.array[i];

    return *this;
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
		throw std::out_of_range("Index is out of bounds.");
	else
		return this->array[index];
}

#endif