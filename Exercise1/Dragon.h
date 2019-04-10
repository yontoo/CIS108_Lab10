#include "Monster.h"

#pragma once

class Dragon : Monster {
public:
	Dragon();
	~Dragon();
	virtual void attack();
private:
	enum Type
	{
		Fire,
		Ice,
		Stone
	};
};