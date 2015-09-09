#include "GameMain.h"
#include "Character.h"
#include "CharaType.h"


void GameMain::load()
{
	chara_mate_storage.load();
	ground.load("data/ground.jpg");
	skill_manager.load();
}

void GameMain::init()
{
	camera_work.init();

	chara_list.setsize(1);
	chara_list[0].init(1, CharaType::a_type, 0.0f, 0.0f);

	player.init(chara_list[0]);

	ground.x(0.0f);
	ground.y(0.0f);
	ground.z(0.0f);
	ground.culling(false);
	ground.rot_x(3.14159265f*0.5f);

	skill_manager.init();
}

void GameMain::update()
{
//	collisionm.clear();

	camera_work.update();
	player.update();
	skill_manager.update();

//	collisionm.judge();
}

void GameMain::draw()
{
	for (fw::uint chara_No = 0; chara_No < chara_list.size(); ++chara_No)
	{
		chara_list[chara_No].draw();
	}

	si3::Manager::register_display_object(ground);
	skill_manager.draw();
}


const Player & GameMain::get_player()
{
	return player;
}

const CharaMateStorage & GameMain::get_chara_mate_storage() const
{
	return chara_mate_storage;
}


SkillManager & GameMain::get_skill_manager()
{
	return skill_manager;
}

#if 0
CollisionManager & GameMain::get_collision_manager()
{
	return collisionm;
}
#endif

