#include "NPC.h"

#pragma once

class Guard : public NPC {
public:
	Guard();
	~Guard();
	virtual void talk();
	virtual void attack();
};