#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
   private:
    std::string* ideas_;

   public:
    static std::string ideas_pool_[14];

    Brain();
    Brain(Brain const& other);
    ~Brain();

    // void setIdeas() const;
    std::string* getIdeas() const;

    Brain& operator=(Brain const& other);

    std::string getRandomSentence();
};

#endif