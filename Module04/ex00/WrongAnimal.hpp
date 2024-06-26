#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        //Constructors
        WrongAnimal();
        WrongAnimal(const WrongAnimal& copyObject);

        //Destructor
        virtual ~WrongAnimal();

        std::string getType() const;

        //Method
        void makeSound() const;

        //Operator Overloading
        WrongAnimal& operator=(const WrongAnimal& copyObject);
};

#endif