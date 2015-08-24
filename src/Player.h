#pragma once

#include "Character.h"

class Player
{
public:
	void init(Character & chara);
	void update();

	float get_x() const;
	float get_z() const;



private:
	Character * chara;
};