#include "stdafx.h"
#include <Windows.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	CreateMutex(NULL, TRUE, L"ROBLOX_singletonEvent"); //bInitialOwner is TRUE, takes ownership and holds it until this process exits

	printf("You can now use multiple ROBLOX clients. Closing this will cause all ROBLOX clients to terminate except for one.\n");
	printf("Press any key to close");
	getch();
	return 0;
}
