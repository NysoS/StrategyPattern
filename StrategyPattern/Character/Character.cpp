#include "Character.h"
#include <iostream>

Character::Character(std::string name) : Name(name)
{
}

Character::~Character()
{
}

std::string Character::GetName()
{
	return this->Name;
}
