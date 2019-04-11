#include "Dragon.h"
#include "Troll.h"
#include "TownsPerson.h"
#include "Guardian.h"

int main() {
	
	Dragon Dragon1, Dragon2, Dragon3;
	Troll Troll1, Troll2, Troll3;
	Towny Towny1, Towny2, Towny3;
	Guard Guard1, Guard2, Guard3;
	Dragon1.SetType(Dragon::Type::Fire);
	Dragon1.gender = "Male";
	Dragon1.name = "John";
	Dragon1.health = 70;
	Dragon1.magicka = 70;
	Dragon1.attack();

	Dragon2.SetType(Dragon::Type::Ice);
	Dragon2.gender = "Female";
	Dragon2.name = "Jess";
	Dragon2.health = 50;
	Dragon2.magicka = 100;
	Dragon2.attack();

	Dragon3.SetType(Dragon::Type::Stone);
	Dragon3.gender = "Male";
	Dragon3.name = "Joe";
	Dragon3.health = 100;
	Dragon3.magicka = 50;
	Dragon3.attack();

	Troll1.SetTrollType(Troll::Type::Bridge);
	Troll1.malice = 40;
	Troll1.name = "Jax";
	Troll1.gender = "Male";
	Troll1.attack();

	Troll2.SetTrollType(Troll::Type::Bridge);
	Troll2.malice = 99;
	Troll2.name = "Jelly";
	Troll2.gender = "Female";
	Troll2.attack();
	
	Troll3.SetTrollType(Troll::Type::Bridge);
	Troll3.malice = 70;
	Troll3.name = "Joey";
	Troll3.gender = "Male";
	Troll3.attack();

	Towny1.health = 40;
	Towny1.magicka = 0;
	Towny1.gender = "Male";
	Towny1.name = "Jiggly";
	Towny1.talk();

	Towny2.health = 40;
	Towny2.magicka = 0;
	Towny2.gender = "Male";
	Towny2.name = "Juan";
	Towny2.talk();

	Towny3.health = 40;
	Towny3.magicka = 0;
	Towny3.gender = "Female";
	Towny3.name = "Jalissa";
	Towny3.talk();

	Guard1.health = 55;
	Guard1.magicka = 20;
	Guard1.gender = "Female";
	Guard1.name = "Helen";
	Guard1.talk();

	Guard2.health = 55;
	Guard2.magicka = 20;
	Guard2.gender = "Male";
	Guard2.name = "Harry";
	Guard2.talk();

	Guard3.health = 55;
	Guard3.magicka = 20;
	Guard3.gender = "Male";
	Guard3.name = "Henry";
	Guard3.talk();

	system("pause");
	return 0;
}