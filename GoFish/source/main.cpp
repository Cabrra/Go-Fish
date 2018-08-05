// main.cpp : Entry point for the project

#include "stdafx.h"

#include "Game.h"

/***********/
/* Globals */
/***********/

/**************/
/* Prototypes */
/**************/

int main(int, const char*[])
{
	// This will check for memory leaks.  They will show up in your
	// output window along with the line number.  Replace the 
	// -1 argument in the second call with the allocation number
	// and then trace back through the call stack to find the leak.
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1);
	
	srand(unsigned int(time(0)));
	Game game;
	game.Run();

	Console::ResetColor();
	cout << "\n\n";
	system("pause");
	return 0;
}

