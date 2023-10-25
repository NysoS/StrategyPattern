#pragma once
#include "Character.h"
#include "IFighter.h"
#include "IHealther.h"

class Thief : public Character, public IFighter, public IHealther
{
public:
	explicit Thief(std::string name);

	virtual ~Thief();
};

