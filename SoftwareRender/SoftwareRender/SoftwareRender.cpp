#include <windows.h>

#include "Application.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int nCmdShow)
{
	Application* app = new Application;

	if(app->init(800, 600, "S.G SoftRender"))
	{
		app->run();
	}
	app->close();
	delete app;
	app = 0;

	return 0;
}