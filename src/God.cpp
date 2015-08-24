#include "God.h"

void God::load()
{
	get_instance().load_dynamic();
}

void God::init()
{
	get_instance().init_dynamic();
}

void God::update()
{
	get_instance().update_dynamic();
}

void God::draw()
{
	get_instance().draw_dynamic();
}

GameMain & God::get_game_main()
{
	return get_instance().game_main;
}






God & God::get_instance()
{
	static God god;
	return god;
}


void God::load_dynamic()
{
	game_main.load();
}

void God::init_dynamic()
{
	game_main.init();
}

void God::update_dynamic()
{
	game_main.update();
}

void God::draw_dynamic()
{
	game_main.draw();
}

