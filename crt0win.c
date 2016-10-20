#include <Windows.h>

extern int WINAPI WinMain(HINSTANCE hinstExe, HINSTANCE hinstPrev,
	LPSTR pszCmdLine, int nCmdShow);

extern void __cdecl WinMainCRTStartup() {
	unsigned int mainret;

	mainret = WinMain(GetModuleHandle(NULL), NULL, 0, 0);

	ExitProcess(mainret);
}
