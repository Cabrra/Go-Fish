#pragma once
#include "stdafx.h"
#include "Player.h"

class Computer: public Player
{
public:
	Computer(const char* _name = "Computer");

	void Show(void) const;
	
	//CHEATS
	void CheatShow(void) const;
	int ForcedDraw(Deck& _deck);

	int Update(Player* _player, Deck& _deck);
};

