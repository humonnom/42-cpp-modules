#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <random>  // do NOT use this HEADER for 42subject.(C++11)
#include <string>

#include "Zombie.hpp"
#define Z_MAX 16

class ZombieEvent {
    static std::string _name_pool[Z_MAX];
    std::string _type;

   public:
    ZombieEvent(std::string const& type);
    void setZombieType(std::string const& type);
    Zombie* newZombie(std::string const& name);
    Zombie* ramdomChump();
};

#endif