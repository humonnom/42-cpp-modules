#include <iostream>
#include <string>

class Exp{
    char* _str;

    public:
    Exp(char const* str){
        _str = new char[strlen(str + 1)];
        strcpy(_str, str);
    };
    explicit Exp(int a){
        _str = new char[a + 1];
        strlcpy(_str, (char const*)"aaaaaaaaaaa", a + 1);
    };
    Exp(char a){
        _str = new char[2];
        _str[0] = a;
        _str[1] = '\0';
    };
    void print(){
        std::cout << _str << std::endl;
    }
};


void printString(Exp s)
{
    std::cout << "print string" << std::endl;
    s.print();
    std::cout << "print string (end)" << std::endl;
};

int
    main()
{
    printString("test");
    printString('c');
    printString(3);
}