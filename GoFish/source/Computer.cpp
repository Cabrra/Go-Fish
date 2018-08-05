#include "Computer.h"

Computer::Computer(const char* _name) : Player(_name){

}

void Computer::Show(void) const{
	Console::ForegroundColor(Cyan);
	if (GetNumCards() > 0){
		cout << GetName() << '\n';
		for (int i = 0; i < 2; i++){
			for (int j = 0; j < GetNumCards(); j++){
				cout << "  ";
				Console::BackgroundColor(Magenta);
				cout << "  ";
				Console::BackgroundColor(Black);
				cout << "  ";
			}
			cout << '\n';
		}
		Console::ResetColor();
		cout << '\n';
	}
	Console::ResetColor();
}

void Computer::CheatShow(void) const{ // Cheat show
	if (GetNumCards() > 0){


		if (GetNumCards() > 0){
			Console::ForegroundColor(Cyan);
			cout << this->GetName() << '\n';
			Console::ResetColor();
			for (int i = 0; i < 2; i++){
				for (int j = 0; j < GetNumCards(); j++){
					Card card;
					GetCard(j, card);
					cout << "  ";
					Console::BackgroundColor(White);
					if (i == 0){
						cout << "  \b\b";
						card.Show();
						Console::BackgroundColor(Black);
					}
					else{
						Console::BackgroundColor(White);
						if (card.GetSuit() == 3 || card.GetSuit() == 4)
							Console::ForegroundColor(Red);
						else
							Console::ForegroundColor(Black);
						cout << " " << card.GetSuit();
						Console::BackgroundColor(Black);
					}
					cout << "  ";

				}
				cout << '\n';
			}
			Console::ResetColor();
			cout << '\n';
		}
		Console::ResetColor();
	}
}


int Computer::Update(Player* _player, Deck& _deck){

	int card = 0;

	Player* cpyPlayer = this;
	Card ask;
	cpyPlayer->GetCard(0, ask);
	card = ask.GetFace();
	Console::ForegroundColor(Cyan);
	cout << '\n' << this->GetName() << " asked to " << _player->GetName() << '\n';
	cout << "and asked for a ";

	switch (card){
	case 11:{
				cout << "J...";
				break;
	}
	case 12:{
				cout << "Q...";
				break;
	}
	case 13:{
				cout << "K...";
				break;
	}
	case 14:{
				cout << "A...";
				break;
	}
	default:{
				cout << card << "...";
	}
	}

	Console::ResetColor();

	cout << "\n\n";

	system("pause");
	Console::Clear();

	Card checkCard(card, 4); // create a card with desired value
	int num = _player->GetNumCards(); // to avoid calling the same function over and over again

	bool success = false;
	for (int i = 0; i < num; i++){
		if (_player->GetCard(i, checkCard)){
			if (checkCard.GetFace() == card){
				_player->Discard(i, checkCard);
				this->AddCard(checkCard);
				success = true;
				Console::ForegroundColor(Yellow);
				cout << " SUCCESS!! And " << this->GetName() << " took it!!\n\n";
				Console::ResetColor();
				system("pause");

				return 1;
			}
		}
	}
	if (!success){  // if he fails he must draw one card
		Card pick; // if its the sane as asked card your turn goes on
		if (!_deck.IsEmpty()){
			_deck.Draw(pick);
			this->AddCard(pick);
			if (pick.GetFace() == card){
				Console::ForegroundColor(Yellow);
				cout << "\n" << this->GetName() << " drew a card with the same face as asked one.\n";
				cout << "So the turn goes on.\n\n";
				Console::ResetColor();
				system("pause");
				Console::Clear();
				return 1; // repeat turn
			}
		}
	}
	return 0;
}

int Computer::ForcedDraw(Deck& _deck){
	Card pick; 
	if (!_deck.IsEmpty()){
		_deck.Draw(pick);
		this->AddCard(pick);
	}
	return 0;
}

