#pragma once
#include "Character.h"
#include "IFighter.h"

class Warrior : public Character, public IFighter
{
public:

	explicit Warrior(std::string name);

	virtual ~Warrior();
};