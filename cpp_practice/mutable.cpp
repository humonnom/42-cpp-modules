#include <iostream>

class Mut{
    mutable int _a;

    public:
    Mut(){
        _a = 3;
    };

    void resetInt(int a) const {
        _a = a;
    };
    void printInt() const {
        std::cout << _a << std::endl;
    };
};


int
    main()
{
    Mut mut;
    Mut mut2;

    mut.resetInt(4);
    mut.printInt();
    mut2.resetInt(5);
    mut2.printInt();
}