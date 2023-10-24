#pragma once

class IFightStrategy {
public:
	IFightStrategy();

	virtual ~IFightStrategy();

	virtual void Execute() = 0;
};