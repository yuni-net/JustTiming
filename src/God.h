#pragma once

#include "GameMain.h"

/**
 * ���̃v���O�����̑S�Ă𓝊�����N���X�B
 */
class God
{
public:
	static void load();
	static void init();
	static void update();
	static void draw();

	static GameMain & get_game_main();






private:
	GameMain game_main;


	static God & get_instance();

	void load_dynamic();
	void init_dynamic();
	void update_dynamic();
	void draw_dynamic();

};