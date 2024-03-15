#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materials[4];
        int size;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copyObject);
        ~MateriaSource() override;
        MateriaSource& operator=(const MateriaSource& copyObject);
        void learnMateria(AMateria* m) override;
        AMateria* createMateria(std::string const & type) override;

        AMateria* getMaterials() const;
        int getSize() const;

};
