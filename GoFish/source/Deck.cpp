#include "Deck.h"

Deck::Deck(void){
	Initialize();
}

Deck::~Deck(void){
}

void Deck::Initialize(){
	int count = 0;
	for (int i = 3; i <= 6; i++){ // Loop for suit
		for (int j = 2; j <= 14; j++){
			m_cards[count].SetFace(j);
			switch (i){
			case 3:
			{
					  m_cards[count].SetSuit(char(i));
					  break;
			}
			case 4:
			{
					  m_cards[count].SetSuit(char(i));
					  break;
			}
			case 5:
			{
					  m_cards[count].SetSuit(char(i));
					  break;
			}
			case 6:
			{
					  m_cards[count].SetSuit(char(i));
					  break;
			}
			}
			count++;
		}
	}
	int lie = 0;
}

void Deck::Shuffle(){
	Clear();
	for (int i = 0; i < 200; i++){
		int temp = rand() % 52;
		int temp2 = rand() % 52;
		std::swap(m_cards[temp], m_cards[temp2]);
	}
	for (int i = 0; i < 52; i++){
		m_Stack.Push(m_cards[i]);
	}
}

bool Deck::Draw(Card& _card){
	return m_Stack.Pop(_card);
}

void Deck::Clear(){
	m_Stack.Clear();
}

bool Deck::IsEmpty() const{
	return !m_Stack.GetCurrSize();
}