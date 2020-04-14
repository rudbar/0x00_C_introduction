#include <windows.h>

// Определение функции
void foo(void)  
{
	const char *Foo = "This is the first thing we printed out.\n";
	OutputDebugStringA(
		"Линия 0\\Линия 1\n");
}

int WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nShowCmd
)
{
	foo();
}


