#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;

    public:
        Dog();
        Dog(const Dog& copyObject);

        ~Dog() override;
        
        Brain* getBrain() const;

        void makeSound() const override;

        Dog& operator=(const Dog& copyObject);
};

#endif