#include <string>
#include <iostream>

class Coffee {
    int _price;
    std::string _guest;

    public:
    Coffee(int price, std::string guest) : _price(price), _guest(guest){
        std::cout << "[coffee class 생성]" << std::endl;
        makeCoffee();
    };
    void makeCoffee(){
        std::cout << "make " << _guest << std::endl;
        std::cout << "pay: " << _price << std::endl;
    }
};

class Latte : public Coffee {
    std::string _guest;

    public:
    Latte(int price, std::string guest) : Coffee(price, guest) {
        std::cout << "latte class 생성" << std::endl;
        makeCoffee();
    }
};

int main()
{
    Coffee  coffee(5000, "coffee");
    Latte   latte(5500, "latte");
}