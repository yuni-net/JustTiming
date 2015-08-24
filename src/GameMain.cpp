#include "GameMain.h"
#include "Character.h"
#include "CharaType.h"


void GameMain::load()
{
	chara_mate_storage.load();
	ground.load("data/ground.jpg");
}

void GameMain::init()
{
	camera_work.init();

	chara_list.setsize(1);
	init_chara(chara_list[0], CharaType::a_type, 0.0f, 0.0f);

	player.init(chara_list[0]);

	ground.x(0.0f);
	ground.y(0.0f);
	ground.z(0.0f);
	ground.culling(false);
	ground.rot_x(3.14159265f*0.5f);
}

void GameMain::update()
{
	camera_work.update();
	player.update();
}

void GameMain::draw()
{
	for (fw::uint chara_No = 0; chara_No < chara_list.size(); ++chara_No)
	{
		chara_list[chara_No].draw();
	}

	si3::Manager::register_display_object(ground);
}


const Player & GameMain::get_player()
{
	return player;
}




void GameMain::init_chara(Character & chara, CharaType::CharaTypeEnum type, float x, float z)
{
	chara.init(type, chara_mate_storage.get_model_data(type), x, z);
}