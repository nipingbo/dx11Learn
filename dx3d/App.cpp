#include "App.h"

App::App()
	:wnd(800, 600, "The game box")
{
}

int App::Go()
{
	MSG msg;
	BOOL gResult;
	while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		DoFrame();
	}
	if (gResult == -1)
	{
		throw CHWND_LAST_EXCEPT();
	}
	return msg.wParam;
}

void App::DoFrame()
{
}
