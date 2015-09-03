#pragma once

#include <list>
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

	void invoke_basic(float x, float z, float radian, CharaType::CharaTypeEnum chara_type, int chara_id);
	void invoke_util(float x, float z, float radian, CharaType::CharaTypeEnum chara_type, int chara_id);
	void invoke_spec(float x, float z, float radian, CharaType::CharaTypeEnum chara_type, int chara_id);






private:
	std::list<Skill> skill_list;
	SkillIdDB skill_id_DB;
};