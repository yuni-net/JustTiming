#pragma once

#include <simplect3D.h>
#include "CharaType.h"

class SkillIdDB
{
public:
	void load();

	int get_basic(CharaType::CharaTypeEnum chara_type);
	int get_util(CharaType::CharaTypeEnum chara_type);
	int get_spec(CharaType::CharaTypeEnum chara_type);



private:
	struct SkillId
	{
		int basic;
		int util;
		int spec;
	};

	fw::Array<SkillId> skill_id_list;
};