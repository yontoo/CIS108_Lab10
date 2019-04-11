#include "Monster.h"

#pragma once

class Troll : public Monster {
public:
	enum Type {
		Bridge,
		Forest
	};
	int malice;
public:
	Troll();
	~Troll();
	void SetTrollType(Type);
	virtual void attack();
};