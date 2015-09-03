#pragma once

#include "Character.h"

/**
 * プレイヤーが選択したキャラを間接的に操作する
 */
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