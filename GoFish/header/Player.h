#pragma once
#include "stdafx.h"
#include "Card.h"
#include "Deck.h"

class Player
{

private:

	char* m_name;			// Can change size of array if needed
	Card* m_hand;			// Can change size of array if needed

	int m_numCards;		// The number of cards the player is currently holding
	const int m_maxCards = 14;		// The number of cards the player can store (the number of elements in Hand)
	int m_score;		
	
	unsigned char m_cheats = 0;

public:
	Player(const char* _name = "Player", Card* _hand = nullptr, int _numCards = 0, int _score = 0, unsigned char _cheat = 0);
	Player(const Player& _cpy);
	~Player(void);

	virtual int Update(Player* _player, Deck& _deck) = 0;

#pragma region Accessors and Mutators

	const char* GetName() const { return m_name; }
	bool GetCard(int index, Card& _hand) const ;
	int GetNumCards() const { return m_numCards;  }
	int GetMaxCards() const { return m_maxCards; }
	int GetScore() const { return m_score; }
	char GetCheats() const { return m_cheats; }
	
	void SetName(const char* _name);
	void AddToScore(int _score);
	void SetCheats(unsigned char _cheat);
	void SetScore(int _score);

#pragma endregion

	bool AddCard (Card _card);
	bool Discard (int index, Card& _cards);
	void Clear (void);
	virtual void Show (void) const = 0; // empty and redefinided by sons
	//CHEATS
	virtual void CheatShow(void) const;
	virtual int ForcedDraw(Deck& _deck);
	void ShortCards(void);

	Player& operator=(const Player& _assign);
	
	friend class CTestManager;

};

