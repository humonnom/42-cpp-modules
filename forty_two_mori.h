#include <iostream>

class Cadet {
    static int total_cadet_num;
    int hp;
    int coord_x, coord_y;
    int damage;
    bool is_dead;
    char *_name;

    public:
    Cadet();
    Cadet(int x, int y, char const* name);
    ~Cadet();

    int attack();
    void be_attacked(int damage_earn);
    void move(int x, int y);
    void show_status();
};