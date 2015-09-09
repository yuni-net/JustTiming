#include "SkillIdDB.h"

void SkillIdDB::load()
{
	// 最初はjsonファイルを読み込んで、各スキルIDを保存してそれを返すことを想定していたが、
	// そんな必要は無いということに気付いた。
	// Nothing
}

int SkillIdDB::get_basic(CharaType::CharaTypeEnum chara_type)
{
	return 3 * chara_type + 0;
}

int SkillIdDB::get_util(CharaType::CharaTypeEnum chara_type)
{
	return 3 * chara_type + 1;
}

int SkillIdDB::get_spec(CharaType::CharaTypeEnum chara_type)
{
	return 3 * chara_type + 2;
}
