#include <simplect3D.h>
#include "CameraWork.h"
#include "God.h"

static const float range_from_player = 12.0f;
static const float height = 9.0f;

void CameraWork::init()
{
	si3::Camera & camera = si3::Manager::camera();

	camera.x(0.0f);
	camera.y(height);
	camera.z(0.0f);

	camera.look_x(0.0f);
	camera.look_y(0.0f);
	camera.look_z(0.0f);

	camera.up_x(0.0f);
	camera.up_y(0.0f);
	camera.up_z(1.0f);

}

void CameraWork::update()
{
	si3::Camera & camera = si3::Manager::camera();
	const si3::Key & key = si3::Manager::key();


	const auto & player = God::get_game_main().get_player();
	camera.x(player.get_x());
	camera.z(player.get_z() - range_from_player);

	camera.look_x(player.get_x());
	camera.look_z(player.get_z());
}

