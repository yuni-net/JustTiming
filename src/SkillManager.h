#pragma once

#include "CharaType.h"
#include "SkillType.h"

class SkillManager
{
public:
	void load();
	void init();
	void update();
	void draw();

	void invoke_skill(
		const float x, const float z,
		const float radian,
		const CharaType::CharaTypeEnum chara_type,
		const int chara_id,
		const SkillType::SkillTypeEnum skill_type);
};