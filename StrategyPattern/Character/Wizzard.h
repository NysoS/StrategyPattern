#pragma once
#include "Character.h"
#include "IHealther.h"

class Wizzard : public Character, IHealther
{
public:
	explicit Wizzard(std::string name);

	virtual ~Wizzard();

	virtual void Health() override;
};