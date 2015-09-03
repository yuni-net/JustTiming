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
	const CharaMateStorage & get_chara_mate_storage() const;
	SkillManager & get_skill_manager();



private:
	fw::Array<Character> chara_list;
	Player player;
	CharaMateStorage chara_mate_storage;
	CameraWork camera_work;
	si3::Leaf ground;
	SkillManager skill_manager;


};