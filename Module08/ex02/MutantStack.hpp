#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <iostream>

template <typename T> class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const &copyObj) : std::stack<T>(copyObj) {}
        ~MutantStack() {}
        MutantStack &operator=(MutantStack const &other);

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};

template <typename T> MutantStack<T>& MutantStack<T>::operator=(MutantStack const &other) {
    std::stack<T>::operator=(other);
    return *this;
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return this->c.begin(); 
}
template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end(){ 
    return this->c.end();
}

#endif