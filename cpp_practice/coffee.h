#include <iostream>
#include <string>

class Menu {
    int menu_id;
    int price;
    char const* menu_name;

    public:
    Menu();

    Menu(int price_, char const* menu_name_, int menu_id_);

    char const* getMenuName() const { return (menu_name); }

    int getPrice() const { return (price); }
    
    int getId() const { return (menu_id); }

    void printMenu();
};



class MenuBoard {
    Menu *menus[100];
    int menu_num;

    public:
    MenuBoard();

    MenuBoard(char *menu_name, int price);
    
    void printMenu();

    void addMenuBoard(char const* menu_name, int price);

    Menu getMenuByName(char const* menu_name_);
};


class Guest{
    Menu *menu;
    char const* guest_name;
    int wallet;
    
    public:
    Guest(int wallet_, char const* guest_name_);

    void orderCoffee(MenuBoard const& mb, Menu const& menu);
    
    int hasMoney(int price);

    char const* getGuestName(){ return (guest_name); }

    void getCoffee();

    void getOffShop();

    void drinkCoffee();
};

class Cashier{
    Menu *new_menu;
    char const* menu_name;
    char const* _cashier_name;
    int price;
    int id;

    public:
    Cashier(char const* cashier_name): _cashier_name(cashier_name){};
    
    int takeAnOrder(const Menu &menu);
};

class Barista{
    char const* _barista_name;

    public:
    Barista(char const* barista_name) : _barista_name(barista_name)
    {}

    void brewCoffee(Menu const& menu);
    
};

class Cafe {
    Cashier _cashier;
    MenuBoard _menu;
    Barista _barista;

    public:
    Cafe(Cashier casher, Barista barista, MenuBoard menu): _cashier(casher), _barista(barista), _menu(menu)
    {
    }
    void receiveMenu(Guest& guest, Menu const& menu);
};