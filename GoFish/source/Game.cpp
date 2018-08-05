#include "Game.h"

Game::~Game(){
	delete[] m_players;
}

void Winner(Player& win){
	for (int i = 1; i < 13; i++){
		Console::ResetColor();
		if (i % 2 == 0)
			Console::ForegroundColor(DarkMagenta);

		else{
			Console::ForegroundColor(DarkRed);
		}
		Console::Lock(true);
		Console::Clear();
		cout << "    :::       ::::::::::::::::::    :::::::    ::::::::::::::::::::::	\n";
		cout << "   :+:       :+:    :+:    :+:+:   :+::+:+:   :+::+:       :+:    :+:	\n";
		cout << "  +:+       +:+    +:+    :+:+:+  +:+:+:+:+  +:++:+       +:+    +:+   \n";
		cout << " +#+  +:+  +#+    +#+    +#+ +:+ +#++#+ +:+ +#++#++:++#  +#++:++#:		\n";
		cout << "+#+ +#+#+ +#+    +#+    +#+  +#+#+#+#+  +#+#+#+#+       +#+    +#+		\n";
		cout << "#+#+# #+#+#     #+#    #+#   #+#+##+#   #+#+##+#       #+#    #+#		\n";
		cout << "###   ###  ##############    #######    #################    ###		\n";

		if (i % 2 == 0)
			Console::ForegroundColor(DarkRed);

		else{
			Console::ForegroundColor(DarkMagenta);
		}

		cout << "\t    :::       ::::::::::::::::::    :::::::    ::::::::::::::::::::::z\n";
		cout << "\t   :+:       :+:    :+:    :+:+:   :+::+:+:   :+::+:       :+:    :+:\n";
		cout << "\t  +:+       +:+    +:+    :+:+:+  +:+:+:+:+  +:++:+       +:+    +:+ \n";
		cout << "\t +#+  +:+  +#+    +#+    +#+ +:+ +#++#+ +:+ +#++#++:++#  +#++:++#:	\n";
		cout << "\t+#+ +#+#+ +#+    +#+    +#+  +#+#+#+#+  +#+#+#+#+       +#+    +#+	\n";
		cout << "\t#+#+# #+#+#     #+#    #+#   #+#+##+#   #+#+##+#       #+#    #+#	\n";
		cout << "\t###   ###  ##############    #######    #################    ###	\n";

		Console::ResetColor();
		Console::ForegroundColor(DarkYellow);
		cout << "\nCONGRATULATIONS!!\n";
		cout << "\t\t\t" << win.GetName() << "\n\n";
		Console::ResetColor();
		Console::CursorVisible(false);
		Console::Lock(false);
		Sleep(850);

	}
	Console::CursorVisible(true);
}

void IsDraw(void){
	for (int i = 1; i < 13; i++){
		Console::ResetColor();
		if (i % 2 == 0)
			Console::ForegroundColor(Gray);

		else{
			Console::ForegroundColor(DarkGreen);
		}
		Console::Lock(true);
		Console::Clear();
		cout << "\t\t __    ___   __    __        _\n";
		cout << "\t\t/ _\\  /___\\ /__\\  /__\\/\\_/\\ / \\ \n";
		cout << "\t\t\\ \\  //  /// \\// / \\//\\_ _//  /\n";
		cout << "\t\t_\\ \\/ \\_/// _  \\/ _  \\ / \\/\\_/ \n";
		cout << "\t\t\\__/\\___/ \\/ \\_/\\/ \\_/ \\_/\\/  \n";

		if (i % 2 == 0)
			Console::ForegroundColor(DarkGreen);

		else{
			Console::ForegroundColor(Gray);
		}

		cout << "  _____  _____    _____  __       _        ___   __    _   __    __   _\n";
		cout << "  \\_   \\/__   \\   \\_   \\/ _\\     /_\\      /   \\ /__\\  /_\\ / / /\\ \\ \\ / \\	\n";
		cout << "   / /\\/  / /\\/    / /\\/\\ \\     //_\\\\    / /\\ // \\// //_\\\\\\ \\/  \\/ //  /\n";
		cout << "/\\/ /_   / /    /\\/ /_  _\\ \\   /  _  \\  / /_/// _  \\/  _  \\\\  /\\  //\\_/ \n";
		cout << "\\____/   \\/     \\____/  \\__/   \\_/ \\_/ /___,' \\/ \\_/\\_/ \\_/ \\/  \\/ \\/   \n\n";

		Console::ResetColor();
		Console::CursorVisible(false);
		Console::Lock(false);
		Sleep(850);

	}
	Console::CursorVisible(true);
}

