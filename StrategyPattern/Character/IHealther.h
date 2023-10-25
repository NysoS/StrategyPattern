#pragma once

class IHealther
{
private:
	class IHealtherStrategy* HealthStrategy = nullptr;

public:
	virtual ~IHealther();

	void Health();

	void SetHealthStrategy(class IHealtherStrategy* healthStrategy);
};