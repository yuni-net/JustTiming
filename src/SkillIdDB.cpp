#include "SkillIdDB.h"

void SkillIdDB::load()
{
	// �ŏ���json�t�@�C����ǂݍ���ŁA�e�X�L��ID��ۑ����Ă����Ԃ����Ƃ�z�肵�Ă������A
	// ����ȕK�v�͖����Ƃ������ƂɋC�t�����B
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
