#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 private:
  std::string name_;

 public:
  DiamondTrap();
  DiamondTrap(std::string const &name);
  DiamondTrap(DiamondTrap const &other);
  ~DiamondTrap();
  DiamondTrap &operator=(DiamondTrap const &other);

  // new function
  void whoAmI();
};

#endif