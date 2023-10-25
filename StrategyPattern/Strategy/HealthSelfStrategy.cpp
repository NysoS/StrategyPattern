#include "HealthSelfStrategy.h"
#include <iostream>

HealthSelfStrategy::HealthSelfStrategy()
{
}

HealthSelfStrategy::~HealthSelfStrategy()
{
}

void HealthSelfStrategy::Execute()
{
	std::cout << "Health only myself!" << "\n";
}
