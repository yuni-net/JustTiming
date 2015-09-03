#include "SkillManager.h"

void SkillManager::load()
{
	skill_id_DB.load();
}

void SkillManager::init()
{
	skill_list.clear();
}

void SkillManager::update()
{
	auto rator = skill_list.begin();
	while (rator != skill_list.end())
	{
		Skill & skill = *rator;
		bool should_delete = skill.update();
		if (should_delete)
		{
			rator = skill_list.erase(rator);
		}
		else
		{
			++rator;
		}
	}
}

void SkillManager::draw()
{
	auto rator = skill_list.begin();
	while (rator != skill_list.end())
	{
		Skill & skill = *rator;
		skill.draw();
	}
}

void SkillManager::invoke_basic(float x, float z, float radian, CharaType::CharaTypeEnum chara_type, int chara_id)
{
	const int skill_type = skill_id_DB.get_basic(chara_type);
	Skill skill(x, z, radian, skill_type, chara_id);
	skill_list.push_back(skill);
}
void SkillManager::invoke_util(float x, float z, float radian, CharaType::CharaTypeEnum chara_type, int chara_id)
{
	const int skill_type = skill_id_DB.get_util(chara_type);
	Skill skill(x, z, radian, skill_type, chara_id);
	skill_list.push_back(skill);
}
void SkillManager::invoke_spec(float x, float z, float radian, CharaType::CharaTypeEnum chara_type, int chara_id)
{
	const int skill_type = skill_id_DB.get_spec(chara_type);
	Skill skill(x, z, radian, skill_type, chara_id);
	skill_list.push_back(skill);
}
