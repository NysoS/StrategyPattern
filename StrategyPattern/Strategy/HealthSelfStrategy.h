#pragma once
#include "IHealtherStrategy.h"

class HealthSelfStrategy : public IHealtherStrategy
{
public:
	HealthSelfStrategy();

	virtual ~HealthSelfStrategy();

	virtual void Execute() override;
};