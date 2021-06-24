#include "coffee.h"

int
    main()
{
    MenuBoard   menu_board;
    Cashier     sumoon("sumoon");
    Cashier     taehokim("taehokim");
    Barista     dongslee("dongslee");
    Barista     juepark("juepark");
    
    menu_board.addMenuBoard("아메리카노", 5000);
    menu_board.addMenuBoard("라떼", 5500);
    menu_board.addMenuBoard("플랫화이트", 5500);
    menu_board.addMenuBoard("생수", 1000);
    
    Cafe        cafe(sumoon, dongslee, menu_board);
    Cafe        cafe2(taehokim, juepark, menu_board);
    while (1)
    {
        std::string guest_name;
        std::string menu_name;
        int    wallet;

        std::cout << "당신의 이름은: ";
        std::cin >> guest_name;
        char* guest_name_str = const_cast<char*>(guest_name.c_str());
        std::cout << "지갑에 얼마나 가지고 있습니까?: " << std::ends;
        std::cin >> wallet;
        menu_board.printMenu();
        std::cout << "무엇을 주문하시겠어요?: " << std::ends;
        std::cin >> menu_name;
        char* menu_name_str = const_cast<char*>(menu_name.c_str());

        Guest       guest(wallet, guest_name_str);
        Menu ordering = menu_board.getMenuByName(menu_name_str);
        cafe.receiveMenu(guest, ordering);
    }
}