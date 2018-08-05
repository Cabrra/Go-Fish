#pragma once
#include "stdafx.h"

class Card
{
	int m_face;
	char m_suit;

public:

	//Constructor
	Card(int _face = 2, char _suit = 3);
	void Show() const;

#pragma region Accessors and Mutators

	int GetFace() const { return m_face; }
	char GetSuit() const { return m_suit; }

	void SetFace(int _face);
	void SetSuit(char _suit);

#pragma endregion

#define CARD_REL_OP(op)\
	bool operator op(const Card& _rhs) const\
	{\
	return (m_face op _rhs.m_face); \
	}

		CARD_REL_OP(>)
		CARD_REL_OP(<)
		CARD_REL_OP(>= )
		CARD_REL_OP(<= )
		CARD_REL_OP(== )
		CARD_REL_OP(!= )

		friend ostream& operator<<(ostream& _os, const Card& _rhs);

};