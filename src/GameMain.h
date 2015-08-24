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
	 * @brief �L�����N�^�[������������B
	 * @param
		chara: �������������L�����N�^�[���w�肵�܂��B
		type: �L�����^�C�v���w�肵�܂��B
		x: x���W���w�肵�܂��B
		y: y���W���w�肵�܂��B
	 */
	void init_chara(Character & chara, CharaType::CharaTypeEnum type, float x, float z);
};