#pragma once

#include <simplect3D.h>
#include "CharaType.h"

class Character
{
public:
	/**
	 * @brief このキャラクターの情報を初期化する。
	 * @param
	       chara_type: キャラクタータイプをCharaType::CharaTypeEnum値で指定します。
		   model_data: 設定したいモデルデータを指定します。
	       x: 初期x座標を指定します。
		   y: 初期y座標を指定します。
	 */
	void init(CharaType::CharaTypeEnum chara_type, si3::ModelData & model_data, float x, float z);

	/**
	 * @brief 特定スキルのサジェストを表示します。
	 * @param
	       vx: スティックの傾きのx座標を指定します。
		   vy: スティックの傾きのy座標を指定します。
	 */
	void suggest_skill_basic(float vx, float vz);
	void suggest_skill_util(float vx, float vz);
	void suggest_skill_spec(float vx, float vz);

	/**
	 * @brief 特定スキルを発動します。
	 * @param
		 vx: スティックの傾きのx座標を指定します。
		 vy: スティックの傾きのy座標を指定します。
	 */
	void invoke_skill_basic(float vx, float vz);
	void invoke_skill_util(float vx, float vz);
	void invoke_skill_spec(float vx, float vz);

	/**
	* @brief キャラを移動させます。
	* @param
		vx: スティックの傾きのx座標を指定します。
		vy: スティックの傾きのy座標を指定します。
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