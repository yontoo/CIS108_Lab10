#include <iostream>
#include "Dragon.h"

Dragon::Dragon()
{
	std::cout << "Dragon born.";
}

void Dragon::attack()
{
	Dragon::Type Type;
	if (Type == Fire)
	{
		std::cout << "Dragon <name> blows fire from their mouth!" << std::endl;
	}
	else if (Type == Ice)
	{
		std::cout << "Dragon <name> blows ice from their mouth!" << std::endl;
	}
	else if (Type == Stone)
	{
		std::cout << "Dragon <name> stomps the ground!" << std::endl;
	}
	else
	{
		std::cout << "Something bad happened.";
	}
}