#include "Dragon.h"

int main() {
	
	Dragon Dragon1, Dragon2, Dragon3;
	Dragon1.SetType(Dragon::Type::Fire);
	Dragon1.gender = "Male";
	Dragon1.name = "John";
	Dragon1.attack();
	Dragon2.SetType(Dragon::Type::Ice);
	Dragon2.gender = "Female";
	Dragon2.name = "Jess";
	Dragon2.attack();
	Dragon3.SetType(Dragon::Type::Stone);
	Dragon3.gender = "Male";
	Dragon3.name = "Joe";
	Dragon3.attack();
	system("pause");
	return 0;
}