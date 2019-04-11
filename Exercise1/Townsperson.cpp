#include <iostream>
#include "TownsPerson.h"

Towny::Towny() {
	std::cout << "A towns person is born.\n";
}

void Towny::talk()
{
	std::cout << "Help! A troll is eating my corn crop!\n";
}

void Towny::attack()
{

}

Towny::~Towny() {
	std::cout << "Towns person destroyed.\n";
}