#include "Player.h"

Player::Player(const char* _name, Card* _hand, int _numCards, int _score, unsigned char _cheats){
	m_name = NULL;
	SetName(_name);
	//m_maxCards = _maxCards;
	m_numCards = _numCards;
	m_score = _score;
	m_cheats = _cheats;
	m_hand = new Card[m_maxCards];
	for (int i = 0; i < _numCards; i++)
	{
		m_hand[i].SetFace(_hand[i].GetFace());
		m_hand[i].SetSuit(_hand[i].GetSuit());

	}
}

//Cpy

Player::Player(const Player& _cpy) {
	m_name = nullptr;
	SetName(_cpy.m_name);
	m_hand = new Card[m_maxCards];
	// copy the hand array
	memcpy(m_hand, _cpy.m_hand, sizeof(Card)*_cpy.m_numCards);
	m_numCards = _cpy.m_numCards;
	m_score = _cpy.m_score;
}


//Dtor
Player::~Player(void){

	delete[] m_name;
	delete[] m_hand;
}

bool Player::GetCard(int index, Card& _card) const {

	if (index < m_numCards){
		_card = m_hand[index];
		return true;
	}
	return false;
}

void Player::SetName(const char* _name){
	if (!_name)
		return;

	delete[] m_name;
	int bytes = strlen(_name) + 1;
	m_name = new char[bytes];
	strcpy_s(m_name, bytes, _name);
}

void Player::AddToScore(int _score){

	m_score += _score;
}

bool Player::AddCard(Card _card){

	if (m_numCards < m_maxCards){
		m_hand[m_numCards] = _card;
		m_numCards++;
		return true;
	}
	return false;
}

bool Player::Discard(int index, Card& _card){

	if ( 0 <= index && index < m_numCards){
		_card = m_hand[index];
		int count = 0;
		for (int i = 0; i < m_numCards; i++){
			if (i == index)
				continue;
			m_hand[count] = m_hand[i];
			count++;
		}
		m_numCards--;
		return true;
	}
	return false;
}

void Player::Clear(void){

	m_numCards = 0;
}

void Player::Show() const{


}

void Player::CheatShow(void) const{

}

void Player::SetCheats(unsigned char _cheat){
		m_cheats = _cheat; // copy cheats
}

Player& Player::operator=(const Player& _assign){

	if (this != &_assign){

		SetName(_assign.m_name);
		delete[] m_hand;
		m_hand = new Card[m_maxCards];
		// copy the hand array
		for (int i = 0; i < _assign.m_numCards; i++)
		{
			m_hand[i].SetFace(_assign.m_hand[i].GetFace());
			m_hand[i].SetSuit(_assign.m_hand[i].GetSuit());
		}

		//m_maxCards = _assign.m_maxCards;
		m_numCards = _assign.m_numCards;
		m_score = _assign.m_score;
	}

	return *this;

}

int Player::Update(Player* _player, Deck& _deck){

	return 0;
}

int Player::ForcedDraw(Deck& _deck){
	return 0;
}

void Player::ShortCards(void){
	
	int num = this->GetNumCards();
	for (int i = 0; i < num - 1 ; i++){ 
		for (int j = i+1; j < num; j++){ 
			if (m_hand[i].GetSuit() < m_hand[j].GetSuit())
				swap(m_hand[i], m_hand[j]);
			else if (m_hand[i].GetSuit() == m_hand[j].GetSuit()){
				if (m_hand[i].GetFace() > m_hand[j].GetFace())
					swap(m_hand[i], m_hand[j]);
			}	
		}
	}
}

void Player::SetScore(int _score){
	m_score = _score;
}
