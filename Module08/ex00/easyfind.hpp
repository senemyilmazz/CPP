#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

class NotFoundException : public std::exception {
    public : 
        virtual const char* what() const throw(){
            return "Content not found.";
        }
};


template <typename T> typename T::iterator easyfind(T& container, int num)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), num);
    if (iter == container.end())
        throw NotFoundException();
    return iter; 
};

#endif