#ifndef IMATERIASOURCE__HPP
#define IMATERIASOURCE__HPP

#include "AMateria.hpp"

// interface class
class IMateriaSource {
   public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif