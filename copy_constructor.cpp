#include <iostream>
#include <string>

class Example {
    private:
    int _x;
    int _y;
    char* _name;
 
    public:
    Example(int x, int y, char const* name);
    Example(Example const& copy);
    void print();
    ~Example();
};

Example::Example(int x, int y, char const* name) : _x(x), _y(y) {
    _name = new char[strlen(name + 1)];
    strcpy(_name, name);
    std::cout << "생성자 호출" << std::endl;
}

Example::Example(Example const& copy){
    std::cout << "(Deep copy) 복사생성자 호출" << std::endl;
    _name = new char[strlen(copy._name + 1)];
    strcpy(_name, copy._name);
    _x = copy._x;
    _y = copy._y;
}

Example::~Example(){
    std::cout << "소멸자 호출" << std::endl;
    delete[] _name;
}

void Example::print() {
    std::cout << "name: " << _name << std::endl;
    std::cout << "name-address: " << &_name << std::endl;
    std::cout << "_x: " << _x << std::endl;
    std::cout << "_y: " << _y << std::endl;
}

int
    main()
{
    Example example(1, 3, "example");
    example.print();
    Example example2(example);
    example.print();

    Example example3(1, 3, "example");
    example2.print();
    Example example4(example3);
    example2.print();
}