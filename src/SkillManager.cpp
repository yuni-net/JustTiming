#include "SkillManager.h"

void SkillManager::load()
{
	// todo
	skill_id_DB.load();
}

void SkillManager::init()
{
	// todo
	skill_list.clear();
}

void SkillManager::update()
{
	// todo
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


void SkillManager::invoke_skill(
	const float x, const float z,
	const float radian,
	const CharaType::CharaTypeEnum chara_type,
	const int chara_id,
	const SkillType::SkillTypeEnum skill_type)
{
	// todo
}


