#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat& copyObject);

        ~Cat() override;
        
        Brain* getBrain() const;
        
        void makeSound() const override;

        Cat& operator=(const Cat& copyObject);

};

#endif