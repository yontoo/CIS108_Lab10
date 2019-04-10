#include <iostream>
#include "Dragon.h"

Dragon::Type DragonType;

Dragon::Dragon()
{
	std::cout << "Dragon born.\n";
}

void Dragon::SetType(Type TypeIn)
{
	DragonType = TypeIn;
}

void Dragon::attack()
{
	if (gender == "Male")
	{
		if (DragonType == Fire)
		{
			std::cout << "Dragon "<< name << " blows fire from his mouth!" << std::endl;
		}
		else if (DragonType == Ice)
		{
			std::cout << "Dragon " << name << " blows ice from his mouth!" << std::endl;
		}

		else if (DragonType == Stone)
		{
			std::cout << "Dragon " << name << " stomps the ground!" << std::endl;
		}
	}
	else
	{
		if (DragonType == Fire)
		{
			std::cout << "Dragon " << name << " blows fire from her mouth!" << std::endl;
		}
		else if (DragonType == Ice)
		{
			std::cout << "Dragon " << name << " blows ice from her mouth!" << std::endl;
		}

		else if (DragonType == Stone)
		{
			std::cout << "Dragon " << name << " stomps the ground!" << std::endl;
		}
	}
}

Dragon::~Dragon() {
	std::cout << "Dragon destroyed.\n";
}