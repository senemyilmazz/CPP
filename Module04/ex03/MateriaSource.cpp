#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        this->materials[i] = nullptr;
    this->size = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copyObject)
{
    *this = copyObject;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copyObject)
{
    for(int i = 0; i < this->size; i++)
        delete(this->materials[i]);
    this->size = 0;
    for(int i = 0; i < copyObject.getSize(); i++)
        learnMateria(copyObject.getMaterials()[i].clone());
    return *this;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i <this->size; i++)
        delete(this->materials[i]);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->size < 4)
    {
        this->materials[this->size] = m;
        this->size++;
    }
    else
        std::cout << "It is not allowed to add more than 4." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < this->size; i++)
    {
        if (!this->materials[i]->getType().compare(type))
            return this->materials[i]->clone();
    }
    std::cout << "No "<< type <<  " type material added. Add it first." << type << std::endl;
    return nullptr;
}

int MateriaSource::getSize() const
{
    return this->size;
}

AMateria* MateriaSource::getMaterials() const
{
    return *this->materials;
}
