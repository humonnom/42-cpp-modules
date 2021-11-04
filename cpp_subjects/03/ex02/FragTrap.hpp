#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
   private:
   public:
    FragTrap();
    FragTrap(std::string const &name);
    FragTrap(FragTrap const &other);
    ~FragTrap();
    FragTrap &operator=(FragTrap const &other);

    // new function
    void highFivesGuys();
};

#endif