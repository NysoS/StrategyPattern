#pragma once
#include "Character.h"
#include "IHealther.h"
#include "IFighter.h"

class Wizzard : public Character, public IHealther, public IFighter
{
public:
	explicit Wizzard(std::string name);

	virtual ~Wizzard();
};