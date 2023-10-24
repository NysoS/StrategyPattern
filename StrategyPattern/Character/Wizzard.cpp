#include "Wizzard.h"
#include <iostream>

Wizzard::Wizzard(std::string name) : Character(name) {

}

Wizzard::~Wizzard() {

}

void Wizzard::Health()
{
	std::cout << "I healter, i can health" << "\n";
}
