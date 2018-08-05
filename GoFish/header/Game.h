#pragma once
#include <iostream>
using namespace std;
#include "Player.h"
#include "Deck.h"
#include "Human.h"
#include "computer.h"
#pragma comment(lib, "winmm.lib")
#include<conio.h>
#include <stdlib.h>  
#include <windows.h>   // for PlaySound() 
#include <iostream>
#include <fstream>


// Enum of gamestates, you can add and remove from this if you need additional ones (examples include: GAME_TITLE, GAME_MENU, GAME_OPTIONS, etc).
enum GAMESTATE { GAME_INIT, GAME_TITLE, GAME_MENU, GAME_PLAY, GAME_END, ROUND_INIT, ROUND_END};

class Game
{

		Player* m_players[4];	// The players in the game
		Deck m_Deck;			// The deck of cards
		int m_currPlayer;		// Keeps track of which index is currently taking their turn

		int m_numPlayers;		// Total number of players
		int m_winner;
		bool m_music;
		bool m_exit;

		bool _godCard, _rows, _platinum, _chea;
		int acumScore;		// achievement score
		short winsRow;		// achievement wins
		
		unsigned char m_activeCheats;  //Cheats
		unsigned char m_achievements;   //Achievements
	
		GAMESTATE m_state;

public:
	Game();
	~Game();

	// The main function of the game, this loops until a certain gamestate is set.
	void Run();
	void SetState(GAMESTATE _state) { m_state = _state; }
	void Score(Player* _player);
};