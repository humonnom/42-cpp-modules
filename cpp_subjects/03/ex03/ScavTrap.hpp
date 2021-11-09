#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 private:
 public:
  ScavTrap();
  ScavTrap(std::string const &name);
  ScavTrap(ScavTrap const &other);
  ~ScavTrap();
  ScavTrap &operator=(ScavTrap const &other);

  // overriding
  void attack(std::string const &target);

  // new function
  void guardGate();
};

#endif