#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& copyObject);

        ~Dog() override;
        
        void makeSound() const override;
};

#endif