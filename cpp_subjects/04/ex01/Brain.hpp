#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
 private:
  std::string ideas_[100];

 public:
  Brain();
  Brain(Brain const& other);
  ~Brain();

  void setIdeas();

  Brain& operator=(Brain const& other);
};

#endif