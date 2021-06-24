#include <iostream>

class Example{
    private:
    char* _name;

    public:
    // 생성자
    Example(){
        _name = NULL;
    }
    Example(char const* name){
        _name = new char[strlen(name) + 1];
        strcpy(_name, name);
    }

    // 소멸자
    ~Example(){
        if (_name) { 
            std::cout << _name << " : name deleted\n" << std::endl;
            delete[] _name; 
        }
        else {
            std::cout << "noname" << " : has noname\n" << std::endl;
        }
    }
};

int
    main()
{
    Example noname;
    Example cadet("cadet");
    Example ensign("ensign");
    Example commander("commander");

    return (0);
}