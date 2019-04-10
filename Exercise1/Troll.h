#include "Monster.h"

#pragma once

class Troll : Monster {
public:
	Troll();
	~Troll();
private:
	enum Type {
		Bridge,
		Forest
	};
	int malice;
};