#include "IHealther.h"
#include "../Strategy/IHealtherStrategy.h"
#include <iostream>

IHealther::~IHealther()
{
	if (this->HealthStrategy != nullptr) {
		this->HealthStrategy = nullptr;
	}
}

void IHealther::Health()
{
	if (this->HealthStrategy != nullptr) {
		this->HealthStrategy->Execute();
	}
	else {
		std::cout << "I can health" << "\n";
	}
}

void IHealther::SetHealthStrategy(IHealtherStrategy* healthStrategy)
{
	this->HealthStrategy = healthStrategy;
}
