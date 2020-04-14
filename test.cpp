#include <windows.h>

// Определение функции
void foo(void)  
{
	const char *Foo = "This is the first thing we printed out.\r\n";
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
	char SmallS; // 8 bits - 256 different values [-128,127]
	char unsigned SmallU; // 8 bits unsigned - 256 different values [0, 255]

	short MediumS; // 16 bits - 65536 different values
	short unsigned MediumU;

	int LargeS; // 32 bits - 4 billion
	int unsigned LargeU;

	char unsigned Test;

	Test = 255;
	Test = Test + 1;
	
	foo();
}


