#include "Player.h"

void Player::init(Character & chara)
{
	this->chara = &chara;
}

void Player::update()
{
	const si3::Key & key = si3::Manager::key();

	float vx = 0.0f;
	float vz = 0.0f;

	if (key.pushing(DIK_UP))
	{
		vz += 1000.0f;
	}
	if (key.pushing(DIK_RIGHT))
	{
		vx += 1000.0f;
	}
	if (key.pushing(DIK_DOWN))
	{
		vz += -1000.0f;
	}
	if (key.pushing(DIK_LEFT))
	{
		vx += -1000.0f;
	}

	chara->move(vx, vz);
}



float Player::get_x() const
{
	return chara->get_x();
}
float Player::get_z() const
{
	return chara->get_z();
}
