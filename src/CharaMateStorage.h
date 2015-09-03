#pragma once

#include <simplect3D.h>
#include "CharaType.h"

class CharaMateStorage
{
public:
	/**
	 * @brief キャラの全種類のモデルを読み込んじゃう。
	 */
	void load();

	/**
	 * @brief 特定の種類のモデルデータを返す。
	 */
	const si3::ModelData & get_model_data(CharaType::CharaTypeEnum type) const;



private:
	fw::Array<si3::ModelData> list;
};