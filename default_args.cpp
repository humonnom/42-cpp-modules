#include <iostream>
#include <string>

class Exa{
    int _a;
    int _b;
    char* _str;

    public:
    Exa(int b, int a = -1, char const* str = NULL){
        _a = a;
        _b = b;
        if (str)
        {
            _str = new char[strlen(str) + 1];
            strcpy(_str, str);
        }
        else
            _str = NULL;
    };
    ~Exa(){ if (_str) delete[] _str; }
    void print(){
        std::cout << _a << std::endl;
        std::cout << _b << std::endl;
        if (_str)
            std::cout << _str << std::endl;
    };
};

int
    main()
{
    Exa b(1, 2);
    b.print();
    
    Exa c(1, 2, "string");
    c.print();
}