
#include <iostream>
#include <string>

class Abstract {
   protected:
    std::string song_;

   public:
    Abstract(std::string song) {
        song_ = song;
    };
    std::string getSong() {
        return song_;
    };
    virtual void printSong() = 0;
};

class Normal : public Abstract {
   public:
    Normal(std::string song) : Abstract(song){};
    void printSong() {
        std::cout << song_ << std::endl;
    };
};

int main() {
    Normal a("paninaro");
    a.printSong();

    Abstract *basePtr = new Normal("on your mark");
    basePtr->printSong();
};