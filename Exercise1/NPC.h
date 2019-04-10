#include "Character.h"

#pragma once

class NPC : Character {
public:
	NPC();
	~NPC();
	virtual void talk();
};