void Tittle(){

	Console::ForegroundColor(Yellow);


	cout << "     # ###            # ###                  ##### ##       #####  # #######       #####    ##\n";
	cout << "    /  /###  /       /  /###            ######  /### / ######  / /       ###  ######  /  #### /\n";
	cout << "   /  /  ###/       /  /  ###          /#   /  /  ##/ /#   /  / /         ## /#   /  /   ####/\n";

	Console::ForegroundColor(Gray);

	cout << "  /  ##   ##       /  ##   ###        /    /  /    # /    /  /  ##        # /    /  /    # #\n";
	cout << " /  ###           /  ###    ###           /  /           /  /    ###            /  /     # \n";
	cout << "##   ##          ##   ##     ##          ## ##          ## ##   ## ###         ## ##     #\n";
	cout << "##   ##   ###    ##   ##     ##          ## ##          ## ##    ### ###       ## ##     #\n";
	cout << "##   ##  /###  / ##   ##     ##          ## ######    /### ##      ### ###     ## ########\n";
	cout << "##   ## /  ###/  ##   ##     ##          ## #####    / ### ##        ### /##   ## ##     #\n";
	cout << "##   ##/    ##   ##   ##     ##          ## ##          ## ##          #/ /##  ## ##     ##\n";
	cout << " ##  ##     #     ##  ##     ##          #  ##     ##   ## ##           #/ ##  #  ##     ##\n";
	cout << "  ## #      /      ## #      /              #     ###   #  /             # /      /       ##\n";
	cout << "   ###     /        ###     /           /####      ###    /    /##        /   /##/        ##\n";

	Console::ForegroundColor(Yellow);



	cout << "    ######/          ######/           /  #####     #####/    /  ########/   /  #####      ##\n";
	cout << "      ###              ###            /    ###        ###    /     #####    /     ##       \n";
	cout << "                                      #                      |              #             \n";
	cout << "                                     ##                     \\)             ##  \n";

	Console::ForegroundColor(DarkYellow);

	cout << "\t\t\t     _         _    \n";
	cout << "\t\t\t    ( )       (_ )     \n";
	cout << "\t\t\t   _| |   __   | |  _   _          __  \n";
	cout << "\t\t\t /'_` | /'__`\\ | | ( ) ( )(`\\/') /'__`\\ \n";
	cout << "\t\t\t( (_| |(  ___/ | | | (_) | >  < (  ___/ \n";
	cout << "\t\t\t`\\__,_)`\\____)(___)`\\___/'(_/\\_)`\\____) \n\n";

	Console::ResetColor();

}


