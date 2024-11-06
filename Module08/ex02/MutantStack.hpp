#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack> //std kütüphanesi var mı?
# include <iostream>

template <typename T> class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const &copyObj) : std::stack<T>(copyObj) {}
        ~MutantStack() {}
        MutantStack &operator=(MutantStack const &other) {
            std::stack<T>::operator=(other);
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){
			return std::stack<T>::c.begin(); 
		}
		iterator end(){ 
			return std::stack<T>::c.end(); 
		}
};

#endif