#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <random>  // do NOT use this HEADER for 42subject.(C++11)
#include <string>
#define Z_MAX 16

class Zombie {
    static std::string _name_pool[Z_MAX];
    std::string _type;
    std::string _name;

   public:
    Zombie();
    Zombie(std::string const& type, std::string const& name);
    ~Zombie();
    void announce();
    void setType(std::string const& type);
    void setName(std::string const& name);
    void setRandomName();
};

#endif