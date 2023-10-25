#pragma once

class IHealtherStrategy
{
public:
	IHealtherStrategy();

	virtual ~IHealtherStrategy();

	virtual void Execute() = 0;
};