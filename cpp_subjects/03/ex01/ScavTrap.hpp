#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   private:
   public:
    ScavTrap();
    ScavTrap(std::string const &name);
    ScavTrap(ScavTrap const &other);
    ~ScavTrap();
    ScavTrap &operator=(ScavTrap const &other);
};

#endif