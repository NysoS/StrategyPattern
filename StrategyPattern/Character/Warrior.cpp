#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string name) : Character(name) {

}

Warrior::~Warrior() {

}

void Warrior::Fight()
{
	std::cout << "I can fight, i'm fighter" << "\n";
}
