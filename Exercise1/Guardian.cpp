#include <iostream>
#include "Guardian.h"

Guard::Guard() {
	std::cout << "A guardian is born.\n";
}

void Guard::talk() {
	std::cout << "I will defend this place to the death!\n";
}

void Guard::attack() {

}

Guard::~Guard() {
	std::cout << "Guardian destroyed.\n";
}