#include <iostream>

class Marine{
    private:
    int _x;
    int _y;

    public:
    Marine();
    Marine(int x, int y) : _x(x), _y(y){};
    Marine& returnRef();
    Marine returnMarine();
    int& returnRefX();
    int getX();
    void printPos();
    void setPos(int x, int y);
};

int& Marine::returnRefX()
{
    return (_x);
};

int Marine::getX()
{
    return (_x);
};

Marine& Marine::returnRef()
{
    return (*this);
};

Marine Marine::returnMarine()
{
    return (*this);
};

void Marine::printPos()
{
    std::cout << _x << ", " << _y << std::endl;
}

void Marine::setPos(int x, int y){
    _x = x;
    _y = y;
};

int main()
{
    Marine marine1(3, 5);
    Marine marine3 = marine1.returnMarine();

    marine3.setPos(-1, -1);

    marine1.printPos();
    marine3.printPos();

    Marine& tmp_marine3 = marine3;


    marine1.returnRefX() = 13;
    //marine1.getX() = 14;
    marine1.printPos();
}