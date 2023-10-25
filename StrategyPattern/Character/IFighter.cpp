#include "IFighter.h"
#include "../Strategy/IFightStrategy.h"
#include <iostream>

IFighter::~IFighter()
{
	if (this->FighStrategy != nullptr) {
		this->FighStrategy = nullptr;
	}
}

void IFighter::Fight()
{
	if (this->FighStrategy != nullptr) {
		this->FighStrategy->Execute();
	}
	else {
		std::cout << "Fiht without strategy " << "\n";
	}
}

void IFighter::SetFightStrategy(IFightStrategy* strategy)
{
	this->FighStrategy = strategy;
}