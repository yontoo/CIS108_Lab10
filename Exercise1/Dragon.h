#include "Monster.h"

#pragma once

class Dragon : public Monster {
public:
	enum Type
	{
		Fire,
		Ice,
		Stone
	};

public:
	Dragon();
	~Dragon();
	virtual void attack();
	void SetType(Type);
};