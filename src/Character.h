#pragma once

#include <simplect3D.h>
#include "CharaType.h"

class Character
{
public:
	/**
	 * @brief ���̃L�����N�^�[�̏�������������B
	 * @param
	       chara_type: �L�����N�^�[�^�C�v��CharaType::CharaTypeEnum�l�Ŏw�肵�܂��B
		   model_data: �ݒ肵�������f���f�[�^���w�肵�܂��B
	       x: ����x���W���w�肵�܂��B
		   y: ����y���W���w�肵�܂��B
	 */
	void init(CharaType::CharaTypeEnum chara_type, si3::ModelData & model_data, float x, float z);

	/**
	 * @brief ����X�L���̃T�W�F�X�g��\�����܂��B
	 * @param
	       vx: �X�e�B�b�N�̌X����x���W���w�肵�܂��B
		   vy: �X�e�B�b�N�̌X����y���W���w�肵�܂��B
	 */
	void suggest_skill_basic(float vx, float vz);
	void suggest_skill_util(float vx, float vz);
	void suggest_skill_spec(float vx, float vz);

	/**
	 * @brief ����X�L���𔭓����܂��B
	 * @param
		 vx: �X�e�B�b�N�̌X����x���W���w�肵�܂��B
		 vy: �X�e�B�b�N�̌X����y���W���w�肵�܂��B
	 */
	void invoke_skill_basic(float vx, float vz);
	void invoke_skill_util(float vx, float vz);
	void invoke_skill_spec(float vx, float vz);

	/**
	* @brief �L�������ړ������܂��B
	* @param
		vx: �X�e�B�b�N�̌X����x���W���w�肵�܂��B
		vy: �X�e�B�b�N�̌X����y���W���w�肵�܂��B
	*/
	void move(const float vx, const float vz);

	void draw() const;



	float get_x() const;
	float get_z() const;



private:
	si3::Model model;
	float move_speed;




	float compute_len(const float vx, const float vz);
	float compute_max_len(const float vx, const float vz);
};