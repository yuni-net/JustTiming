#pragma once

#include <simplect3D.h>
#include "CharaType.h"
#include "SkillType.h"

/**
 * キャラクターの実体。
 */
class Character
{
public:
	/**
	 * @brief このキャラクターの情報を初期化する。
	 * @param
	       chara_id: 全てのキャラクターの中で一意の数値を指定します。
	       chara_type: キャラクタータイプをCharaType::CharaTypeEnum値で指定します。
	       x: 初期x座標を指定します。
		   z: 初期z座標を指定します。
	 */
	void init(
		int chara_id,
		CharaType::CharaTypeEnum chara_type,
		float x, float z);

	/**
	 * @brief 特定スキルのサジェストを表示します。
	 * @param
	       vx: スティックの傾きのx座標を指定します。
		   vz: スティックの傾きのz座標を指定します。
		   skill_type: スキルタイプを指定します。
	 */
	void suggest_skill(float vx, float vz, SkillType::SkillTypeEnum skill_type);

	/**
	 * @brief 特定スキルを発動します。
	 * @param
		 vx: スティックの傾きのx座標を指定します。
		 vz: スティックの傾きのz座標を指定します。
		 skill_type: スキルタイプを指定します。
	 */
	void invoke_skill(float vx, float vz, SkillType::SkillTypeEnum skill_type);

	/**
	* @brief キャラを移動させます。
	* @param
		vx: スティックの傾きのx座標を指定します。
		vz: スティックの傾きのz座標を指定します。
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