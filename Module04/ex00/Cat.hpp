#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& copyObject);

        ~Cat();
        
        void makeSound() const;

        Cat& operator=(const Cat& copyObject);

};

#endif