Game::Game()
{
	Console::SetWindowSize(Console::WindowWidth(), 48);
	PlaySound(TEXT("Music//Piano.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	char* name = new char[100];
	while (true){
		cout << "Enter your name please: ";
		Console::ForegroundColor(Green);
		if (cin.get(name, sizeof name) && sizeof name > 1){
			Console::ResetColor();
			break;
		}
		Console::ResetColor();
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	Console::ResetColor();
	m_players[0] = new Human(name);
	delete[] name;

	Console::Clear();
	m_activeCheats = m_players[0]->GetCheats(); // set to 0
	m_achievements = m_players[0]->GetCheats(); // set to 0

	m_state = GAME_MENU;
	acumScore = winsRow = 0; // set achievem variables to 0
	m_music = true;
	_godCard, _rows, _platinum, _chea = false;
}

void Game::Score(Player* _player){
	Card check1(2, 4); // create a card with desired value
	Card check2(2, 4);
	int num = _player->GetNumCards(); // to avoid calling the same function over and over again


	int counter = 0;
	for (int i = 0; i < num; i++){
		_player->GetCard(i, check1);
		for (int j = (i + 1); j < num; j++){
			_player->GetCard(j, check2);

			if (check1.GetFace() == check2.GetFace()){
				_player->Discard(i, check1);
				_player->Discard(j - 1, check2);
				counter++;
				num -= 2;
				i = 0;
				j = 1;
				break;
			}

		}
	}
	_player->AddToScore(counter);
	if (_player == m_players[0])
		Console::ForegroundColor(Green);
	else
		Console::ForegroundColor(Cyan);

	cout << "\n" << _player->GetName() << " did " << counter << " pair(s).\n\n";
	Console::ResetColor();
	system("pause");
	cout << '\n';
	//	return 0;
}

void Game::Run(){
	// Bool to control whether the game should continue to run.
	bool bRun = true;

	// Loop while our bool remains true.
	while (bRun)
	{
		switch (m_state)
		{
		case GAME_INIT:
		{
						  if (m_music){
							  LPCTSTR sound = TEXT("Music//Loop.wav");
							  PlaySound(sound, NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
						  }
						  cin.clear();
						 // cin.ignore(INT_MAX, '\n');
						  do{
							  cout << "How many computer players do you like (1-3)? ";
							  Console::ForegroundColor(Green);
							  cin >> m_numPlayers;
							  if (cin.fail() || cin.bad() || cin.eof()){
								  cin.clear();
								  cin.ignore(INT_MAX, '\n');
								  Console::ResetColor();
								  m_numPlayers = -5;
								  Console::Clear();
							  }
						  } while (m_numPlayers <= 0 || m_numPlayers > 4);
						  Console::ResetColor();

						  m_Deck.Shuffle();

						  Console::Clear();

						  for (int i = 1; i <= m_numPlayers; i++){
							  // set names with switch
							  switch (i)
							  {
							  case 1:
							  {
										m_players[1] = new Computer("Dr Pieper");
										break;
							  }
							  case 2:{
										 m_players[2] = new Computer("Missigno");
										 break;
							  }
							  case 3:{
										 m_players[3] = new Computer("Kratos");
										 break;
							  }
							  }
						  }

						  m_numPlayers++; // to include the Human player,
						  m_players[0]->SetScore(0);


						  if (m_activeCheats &(1 << 5) || m_activeCheats &(1 << 6)){
							  m_Deck.Clear();
							  if (m_activeCheats &(1 << 5))
								  m_players[0]->AddToScore(2700); // instant win
							  if (m_activeCheats &(1 << 6)){
								  int num;
								  do{
									  num = (rand() % m_numPlayers )+ 1; // instant lose
									}while (num == 0);
								  m_players[num]->AddToScore(270);
							  }
							  cout << '\n';
							  m_state = GAME_END; //END

							  break;
						  }
						  else{
							  for (int i = 0; i < m_numPlayers; i++){
								  for (int j = 0; j < 7; j++){
									  Card drawCard; // initialize the initial hands
									  m_Deck.Draw(drawCard);
									  m_players[i]->AddCard(drawCard);
								  }
							  }
							  Console::ForegroundColor(Red);
							  cout << "INITIAL HAND CHECK\n";
							  cout << "===================\n\n";
							  Console::ResetColor();

							  for (int i = 0; i < m_numPlayers; i++)
								  Score(m_players[i]);

							  int temp = rand() % m_numPlayers; // Random start
							  switch (temp){
							  case 0:
							  {
										m_currPlayer = 0;
										break;
							  }
							  case 1:
							  {
										m_currPlayer = 1;
										break;
							  }
							  case 2:
							  {
										m_currPlayer = 2;
										break;
							  }
							  case 3:
							  {
										m_currPlayer = 3;
										break;
							  }
							  }
							  Console::ForegroundColor(Red);
							  cout << "\nGAME START\n";
							  cout << "===========\n\n";
							  Console::ResetColor();
						  }
						  m_players[0]->ShortCards();
						  system("pause");

						  Console::Clear();

						  m_state = GAME_PLAY;
						  break;
		}
		case GAME_MENU:
		{

						  // Insert menu code here.
						  bool op = false;
						  const char* cheatList[8] = // Cheats
						  {
							  "See Computer cards",			//0- CheatShow()  -- DONE
							  "Force draw",					//1- ForcedDraw(player, deck) -- DONE
							  "Ask any card",				//2- Update --DONE
							  "Change console color",		//3- (Random) console color change
							  "Set default console color",	//4- SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
							  "Instantly win",				//5- INIT -- DONE
							  "Instantly lose",				//6- INIT -- DONE
							  "Easter egg",					//7- super fancy thing
						  };

						  const char* achievementList[4] = // Achievements
						  {
							  "Real God of Cards               Beat Krato's high score.",	//0- Score of 10.000 -- DONE
							  "Magic hands                     Active all cheats.",			//1- Active all cheats at once -- DONE
							  "Go Fish champion                Win 10 games in a row.",		//2- Win 5 games in a row --DONE
							  "Platinum trophy (PSN)           Unlock all achievements",	//3 - unlock allother achievements
						  };


						  Tittle();
						  Console::CursorVisible(false);
						  Sleep(3000);
						  cout << '\n';

						  Console::ForegroundColor(Yellow);
						  cout << "  ) PLAY GAME...\n";  //line 25 -- DONE
						  Console::ForegroundColor(Gray);
						  cout << "  ) INSTRUCTIONS...\n"; // DONE
						  cout << "  ) CHEATS & ACHIEVEMENTS...\n";
						  cout << "  ) HIGH-SCORES...\n";  // DONE
						  cout << "  ) MUSIC ON/OFF...\n"; // DONE
						  Console::ForegroundColor(Yellow);
						  cout << "  ) EXIT...\n"; // Line 30 -- DONE
						  Console::ResetColor();
						  cout << "\n\n\t(Use Up/Down arrows and Enter to select)";
						  Console::SetCursorPosition(0, 25);
						  cout << ">\b";

						  //cin >> string; //or even cin.getline(const char[], int) // for store the key sequence BUFFER??
						  // cin.ignore(256, '\n').
						  //char a;
						  do{
							  if (!(GetAsyncKeyState(VK_UP) & 0x8000) && !(GetAsyncKeyState(VK_DOWN) & 0x8000)){ // Key held

								  switch (_getch()){
								  case 80: {
											   cout << " ";
											   if (Console::CursorTop() == 30)
												   Console::SetCursorPosition(0, 25);
											   else
												   Console::SetCursorPosition(0, Console::CursorTop() + 1);
											   cout << ">\b";
											   break;
								  }
								  case 72:{
											  cout << " ";
											  if (Console::CursorTop() == 25)
												  Console::SetCursorPosition(0, 30);
											  else
												  Console::SetCursorPosition(0, Console::CursorTop() - 1);
											  cout << ">\b";
											  break;
								  }
								  case '\r':{ // Enter pressed 
												switch (Console::CursorTop()){
												case 25: // New Game
												{
															 m_state = GAME_INIT;
															 Console::Clear();
															 op = true;
															 break;
												}
												case 26: // Instructions
												{
															 Console::Clear();
															 cout << "Welcome to Go Fish Deluxe.\n\n";
															 cout << "This game has the normal rules of the game: \n\n";
															 cout << "\t1) Every player starts with 7 cards.\n";
															 cout << "\t2) The game flow is asking other players for cards and make pairs.\n";
															 cout << "\t3) Each pair gives 1 point.\n";
															 cout << "\t4) After drawing all cards from the deck the game is over.\n";
															 cout << "\t5) The deck has 52 cards. So the max #pairs is 26.\n";
															 cout << "\t6) The player with the biggest amount of pairs at the end wins.\n\n";

															 Console::SetCursorPosition(25, Console::CursorTop());
															 system("pause");

															 cout << "\n\nControls:\n\n";
															 cout << "\tIf there are more than 1 computer player, you must select a player to ask.\n";
															 cout << "\t(1 – 3) then you must ask for a card that there is in your hand.\n";
															 cout << "\tIf you got a success your turn goes on.\n";
															 cout << "\tIf not you must draw a card from the deck.\n";
															 cout << "\t\t** If you draw the asked card your turn goes on.\n\n";

															 Console::SetCursorPosition(25, Console::CursorTop());
															 Console::ForegroundColor(Red);
															 cout << "Have fun!!\n\n";
															 Console::ResetColor();

															 Console::SetCursorPosition(25, Console::CursorTop());
															 system("pause");
															 m_state = GAME_MENU;
															 op = true;
															 Console::Clear();
															 break;
												}
												case 27: //Cheats
												{
															 do{
																 Console::Lock(false);
																 //check active achievements
																 if (!_platinum){
																	 int count = 0;
																	 for (int i = 0; i < 3; i++)
																	 {
																		 if (m_achievements & (1 << i))
																			 count++;
																		 else
																			 break;
																	 }
																	 if (count == 3){
																		 Console::ForegroundColor(Magenta);
																		 Console::SetCursorPosition(25, 30);
																		 cout << "Platinum trophy (PSN)";
																		 Console::ResetColor();
																		 Sleep(3000);
																		 Console::SetCursorPosition(25, 30);
																		 cout << "                     ";
																		 m_achievements |= 1 << (3);
																		 _platinum = true;
																	 }
																 }

																 // check active cheats
																 if (!_chea){
																	 int count = 0;
																	 for (int i = 0; i < 8; i++)
																	 {
																		 if (m_activeCheats & (1 << i))
																			 count++;
																		 else
																			 break;
																	 }
																	 if (count == 8){
																		 Console::ForegroundColor(Magenta);
																		 Console::SetCursorPosition(25, 30);
																		 cout << "Magic hands";
																		 Console::ResetColor();
																		 Sleep(3000);
																		 Console::SetCursorPosition(25, 30);
																		 cout << "                 ";
																		 m_achievements |= 1 << (1);
																		 _chea = true;
																		
																	 }
																 }

																 Console::Clear();
																 Console::SetCursorPosition(24, Console::CursorTop());
																 cout << "CHEAT LIST\n";
																 Console::SetCursorPosition(24, Console::CursorTop());
																 cout << "===========\n\n";

																 cout << "In this screen you can enable/disable cheats entering codes.\n";
																 cout << "You can also see the unlocked achievements.\n\n";
																 for (int i = 0; i < 8; i++){ //Show cheat list
																	 cout << i + 1 << ": ";
																	 if (m_activeCheats & (1 << i))
																		 Console::ForegroundColor(Yellow);
																	 else
																		 Console::ForegroundColor(Gray);
																	 cout << cheatList[i];
																	 Console::ResetColor();
																	 cout << "\n";
																 }

																 Console::SetCursorPosition(24, Console::CursorTop());
																 cout << "ACHIEVEMENT LIST\n";
																 Console::SetCursorPosition(24, Console::CursorTop());
																 cout << "=================\n\n";

																 for (int i = 0; i < 4; i++){ //Show achievement list
																	 cout << i + 1 << ": ";
																	 if (m_achievements & (1 << i))
																		 Console::ForegroundColor(Yellow);
																	 else
																		 Console::ForegroundColor(Gray);
																	 cout << achievementList[i];

																	 Console::ResetColor();
																	 cout << '\n';
																 }
																 cout << "\nEnter cheats pressing keys (there is a sleep of 1.5 seconds so enter the codes slowly)\n";
																 cout << "Press <Escape> to go back...";
																// Console::Lock(true);
																 do{
																	 //cin >> chet;


																	 if (GetAsyncKeyState(0x50) & 0x8000 && GetAsyncKeyState(0x45) & 0x8000 &&
																		 GetAsyncKeyState(0x4B) & 0x8000){
																		 m_activeCheats ^= 1 << (0); // 0 see cards = PEK
																		 break;
																	 }
																	 if ((GetAsyncKeyState(0x46) & 0x8000) && (GetAsyncKeyState(VK_SPACE) & 0x8000) &&
																		 (GetAsyncKeyState(0x52) & 0x8000)){
																		 m_activeCheats ^= 1 << (1); // 1 Force draw = F+espace+R
																		 break;
																	 }
																	 if (GetAsyncKeyState(0x41) & 0x8000 && GetAsyncKeyState(0x53) & 0x8000 && GetAsyncKeyState(0x4B) & 0x8000){
																		 m_activeCheats ^= 1 << (2); // 2 ask any card = ASK
																		 break;
																	 }
																	 if (GetAsyncKeyState(0x43) & 0x8000 && GetAsyncKeyState(0x48) & 0x8000 && GetAsyncKeyState(0x4E) & 0x8000){
																		 m_activeCheats |= 1 << (3); // 3 Change console color CHN - This code cant be disabled
																		 int num = rand() % 16 + 1;

																		 switch (num){
																		 case 1:
																		 {
																				   system("color 10");
																				   break;
																		 }
																		 case 2:
																		 {
																				   system("color 20");
																				   break;
																		 }
																		 case 3:
																		 {
																				   system("color 30");
																				   break;
																		 }
																		 case 4:
																		 {
																				   system("color 40");
																				   break;
																		 }
																		 case 5:
																		 {
																				   system("color 50");
																				   break;
																		 }
																		 case 6:
																		 {
																				   system("color 60");
																				   break;
																		 }
																		 case 7:
																		 {
																				   system("color 70");
																				   break;
																		 }
																		 case 8:
																		 {
																				   system("color 80");
																				   break;
																		 }
																		 case 9:
																		 {
																				   system("color 90");
																				   break;
																		 }
																		 case 10:
																		 {
																					system("color 19");
																					break;
																		 }
																		 case 11:
																		 {
																					system("color 1A");
																					break;
																		 }
																		 case 12:
																		 {
																					system("color 1B");
																					break;
																		 }
																		 case 13:
																		 {
																					system("color 1C");
																					break;
																		 }
																		 case 14:
																		 {
																					system("color 1D");
																					break;
																		 }
																		 case 15:
																		 {
																					system("color 1E");
																					break;
																		 }
																		 case 16:
																		 {
																					system("color 1F");
																					break;
																		 }

																		 }
																		 break;
																	 }
																	 if (GetAsyncKeyState(0x42) & 0x8000 && GetAsyncKeyState(0x4C) & 0x8000 && GetAsyncKeyState(0x4B) & 0x8000){
																		 m_activeCheats |= 1 << (4); // 4 Set default console color = BLK - This code too
																		 system("color 0");
																		 break;
																	 }
																	 if (GetAsyncKeyState(0x57) & 0x8000 && GetAsyncKeyState(0x49) & 0x8000 && GetAsyncKeyState(0x4E) & 0x8000){
																		 m_activeCheats ^= 1 << (5); // Instantly win = WIN
																		 break;
																	 }
																	 if (GetAsyncKeyState(0x58) & 0x8000 && GetAsyncKeyState(0x59) & 0x8000 && GetAsyncKeyState(0x5A) & 0x8000){
																		 m_activeCheats ^= 1 << (6); // Instantly lose = XYZ
																		 break;
																	 }
																	 if (GetAsyncKeyState(0x4D) & 0x8000 && GetAsyncKeyState(0x49) & 0x8000 && GetAsyncKeyState(0x4C) & 0x8000){
																		 m_activeCheats |= 1 << (7); // Easyer egg - MIL like the original wolfstentein game
																		 cin.clear();
																		 cin.ignore(INT_MAX, '\n');
																		 Console::Clear();
																		 PlaySound(TEXT("Music//imperial.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
																		 Console::Lock(false);
																		 Console::ForegroundColor(Red);
																		 cout << "                      _    _  __  _  _ _____  ___ ___ \n";
																		 Sleep(1000);
																		 cout << "                      | /\\ | |__| |\\ |   |   |___ |  \\ \n";
																		 Sleep(1000);
																		 cout << "                      |/  \\| |  | | \\|   |   |___ |__/ \n\n";
																		 Console::ResetColor();
																		 Sleep(1000);
																		 cout << "\tF O R   C R I M E S   A G A I N S T   T H E   E M P I R E; \n";
																		 Sleep(1000);
																		 cout << " ________________________  _________________________  _______________________ \n";
																		 Sleep(1000);
																		 cout << "|        .......         ||      .x%%%%%%x.         ||  ,.------;:~~:-.      | \n";
																		 Sleep(1000);
																		 cout << "|      ::::::;;::.       ||     ,%%%%%%%%%%%        || /:.\\`;;|||;:/;;:\\     | \n";
																		 Sleep(1000);
																		 cout << "|    .::;::::;::::.      ||    ,%%%'  )'  \\%        ||:')\\`:\\||::/.-_':/)    | \n";
																		 Sleep(1000);
																		 cout << "|   .::::::::::::::      ||   ,%x%) __   _ Y        ||`:`\\\\\\ ;'||'.''/,.:\\   | \n";
																		 Sleep(1000);
																		 cout << "|   ::`_```_```;:::.     ||   :%%% ~=-. <=~|        ||==`;.:`|;::/'/./';;=   | \n";
																		 Sleep(1000);
																		 cout << "|   ::=-) :=-`  ::::     ||   :%%::. .:,\\  |        ||:-/-%%% | |%%%;;_- _:  | \n";
																		 Sleep(1000);
																		 cout << "| `::|  / :     `:::     ||   `;%:`\\. `-' .'        ||=// %wm)..(mw%`_ :`:\\  | \n";
																		 Sleep(1000);
																		 cout << "|   '|  `~'     ;:::     ||    ``x`. -===-;         ||;;--', /88\\ -,- :-~~|  | \n";
																		 Sleep(1000);
																		 cout << "|    :-:==-.   / :'      ||     / `:`.__.;          ||-;~~::'`~^~:`::`/`-=:) | \n";
																		 Sleep(1000);
																		 cout << "|    `. _    .'.d8:      ||  .d8b.  :: ..`.         ||(;':)%%%' `%%%.`:``:)\\ | \n";
																		 Sleep(1000);
																		 cout << "|~  `-+8888888888P  `-. _||d888888888b. ( 8b       /|| |);/( ;~~~~ :)\\`;;.``\\| \n";
																		 Sleep(1000);
																		 cout << "|-'     ~~^^^^~~  `./8 ~ ||~   ~`888888b  `8b     /:|| //\\'/,/|;;|:(: |.|\\;|\\| \n";
																		 Sleep(1000);
																		 cout << "|8b /  /  |   \\  \\  `8   ||  ' ' `888888   `8. _ /:/||/) |(/ | / \\|\\\\`( )- ` | \n";
																		 Sleep(1000);
																		 cout << "| P        `          8  || '      )88888b   8b |):X||;):):)/.):|/) (`:`\\\\`-`| \n";
																		 Sleep(1000);
																		 cout << "|                    8b  ||   ~ - |888888   `8b/:/:\\||;%/ //;/(\\`.':| ::`\\\\;`| \n";
																		 Sleep(1000);
																		 cout << "|                    `8  ||       |888888    88\\/~~;||;/~( \\|./;)|.|):;\\. \\\\-| \n";
																		 Sleep(1000);
																		 cout << "|                     8b ||       (888888b   88|  / ||/',:\\//) ||`.|| (:\\)):%| \n";
																		 Sleep(1000);
																		 cout << "|         .           `8 ||\\       \\888888   8-:   /||,|/;/(%;.||| (|(\\:- ; :| \n";
																		 Sleep(1000);
																		 cout << "|________/_\\___________8_||_\\_______\\88888_.'___\\__/||_%__%:__;_:`_;_:_.\\%_`_| \n\n";
																		 Sleep(1000);
																		 cout << "L u k e  S k y w a l k e r      H a n   S o l o          C h e w b a c c a \n\n";
																		 Sleep(1000);
																		 cout << "Self-Proclaimed Jedi Knight     Smuggler, Pirate         Smuggler, Pirate \n";
																		 Sleep(1000);
																		 cout << "     500,000 credits            200,000 credits          100,000 credits \n\n";
																		 Sleep(1000);
																		 cout << "               The above are wanted for the following crimes: \n\n";
																		 Sleep(1000);
																		 cout << "    - Liberation of a known criminal, Princess Leia Organa of Alderaan - \n";
																		 Sleep(1000);
																		 cout << "         - Direct involvement in armed revolt against the Empire - \n";
																		 Sleep(1000);
																		 cout << "                               - High treason - \n";
																		 Sleep(1000);
																		 cout << "                               - Espionage - \n";
																		 Sleep(1000);
																		 cout << "                               - Conspiracy - \n";
																		 Sleep(1000);
																		 cout << "                    - Destruction of Imperial Property - \n\n";
																		 Sleep(1000);
																		 cout << "           These individuals are considered extremely dangerous. \n\n";
																		 Sleep(1000);
																		 Console::ForegroundColor(Red);
																		 cout << "       E X P E R I E N C E D   B O U N T Y   H U N T E R S   O N L Y \n";
																		 Console::ResetColor();
																		 Sleep(1000);
																		 cout << "   The Empire will not  be held  responsible  for any  injuries or property \n";
																		 Sleep(1000);
																		 cout << "  loss arising from the  attempted apprehension of these  notorious crimi-\n";
																		 Sleep(1000);
																		 cout << "  nals. Bounty is for live capture only! For more information contact your \n";
																		 Sleep(1000);
																		 cout << "local Imperial Intelligence Office.      ";
																		 Sleep(3000);
																		 cout << "This message will self-destruct after 5 seconds...";
																		 Sleep(5000);

																		break;
																	 }
																	

																	 if (GetAsyncKeyState(VK_ESCAPE)){
																		 op = true;
																		 break;
																	 }
																 } while (true);
																 Sleep(1500);
															 } while (!op);
															 if (m_music)
																 PlaySound(TEXT("Music//Piano.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
															 else
																 PlaySound(NULL, NULL, NULL);

															 m_players[0]->SetCheats(m_activeCheats); // update cheats
															 op = true;
															 Console::Clear();
															 m_state = GAME_MENU;
															 break;
												}
												case 28:  //Highscores
												{

															  Console::Clear();
															  Console::SetCursorPosition(32, 0);
															  Console::ForegroundColor(Yellow);
															  cout << "HIGH-SCORES\n";
															  Console::SetCursorPosition(32, 1);
															  cout << "============\n\n";
															  Console::ResetColor();
															  ifstream readHighScores;
															  readHighScores.open("Highscores.txt");
															  char readData[100];
															  //int readScore;
															  Console::ForegroundColor(Gray);
															  if (readHighScores.is_open()) {
																  while (!readHighScores.eof()) {
																	  Console::SetCursorPosition(24, Console::CursorTop());
																	  readHighScores.getline(readData, 100);
																	  cout << "Name: " << readData;
																	  if (strlen(readData) <= 6)
																		  cout << "\t\t  ";
																	  else if (strlen(readData) >= 9)
																		  cout << "\t";
																	  else
																		  cout << "\t\t  ";
																	  readHighScores.getline(readData, 100);
																	  cout << "Score:   " << readData << "\n";
																  }
															  }
															  else{
																  Console::ForegroundColor(Red);
																  cout << "ERROR! Unable to open file.\n";
															  }
															  readHighScores.close();
															  cout << "\n\n";
															  Console::ResetColor();
															  Console::SetCursorPosition(24, Console::CursorTop());

															  system("pause");
															  op = true;
															  Console::Clear();
															  break;
												}
												case 29: //Music
												{
															 if (m_music){
																 m_music = false;
																 PlaySound(NULL, NULL, NULL);
															 }
															 else{
																 m_music = true;
																 PlaySound(TEXT("Music//Piano.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
															 }

															 break;
												}
												case 30:  //exit
												{
															  exit(0);
															  break;
												}

												}

								  }

								  }

							  }

						  } while (!op);

						  Console::CursorVisible(true);
						  // clean music
						  break;
		}
		case GAME_PLAY:
		{
						  bool repeat = false;
						  if (m_Deck.IsEmpty() && m_players[m_currPlayer]->GetNumCards() == 0){ //if there aren't cards to draw and the player not
							  Console::ForegroundColor(Yellow);
							  cout << m_players[m_currPlayer]->GetName() << " is out because there aren't cards left \nto refill the hand.\n\n";
							  Console::ResetColor();
							  system("pause");
							  Console::Clear();
							  m_currPlayer = (m_currPlayer + 1) % m_numPlayers;					// has cards in hand. Can't play.
							  break;
						  }
						  else if (!m_Deck.IsEmpty() && m_players[m_currPlayer]->GetNumCards() == 0){ // empty hand at the beginning of the turn

							  for (int j = 0; j < 7; j++){

								  if (!m_Deck.IsEmpty()){ // check if deck has cards
									  Card drawCard; // initialize the initial hands
									  m_Deck.Draw(drawCard);
									  m_players[m_currPlayer]->AddCard(drawCard);
								  }
								  else
									  break;
							  }
							  Console::ForegroundColor(Yellow);
							  cout << m_players[m_currPlayer]->GetName() << " had to refill the hand with " << m_players[m_currPlayer]->GetNumCards() << " cards. \n\n";
							  Console::ResetColor();
							  system("pause");
							  Console::Clear();

							  Score(m_players[m_currPlayer]);

						  }

						  int play = -1;

						  do{
							  if (m_players[m_currPlayer]->GetNumCards() == 0){ // if the hand is empty Draw new hand
								  for (int i = 0; i < 7; i++){
									  if (!m_Deck.IsEmpty()){
										  Card pick;
										  m_Deck.Draw(pick);
										  m_players[m_currPlayer]->AddCard(pick);
									  }
									  else
										  break;
								  }
								  Score(m_players[m_currPlayer]); // check for pairs AGAIN

							  }
						  } while (m_players[m_currPlayer]->GetNumCards() == 0); // Paranoia check

						  if (m_currPlayer == 0){ // PLAYER'S TURN
							  Console::Clear();
							  m_players[0]->ShortCards();
							  m_players[0]->Show(); // show player's card ---> This may be updated with polite show
							  cout << '\n';
							  for (int i = 1; i < m_numPlayers; i++){
								  if (m_players[i]->GetNumCards() == 0)
									  continue;
								  cout << i << ") ";
								  if (m_activeCheats & (1 << 0)){ // It was active
									  m_players[i]->CheatShow(); // show face up cards
									  m_players[i]->ShortCards(); // show hand sorted
								  }
								  else
									  m_players[i]->Show(); // Show computer(s) cards REVERSED
							  }
							  if (m_numPlayers > 2){
								  for (;;){
									  cout << "Choose a player to ask for a card (1-" << (m_numPlayers - 1) << ") ";
									  Console::ForegroundColor(Green);
									  if (cin >> play && play > 0 && play < m_numPlayers && m_players[play] != 0 && m_players[play]->GetNumCards() != 0){
										  cin.ignore(INT_MAX, '\n');
										  break;
									  }
									  cin.clear();
									  cin.ignore(INT_MAX, '\n');
									  Console::ResetColor();
								  }
								  Console::ResetColor();
							  }
							  else
								  play = 1;


						  }
						  else{ // Right now the computer asks for the first card in hand
							  if (m_numPlayers == 2)
								  play = 0;
							  else {
								  do{
									  play = rand() % m_numPlayers;

								  } while (m_currPlayer == play || m_players[play]->GetNumCards() == 0);
							  }
						  }

						  //all players need this code  UPDATE

						  if ((m_currPlayer != 0) && m_activeCheats & (1 << 1)){ //Forced draw
							  m_players[m_currPlayer]->ForcedDraw(m_Deck);
							  Score(m_players[m_currPlayer]);
						  }
						  else{
							  if (m_players[m_currPlayer]->Update(m_players[play], m_Deck)){
								  Score(m_players[m_currPlayer]);
								  for (int i = 0; i < m_numPlayers; i++){
									  if (!m_Deck.IsEmpty() && m_players[i]->GetNumCards() == 0){
										  for (int j = 0; j < 7; j++){

											  if (!m_Deck.IsEmpty()){ // check if deck has cards
												  Card drawCard; // initialize the initial hands
												  m_Deck.Draw(drawCard);
												  m_players[i]->AddCard(drawCard);
											  }
											  else
												  break;
										  }
										  Console::ForegroundColor(Yellow);
										  cout << m_players[i]->GetName() << " had to refill the hand with " << m_players[i]->GetNumCards() << " cards. \n\n";
										  Console::ResetColor();
										  system("pause");
										  Console::Clear();

										  Score(m_players[i]); // check for refilled hand
									  }
								  }
								  repeat = true; // repeat 
							  }
						  }

						  Score(m_players[m_currPlayer]); // anyway the player checks for pairs
						  if (!repeat)
							  m_currPlayer = (m_currPlayer + 1) % m_numPlayers; // to have the actual player fixed every round.

						  m_state = GAME_END; // Check if this is an END state

						  break;
		}
		case GAME_END:
		{
						 // The game is over, change the bool to stop the loop.
						 int left = 0;
						 m_winner = 0;

						 for (int i = 0; i < m_numPlayers; i++){
							 if (m_players[i]->GetNumCards() != 0)
								 left++;
						 }

						 if (m_Deck.IsEmpty() && 0 == left){
							 bRun = false;
							 //	 cout << m_players[0]->GetName() << '\n';

							 Console::Clear();
							 int max = m_players[0]->GetScore();
							 for (int i = 1; i < m_numPlayers; i++){
								 if (m_players[i]->GetScore() > max){
									 max = m_players[i]->GetScore();
									 m_winner = i;
								 }
							 }
							 // create threat
							 if (m_music){
								 if (0 == m_winner)
									 PlaySound(TEXT("Music//WIN.wav"), NULL, SND_FILENAME | SND_ASYNC);
								 else
									 PlaySound(TEXT("Music//LOSE.wav"), NULL, SND_FILENAME | SND_ASYNC);

							 }
							 Winner(*m_players[m_winner]);
							 Console::Lock(true);
							 Console::ForegroundColor(DarkGreen);
							 Console::SetCursorPosition((Console::WindowWidth() - 31) / 2, 18);
							 cout << "Final Scores\n";
							 Console::SetCursorPosition((Console::WindowWidth() - 31) / 2, 19);
							 cout << "============\n\n\n";

							 Console::ForegroundColor(Green);
							 cout << "Name: \t\t" << m_players[0]->GetName() << "\t\tScore:\t" << m_players[0]->GetScore() << '\n';

							 Console::ForegroundColor(Cyan);
							 cout << "Name:\t\t" << m_players[1]->GetName() << "\tScore:\t" << m_players[1]->GetScore() << '\n';
							 if (m_numPlayers == 3)
								 cout << "Name:\t\t" << m_players[2]->GetName() << "\tScore:\t" << m_players[2]->GetScore() << '\n';
							 if (m_numPlayers == 4)
								 cout << "Name:\t\t" << m_players[3]->GetName() << "\t\tScore:\t" << m_players[3]->GetScore() << '\n';

							 Console::ResetColor();
							 Console::Lock(false);
							 Console::CursorVisible(false);

						 }
						 else{
							 m_state = GAME_PLAY;
							 break;
						 }

		}
		}
		if (!bRun){ // Repeat loop
			Console::CursorVisible(true);
			char a;
			do{
				Console::SetCursorPosition(0, 25);
				cout << "\n\nReplay (Y)es/(N)o: ";
				cin >> a;
				if (cin.fail() || cin.bad() || cin.eof())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
				else{
					cin.ignore(INT_MAX, '\n');
					a = toupper(a);
				}
			} while (a != 'Y' && a != 'N');
			if ('Y' == a){
				bRun = true;
				if (m_winner == 0){
					acumScore += m_players[0]->GetScore();
					winsRow++;
				}
				else
					acumScore = winsRow = 0;

				if (!_rows){
					if (winsRow == 10){ // Go Fish champion
						Console::ForegroundColor(Magenta);
						Console::SetCursorPosition(25, 30);
						cout << "Go Fish champion";
						Console::ResetColor();
						Sleep(3000);
						Console::SetCursorPosition(25, 30);
						cout << "                ";
						(m_achievements | (1 << 2));
						_rows = true;
					}
				}

				if (!_godCard){
					if (acumScore >= 10001){ // Real God of Cards
						Console::ForegroundColor(Magenta);
						Console::SetCursorPosition(25, 30);
						cout << "Real God of Cards";
						Console::ResetColor();
						Sleep(3000);
						Console::SetCursorPosition(25, 30);
						cout << "                 ";
						(m_achievements | (1 << 0));
						_godCard = true;
					}
				}

				m_state = GAME_INIT;
				Console::Clear();
			}
			if ('N' == a){
				bRun = true;
				//Write high score
				//First I need to read the score which can be replaced.

				acumScore = winsRow = 0;
				ifstream readHighScores;
				readHighScores.open("Highscores.txt");
				char readData[100];
				int readScore = 0;
				int count = 1;
				Console::ForegroundColor(Gray);
				if (readHighScores.is_open()) {
					while (!readHighScores.eof()) {
						readHighScores.getline(readData, 100);
						if (count % 2 == 0){
							readScore = atoi(readData);
							if (readScore < m_players[0]->GetScore()){
								count -= 1;
								break;
							}
						}
						count++;
					}
				}
				else{
					Console::ForegroundColor(Red);
					cout << "ERROR! Unable to open file.\n";
				}
				readHighScores.close();
				// count gives the row of name
				if (count < 20){ // only show 10 best scores
					fstream writeHighScores;
					writeHighScores.open("Highscores.txt");
					ofstream newHighscore;
					newHighscore.open("new.txt");
					char ignore[100];
					for (int i = 1; i < count; i++){
						writeHighScores.getline(ignore, 100); // read until the line.
						newHighscore << ignore << '\n';
					}
					newHighscore << m_players[0]->GetName() << '\n';
					newHighscore << m_players[0]->GetScore() << '\n';

					for (int i = count; i < 19; i++){
						writeHighScores.getline(ignore, 100); // read until the last value.
						newHighscore << ignore << '\n';
					}
					writeHighScores.close();
					newHighscore.close();

					remove("Highscores.txt");
					rename("new.txt", "Highscores.txt");

				}
				cout << "\n\n";
				system("pause");

				if (m_music)
					PlaySound(TEXT("Music//Piano.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);

				m_state = GAME_MENU;
				Console::Clear();
			}
		}
	}
}