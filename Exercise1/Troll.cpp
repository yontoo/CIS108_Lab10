#include <iostream>
#include "Troll.h"

Troll::Type TrollType;

Troll::Troll(){
	std::cout << "Troll born.\n";
}

void Troll::SetTrollType(Type TypeIn) {
	TrollType = TypeIn;
}

void Troll::attack() {
	if (Troll::malice < 50)
	{
		if (TrollType == Bridge)
		{
			std::cout << "Troll " << name << " demands that you pay to cross the bridge.\n";
		}
		else
		{
			std::cout << "Troll " << name << " demands that you pay to enter the forest.\n";
		}
	}
	else
	{
		if (TrollType == Bridge)
		{
			std::cout << "Troll " << name << " shakes the bridge as you cross.\n";
		}
		else
		{
			std::cout << "Troll " << name << " swings a tree trunk at you.\n";
		}

	}
	
}

Troll::~Troll()
{
	std::cout << "Troll destroyed.\n";
}
