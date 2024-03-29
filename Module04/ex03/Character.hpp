#pragma once

#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];

        AMateria** deletedEquipment;
        int size;
        int deletedSize;
    public:
        Character();
        Character(std::string name);
        ~Character();
        Character(const Character& copyObject);
        Character& operator=(const Character& copyObject);

        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        
        std::string const & getName() const;
        int const & getSize() const;
        void setDeletedEquipment(AMateria *m);
};
