#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        //Attribute
        std::string type;
        //Type specific constructor
        Animal(const std::string& type);

    public:
        //Constructors
        Animal();
        Animal(const Animal& copyObject);

        //Destructor
        virtual ~Animal();

        std::string getType() const;

        //Method
        virtual void makeSound() const;

        //Operator Overloading
        Animal& operator=(const Animal& copyObject);
};

#endif