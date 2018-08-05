#include "Human.h"

Human::Human(const char* _name): Player(_name){

}

void Human::CheatShow(void) const{

}

void Human::Show(void) const{ 
	if (GetNumCards() > 0){

		if (GetNumCards() > 0){
			Console::ForegroundColor(Green);
			cout << this->GetName() << '\n';
			Console::ResetColor();
			for (int i = 0; i < 2; i++){
				for (int j = 0; j < GetNumCards(); j++){
					Card card;
					GetCard(j, card);
					cout << "  ";
					Console::BackgroundColor(White);
					if (i == 0){
						//if (card.GetFace() == 10)
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
			//Console::Clear();
		}
		Console::ResetColor();
	}
}

int Human::Update(Player* _player, Deck& _deck){
	
	int card = 0;

	do{
		for (;;){
			Console::ResetColor();
			cout << "Choose a card from your hand to ask for a pair (2-14) ";
			Console::ForegroundColor(Green);

			if (cin >> card && card > 1 && card < 15){
				cin.ignore(INT_MAX, '\n');
				break;

			}
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		if (this->GetCheats() & (1 << 2))
			break; // ask for any card
		cout << '\n';
		Console::ResetColor();
		bool haveIt = false;
		Card check(2, 4); // create a card with desired value
		int num = this->GetNumCards(); // to avoid calling the same function over and over again

		for (int i = 0; i < num; i++){
			this->GetCard(i, check);
			if (check.GetFace() == card){
				haveIt = true;
				break;
			}
		}
		if (haveIt){
			break;
		}
		else{
			Console::ForegroundColor(Red);
			cout << "ERROR!! You don't have that card. \n";
			Console::ResetColor();
		}
	} while (true); // select the card

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
				cout << " SUCCESS!! and you took it\n\n";
				Console::ResetColor();
				system("pause");
				Console::Clear();
				return 1;
			}
		}
	}
	if (!success){  // if he fails he must draw one card
		Card pick;
		if (!_deck.IsEmpty()){
			_deck.Draw(pick);
			this->AddCard(pick);
			if (pick.GetFace() == card){
				Console::ForegroundColor(Yellow);
				cout << "\n" << this->GetName() << " You drew a card with the same face as asked one.\n";
				cout << "So the turn goes on.\n\n";
				Console::ResetColor();
				system("pause");
				Console::Clear();
				return 1; // repeat turn
			}
			else{
				Console::ForegroundColor(Green);

				cout << "You drew a ";
				
				int val = pick.GetFace();
				switch (val){
				case 11:{
							cout << "J.\n\n";
							break;
				}
				case 12:{
							cout << "Q.\n\n";
							break;
				}
				case 13:{
							cout << "K.\n\n";
							break;
				}
				case 14:{
							cout << "A.\n\n";
							break;
				}
				default:{
							cout << val << ".\n\n";
				}
				}
				Console::ResetColor();
			}
		}
	}
	Console::Clear();
	return 0;
}

int Human::ForcedDraw(Deck& _deck){
	return 0;
}
