#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& copyObject);

        ~WrongCat();
        
        void makeSound() const;

        WrongCat& operator=(const WrongCat& copyObject);
};

#endif