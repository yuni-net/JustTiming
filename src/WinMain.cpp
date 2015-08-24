#include <simplect3D.h>
#include "God.h"

int WINAPI WinMain(HINSTANCE hI, HINSTANCE hP, LPSTR lpC, int nC)
{
	fw::xrandom_init(static_cast<unsigned long>(time(NULL)));

	if (si3::Manager::init() == false)
	{
		fw::popup("failed");
		return -1;
	}


	God::load();
	God::init();


	while (si3::Manager::begin_frame())
	{
		God::update();
		God::draw();


		si3::Manager::show();


	}

	return 0;
}

