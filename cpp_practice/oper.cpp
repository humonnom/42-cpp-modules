#include <iostream>
#include <string>

class Oper{
    char* _str;
    int _len;
    int _freed_len;

    public:
    Oper(){
        std::cout << "생성자" << std::endl;
        _str = NULL;
        _len = 0;
        _freed_len = 0;
    };
    Oper(char const* str){
        std::cout << "생성자" << std::endl;
        _str = new char[strlen(str)];
        strcpy(_str, str);
        _len = strlen(_str);
        _freed_len = _len;
    };
    Oper(Oper const& oper){
        std::cout << "복사 생성자" << std::endl;
        _str = new char[oper._len];
        strcpy(_str, oper._str);
        _len = strlen(_str);
        _freed_len = _len;
    };
    ~Oper(){
        std::cout << "소멸자" << std::endl;
        delete[] _str;
    };

    void printStr(){
        std::cout << "printStr" << std::endl;
        std::cout << _str << std::endl;
    };

    bool operator==(Oper& oper){
        if (_len != oper._len)
            return (false);
        if (_freed_len != oper._freed_len)
            return (false);
        return (!strcmp(_str, oper._str));
    };
    
    Oper* operator-=(Oper& oper){
        Oper* new_oper = new Oper(oper);
        this->_str = new_oper->_str;
        return (new_oper);
    };
};

int
    main()
{
    Oper oper1("first");
    Oper oper2("second");

    Oper new_oper("something");
    Oper* oper3 = (new_oper -= oper1);
    new_oper.printStr();
    oper3->printStr();
}