#include "Character.h"

#pragma once

class NPC : public Character {
public:
	NPC();
	~NPC();
	virtual void talk() = 0;
};