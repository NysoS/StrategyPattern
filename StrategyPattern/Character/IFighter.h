#pragma once
#include "../Strategy/IFightStrategy.h"

class IFighter
{
private:
	IFightStrategy* FighStrategy = nullptr;

public:
	virtual ~IFighter();

	void Fight();

	void SetStrategy(IFightStrategy* strategy);
};