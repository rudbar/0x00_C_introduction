#include <windows.h>

// ����������� �������
void foo(void)  
{
	const char *Foo = "This is the first thing we printed out.\n";
	OutputDebugStringA(
		"����� 0\\����� 1\n");
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


