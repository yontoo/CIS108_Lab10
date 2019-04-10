#include <string>

#pragma once

class Character {
public:
	Character();
	~Character();
	virtual void attack() = 0;
public:
	std::string name, gender;
	int health, magicka;
};