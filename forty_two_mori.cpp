#include "forty_two_mori.h"

Cadet::Cadet() {
    //total_cadet_num++;
}

Cadet::Cadet(int x, int y, char const* name) {
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
    coord_x = x;
    coord_y = y;
    hp = 50;
    damage = 5;
    is_dead = false;
    total_cadet_num++;
}

int Cadet::total_cadet_num = 0;

void Cadet::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}
int Cadet::attack() { return damage; }
void Cadet::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp <= 0) is_dead = true;
}
void Cadet::show_status() {
    std::cout << " *** " << _name << " *** " << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
            << std::endl;
    std::cout << " HP : " << hp << std::endl;
    std::cout << "cadet number: " << total_cadet_num << std::endl;
}


Cadet::~Cadet() {
    total_cadet_num--;
    if (_name) delete[] _name;
}

int main() {
    Cadet* cadets[100];

    cadets[0] = new Cadet(2, 3, "juepark");
    cadets[1] = new Cadet(3, 5, "yekim");
  
    cadets[0]->show_status();
    cadets[1]->show_status();
  
    std::cout << std::endl << "cadet 1 이 cadet 2 를 공격! " << std::endl;
  
    cadets[0]->be_attacked(cadets[1]->attack());
  
    cadets[0]->show_status();
    cadets[1]->show_status();
  
    delete cadets[0];
    cadets[1]->show_status();
    delete cadets[1];
}
