#include "Fixed.hpp"

int main(){
	Fixed one;
	Fixed three;
	one.print();
	three = one;
	three.print();
	one.set();
	one.print();
	three.print();
}