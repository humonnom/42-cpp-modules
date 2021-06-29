#include "coffee.h"

void Menu::printMenu()
{
        std::cout << "\n[ " << menu_name << " ]"<< std::endl;
        std::cout << "menu id: " << menu_id << std::endl;
        std::cout << "price: " << price << std::endl;
};

Menu::Menu() {
    menu_name = NULL;
    price = 0;
    menu_id = 0;
};

Menu::Menu(int price_, char const* menu_name_, int menu_id_) {
    menu_name = menu_name_;
    price = price_;
    menu_id = menu_id_;
    };

MenuBoard::MenuBoard(){
    menu_num = 0;
};

MenuBoard::MenuBoard(char *menu_name, int price){
    menu_num = 0;
    addMenuBoard(menu_name, price);
};

void MenuBoard::printMenu(){
    std::cout << "<<<<<< MENU >>>>>>" << std::endl;
    for (int i = 0; i < menu_num; i++)
        menus[i]->printMenu();
    std::cout << "<<<<<<<<<>>>>>>>>>\n" << std::endl;
};
void MenuBoard::addMenuBoard(char const* menu_name, int price)
{
    Menu *new_menu = new Menu(price, menu_name, menu_num);
    menus[menu_num] = new_menu;
    menu_num++; 
};
Menu MenuBoard::getMenuByName(char const* menu_name_)
{
    for (int i = 0; i < menu_num; i++){
        if (!strcmp(menus[i]->getMenuName(), menu_name_))
            return (*menus[i]);
    }
    return (Menu(0, menu_name_, -1)); 
};

Guest::Guest(int wallet_, char const* guest_name_){
    guest_name = guest_name_;
    wallet = wallet_;
}
void Guest::orderCoffee(MenuBoard const& mb, Menu const& menu){
    char const* menu_name = menu.getMenuName();
    std::cout << "GUEST(" << guest_name << "): " << std::ends;
    std::cout << menu_name << "주세요." << std::endl;
}

int Guest::hasMoney(int price)
{
    if (wallet > price) return 1;
    else return wallet - price;
}

void Guest::getCoffee(){
    std::cout << "[ " << guest_name << "가 커피를 받았습니다.]" << std::endl;
}
void Guest::getOffShop(){
    std::cout << "[ " << guest_name << "가 가게를 나갔습니다.]" << std::endl;
}
void Guest::drinkCoffee(){
    std::cout << "GUEST(" << guest_name << "): " << std::ends;
    std::cout << "너무 맛있어요. 다음에 또 올게요." << std::endl;
}

int Cashier::takeAnOrder(const Menu &menu){
    menu_name = menu.getMenuName();
    price = menu.getPrice();
    id = menu.getId();
    std::cout << "CASHIER(" << _cashier_name << "): " << std::ends;
    if (id == -1)
    {
        std::cout << "그런 메뉴는 없습니다." << std::endl;
        return (1);
    }
    std::cout << menu_name << "로 하시겠어요? 가격은 " << price << "입니다." << std::endl;
    return (0);
};

void Barista::brewCoffee(Menu const& menu)
{
    std::cout << "BARISTA(" << _barista_name << "): " << std::ends;
    std::cout << "여기 " << menu.getMenuName() << "나왔습니다." << std::endl;
}

void Cafe::receiveMenu(Guest& guest, Menu const& menu)
{
    char const* guest_name = guest.getGuestName();
    guest.orderCoffee(_menu, menu);
    if (_cashier.takeAnOrder(menu))
    {
        std::cout << "" << std::endl;
        return ;
    }
    int price = menu.getPrice();
    int moneyStatus = guest.hasMoney(price);
    if (moneyStatus == 1)
    {
        std::cout << "GUEST(" << guest_name << "): " << std::ends;
        std::cout << "여기 " << price << "원이요." << std::endl;
        _barista.brewCoffee(menu);
        guest.getCoffee();
        guest.drinkCoffee();
    }
    else {
        std::cout << "[ " << moneyStatus * -1 << "원이 모자랍니다. ]" << std::endl;
        std::cout << "GUEST(" << guest_name << "): " << std::ends;
        std::cout << "돈 벌고 다시 올게요." << std::endl;
    }
    guest.getOffShop();
    std::cout << "" << std::endl;
}
