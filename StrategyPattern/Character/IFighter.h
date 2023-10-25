#pragma once
class IFighter
{
private:
	class IFightStrategy* FighStrategy = nullptr;

public:
	virtual ~IFighter();

	void Fight();

	void SetFightStrategy(class IFightStrategy* strategy);
};