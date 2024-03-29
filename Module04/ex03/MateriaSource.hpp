#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materials[4];
        int size;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copyObject);
        ~MateriaSource();
        MateriaSource& operator=(const MateriaSource& copyObject);
        
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);

        AMateria* getMaterials() const;
        int getSize() const;
};
