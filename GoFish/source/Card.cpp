#include "Card.h"


Card::Card(int _face, char _suit){
	m_face = _face;
	m_suit = _suit;
}

void Card::SetFace(int _face){
	m_face = _face;
}

void Card::SetSuit(char _suit){
	m_suit = _suit;
}

void Card::Show() const
{
	cout << *this;	// overload
}

//Cout overload

ostream& operator<<(ostream& _os, const Card& _rhs)
{
	if (_rhs.GetSuit() == 3 || _rhs.GetSuit() == 4)
		Console::ForegroundColor(Red);
	else
		Console::ForegroundColor(Black);

	switch (_rhs.m_face){
	case 11:{
				_os << 'J' << ' ';
				break;
	}
	case 12:{
				_os << 'Q' << ' ';
				break;
	}
	case 13:{
				_os << 'K' << ' ';
				break;
	}
	case 14:{
				_os << 'A' << ' ';
				break;
	}
	default:{
				if (_rhs.m_face == 10)
					_os << _rhs.m_face;
				else
					_os << _rhs.m_face << ' ';
	}
	}

	Console::ResetColor();


	return _os;

}