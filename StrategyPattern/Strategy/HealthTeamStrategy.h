#pragma once
#include "IHealtherStrategy.h"

class HealthTeamStrategy : public IHealtherStrategy
{
public:
	HealthTeamStrategy();

	virtual ~HealthTeamStrategy();

	virtual void Execute() override;
};