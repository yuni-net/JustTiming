#pragma once

#include <simplect3D.h>

class Skill
{
public:
	Skill(
		const float x, const float z,
		const float radian,
		const int skill_type,
		const int chara_id);

	/**
	 * @brief Doing the process for each frame.
	 * @return
	 *     the case that this skill object should be deleted: true
	 *     the case that this skill object should be still alive: false
	 */
	bool update();
	void draw();


private:
	si3::Anime ground_effect;
	si3::Billboard effect;
};