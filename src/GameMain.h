#pragma once

#include <simplect3D.h>
#include "CharaType.h"
#include "CharaMateStorage.h"
#include "Player.h"
#include "Character.h"
#include "CameraWork.h"



class GameMain
{
public:
	void load();
	void init();
	void update();
	void draw();

	const Player & get_player();



private:
	fw::Array<Character> chara_list;
	Player player;
	CharaMateStorage chara_mate_storage;
	CameraWork camera_work;
	si3::Leaf ground;


	/**
	 * @brief キャラクターを初期化する。
	 * @param
		chara: 初期化したいキャラクターを指定します。
		type: キャラタイプを指定します。
		x: x座標を指定します。
		y: y座標を指定します。
	 */
	void init_chara(Character & chara, CharaType::CharaTypeEnum type, float x, float z);
};