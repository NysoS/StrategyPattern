#pragma once
#include "IFightStrategy.h"

class DaggerFightStrategy : public IFightStrategy 
{
public:
	DaggerFightStrategy();

	virtual ~DaggerFightStrategy();

	virtual void Execute() override;
};