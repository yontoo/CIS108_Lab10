#include "NPC.h"

#pragma once

class Towny : public NPC {
public:
	Towny();
	~Towny();
	virtual void talk();
	virtual void attack();
};