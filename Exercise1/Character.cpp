#include "Character.h"
#include <iostream>

Character::Character(){
	std::cout << "Character created.\n";
}

Character::~Character() {
	std::cout << "Character destroyed.\n";
}