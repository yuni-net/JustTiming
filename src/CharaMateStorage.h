#pragma once

#include <simplect3D.h>
#include "CharaType.h"

class CharaMateStorage
{
public:
	/**
	 * @brief �L�����̑S��ނ̃��f����ǂݍ��񂶂Ⴄ�B
	 */
	void load();

	/**
	 * @brief ����̎�ނ̃��f���f�[�^��Ԃ��B
	 */
	const si3::ModelData & get_model_data(CharaType::CharaTypeEnum type) const;



private:
	fw::Array<si3::ModelData> list;
};