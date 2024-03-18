#include "Character.hpp"

Character::Character()
{
    // std::cout << "Character default constructor called." << std::endl;
    this->name = "anonim";
    this->size = 0;
    this->deletedSize = 0;
    this->deletedEquipment = NULL;
}

Character::Character(std::string name)
{
    // std::cout << "Character " << name  << " constructor called." << std::endl;
    this->name = name;
    this->size = 0;
    this->deletedSize = 0;
    this->deletedEquipment = NULL;
}

Character::~Character() 
{
    // std::cout << "Character" << this->name << "destructor called." << std::endl;
    for (int i = 0; i < this->size; i++)
        delete(this->inventory[i]);
    for (int i = 0; i < this->deletedSize; i++)
        delete (this->deletedEquipment[i]);
    if (this->deletedEquipment != NULL)
        delete[] (this->deletedEquipment);
}

Character::Character(const Character& copyObject)
{
    *this = copyObject;
}

Character& Character::operator=(const Character& copyObject)
{
    this->name = copyObject.getName();
    
    for (int i = 0; i < this->size; i++)
         delete(this->inventory[i]);
    this->size = 0;
    for (int i = 0; i < copyObject.getSize() ; i++)
       this->equip(copyObject.inventory[i]->clone());
    return *this;
}

std::string const & Character::getName() const
{
    return this->name;
}

int const & Character::getSize() const
{
    return this->size;
}

void Character::equip(AMateria* m)
{
    if (this->size == 4)
        std::cout << "Inventory is full." << std::endl;
    if (this->size >= 0 && this->size < 4)
    {
        this->inventory[this->size] = m;
        this->size++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= this->size)
    {
        setDeletedEquipment(this->inventory[idx]);
        idx++;
        while (idx < this->size)
        {
            this->inventory[idx - 1] = this->inventory[idx];
            idx++;
        }
        this->inventory[idx] = NULL;
        this->size--;
    }
}

void Character::setDeletedEquipment(AMateria *m)
{
    for (int i = 0; i < this->deletedSize; i++)
        if (m == this->deletedEquipment[i])
            return ;
    AMateria** temp = new AMateria*[this->deletedSize + 1];
    for (int i = 0; i < (this->deletedSize); i++)
        temp[i] = this->deletedEquipment[i];
   temp[this->deletedSize] = m;
    delete[](this->deletedEquipment);
    this->deletedEquipment = temp;
    this->deletedSize++;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < this->size)
        this->inventory[idx]->use(target);
}