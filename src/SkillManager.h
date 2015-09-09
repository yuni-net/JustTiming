#pragma once

#include <list>
#include "SkillType.h"
#include "CharaType.h"
#include "SkillIdDB.h"
#include "Skill.h"

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






private:
	std::list<Skill> skill_list;
	SkillIdDB skill_id_DB;
};