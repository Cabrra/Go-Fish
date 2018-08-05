#pragma once
#include "stdafx.h"
#include "Player.h"

class Human: public Player
{

public:
	Human(const char* _name = "Human");

	void Show(void) const;
	//CHEATS
	void CheatShow(void) const;
	int ForcedDraw(Deck& _deck);

	void ShortCards(void);
	int Update(Player* _player, Deck& _deck);

	friend class CTestManager;
};

