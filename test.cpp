#include <windows.h>
#include <stdio.h>

// Определение функции
void bar(void)
{
	int BarVariable;

	BarVariable = 100;
}

void foo(void)  
{
	const char *Foo = "This is the first thing we printed out.\r\n";
	OutputDebugStringA(
		"Линия 0\\Линия 1\n");

	int FooVariable;

	FooVariable = 200;

	bar();
}

struct projectile
{
	// These are the members, or "fields" of this structure!

	char unsigned IsThisOnFire; // 1 if it's on fire, 0 if it's not
	int Damage; // This is how much damage it does on impact
	int ParticlesPerSecond; // For special effects
	short HowManyCooks; // Too many cooks? 

	// 1 byte + 4 bytes + 4 bytes + 2 bytes = 11 bytes (actually 16)
};

int WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nShowCmd
)
{
	/*
	char SmallS; // 8 bits - 256 different values [-128,127]
	char unsigned SmallU; // 8 bits unsigned - 256 different values [0, 255]

	short MediumS; // 16 bits - 65536 different values
	short unsigned MediumU;

	int LargeS; // 32 bits - 4 billion
	int unsigned LargeU;
	*/

	projectile Test;

	int SizeOfChar = sizeof(char unsigned);
	int SizeOfInt = sizeof(int);
	int SizeOfProjectile = sizeof(projectile);
	int SizeOfTest = sizeof(Test);

	Test.IsThisOnFire = 1;
	Test.Damage = 2;
	Test.ParticlesPerSecond = 3;
	Test.HowManyCooks = 4;


	projectile Projectiles[40];

	int WhichProjectile = 4;
	Projectiles[WhichProjectile];

	projectile *ProjectilePointer = Projectiles;

	int SizeOfProjectiles = sizeof(Projectiles); // 16 * 40
	int SizeOfProjectilePointer = sizeof(ProjectilePointer); // 4

	Projectiles[30].Damage = 60;
	(ProjectilePointer + 30)->Damage = 100;

	char *BytePointer = (char *)ProjectilePointer;
	BytePointer = BytePointer + 30 * sizeof(projectile);
	projectile *Thirty = (projectile *)BytePointer;
	Thirty->Damage = 200;

	((projectile *)((char *)ProjectilePointer + 30 * sizeof(projectile)))->Damage = 200;
}


