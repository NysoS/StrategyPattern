#pragma once
#include "IFightStrategy.h"

class SwordFightStrategy : public IFightStrategy
{
public:
	SwordFightStrategy();

	virtual ~SwordFightStrategy();

	virtual void Execute() override;

};