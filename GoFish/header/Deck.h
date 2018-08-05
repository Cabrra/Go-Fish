#pragma once
#include "stdafx.h"
#include "Card.h"
#include "Stack.h"

// A Deck of cards
class Deck
{

#if GO_FISH
	Card m_cards[52];
#elif UNO
	Card m_cards[108];
#endif
	
	Stack<Card> m_Stack;

public:

	Deck(void);
	~Deck(void);

	void Initialize();
	void Shuffle();
	bool Draw(Card& _card);
	void Clear();
	bool IsEmpty() const;

	friend class CTestManager;

};

