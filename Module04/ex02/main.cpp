#include "Cat.hpp"
#include "Dog.hpp"

int main()
{   
    // std::cout << "Construction of dog:" << std::endl;
    // const Dog* dog = new Dog();

    // std::cout << "---" << std::endl;

    // std::cout << "Construction of cat:" << std::endl;
    // const Cat* cat = new Cat();

    // std::cout << "---" << std::endl;

    // std::cout << "Construction of copyCat:" << std::endl;
    // Cat *copyCat = new Cat(*cat);

    // std::cout << "---" << std::endl;

    // std::cout << "Construction of copyDog:" << std::endl;
    // Dog copyDog = *dog;

    // std::cout << "---" << std::endl;

    // std::cout << "dog: " << dog->getType() << " ";
    // dog->makeSound();
    // std::cout << "cat: " << cat->getType() << " ";
    // cat->makeSound();

    // std::cout << "copyCat: " << copyCat->getType() << " ";
    // copyCat->makeSound();

    // std::cout << "copyDog: "<< copyDog.getType() << " ";
    // copyDog.makeSound();

    // std::cout << "---" << std::endl;

    // std::cout << "Destruction of dog: " << std::endl;
    // delete(dog);

    // std::cout << "---" << std::endl;

    // std::cout << "Destruction of cat: " << std::endl;
    // delete(cat);

    // std::cout << "---" << std::endl;

    // std::cout << "Destruction of copyCat: " << std::endl;
    // delete(copyCat);

    // std::cout << "---" << std::endl;

    int size = 20; //number of animal

    Animal* animal[size];

    std::cout << "--- Constructions---" << std::endl;
    for (int i = 0; i < size/2; i++)
        animal[i] = new Dog();
    for (int i = size/2 ; i < size; i++)
        animal[i] = new Cat();

    std::cout << "---" << std::endl;

    std::cout << "---Destructions---" << std::endl;
    for(int i = 0; i < size ; i++)
        delete(animal[i]);
}