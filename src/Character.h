#pragma once

#include <simplect3D.h>
#include "CharaType.h"

/**
 * �L�����N�^�[�̎��́B
 */
class Character
{
public:
	/**
	 * @brief ���̃L�����N�^�[�̏�������������B
	 * @param
	       chara_type: �L�����N�^�[�^�C�v��CharaType::CharaTypeEnum�l�Ŏw�肵�܂��B
		   model_data: �ݒ肵�������f���f�[�^���w�肵�܂��B
	       x: ����x���W���w�肵�܂��B
		   z: ����z���W���w�肵�܂��B
	 */
	void init(
		int chara_id,
		CharaType::CharaTypeEnum chara_type,
		float x, float z);

	/**
	 * @brief ����X�L���̃T�W�F�X�g��\�����܂��B
	 * @param
	       vx: �X�e�B�b�N�̌X����x���W���w�肵�܂��B
		   vz: �X�e�B�b�N�̌X����z���W���w�肵�܂��B
	 */
	void suggest_skill_basic(float vx, float vz);
	void suggest_skill_util(float vx, float vz);
	void suggest_skill_spec(float vx, float vz);

	/**
	 * @brief ����X�L���𔭓����܂��B
	 * @param
		 vx: �X�e�B�b�N�̌X����x���W���w�肵�܂��B
		 vz: �X�e�B�b�N�̌X����z���W���w�肵�܂��B
	 */
	void invoke_skill_basic(float vx, float vz);
	void invoke_skill_util(float vx, float vz);
	void invoke_skill_spec(float vx, float vz);

	/**
	* @brief �L�������ړ������܂��B
	* @param
		vx: �X�e�B�b�N�̌X����x���W���w�肵�܂��B
		vz: �X�e�B�b�N�̌X����z���W���w�肵�܂��B
	*/
	void move(const float vx, const float vz);

	void draw() const;



	float get_x() const;
	float get_z() const;



private:
	int chara_id;
	CharaType::CharaTypeEnum chara_type;
	si3::Model model;
	float move_speed;

	//Suggest suggest;

	si3::Leaf suggest_basic;
	si3::Leaf suggest_util;
	si3::Leaf suggest_spec;

	//fw::Array<Buff> buff_list;
	//Buff => buff_type, buff_count, buff_max_count




	float compute_len(const float vx, const float vz);
	float compute_max_len(const float vx, const float vz);
};