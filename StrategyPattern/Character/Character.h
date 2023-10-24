#pragma once
#include <string>

class Character
{
private:
	std::string Name;

public:
	explicit Character(std::string name);

	virtual ~Character();

	std::string GetName();
};