#include "_Game.h"
#include "_General.h"
#include"_Play.h"
_Game::_Game(int pSize, int pLeft, int  pTop)
{
	_b = new _Board(pSize, pLeft, pTop);
	_loop = _turn = true;
	_lenhBanPhim = -1;
	_x = pLeft;
	_y = pTop;
}
int _Game::getCommand() { return _lenhBanPhim; }
bool _Game::isContinue() { return _loop; }
char _Game::waitKeyBoard()
{
	_lenhBanPhim = toupper(_getch());
	return _lenhBanPhim;
}
char _Game::askContinue()
{
	_Common::goToXY(0, _b->getYAt(_b->getKichThuoc() - 1, _b->getKichThuoc() - 1) + 4);
	return waitKeyBoard();
}
void _Game::startGame()
{
	system("cls");
	_b->resetDuLieu();
	_b->veBanCo();
	_x = _b->getXAt(0, 0);
	_y = _b->getYAt(0, 0);
	if (_turn == 1)
	{
		Textcolor(Red);
		_Common::goToXY(SIZE * 4 + 32, 26);
		cout << " Den luot X ";
	}
	else
	{
		Textcolor(Blue);
		_Common::goToXY(SIZE * 4 + 32, 26);
		cout << " Den luot O ";
	}
	Textcolor(Blue);
	_Common::goToXY(SIZE * 4 + 30 + 11, 4);
	cout << _b->demX;
	Textcolor(Red);
	_Common::goToXY(SIZE * 4 + 30 + 11, 14);
	cout << _b->demY;
}
void _Game::exitGame()
{
	_loop = false;
}
void _Game::moveRight()
{
	if (_x < _b->getXAt(_b->getKichThuoc() - 1, _b->getKichThuoc() - 1))
	{
		_x += 4;
		_Common::goToXY(_x, _y);
	}
}

void _Game::moveLeft() {
	if (_x > _b->getXAt(0, 0))
	{
		_x -= 4;
		_Common::goToXY(_x, _y);
	}
}
void P1WIN()
{
	AnTroChuot();
	int check = 1;
	Box();
	while (check < 30)
	{
		P1();
		Sleep(200);
		check++;
	}
}
void P2WIN()
{
	AnTroChuot();
	int check = 1;
	Box();
	while (check < 30)
	{
		P2();
		Sleep(200);
		check++;
	}
}
void PDraw()
{
	AnTroChuot();
	int check = 1;
	Box();
	while (check < 30)
	{
		Draw();
		Sleep(200);
		check++;
	}
}
void _Game::moveDown() {
	if (_y < _b->getYAt(_b->getKichThuoc() - 1, _b->getKichThuoc() - 1))
	{
		_y += 2;
		_Common::goToXY(_x, _y);
	}
}
void _Game::moveUp() {
	if (_y > _b->getYAt(0, 0))
	{
		_y -= 2;
		_Common::goToXY(_x, _y);
	}
}
bool _Game::processCheckBoard()
{
	switch (_b->boolXO(_x, _y, _turn))
	{
	case -1:
		Textcolor(Red);
		cout << "X";
		_Common::goToXY(SIZE * 4 + 30 + 12, 4);
		cout << _b->demX;
		Textcolor(Blue);
		_Common::goToXY(SIZE * 4 + 30 + 12, 14);
		cout << _b->demY;
		_Common::goToXY(SIZE * 4 + 32, 26);
		cout << " Den luot O ";

		_Common::goToXY(_x, _y);
		break;
	case 1:
		Textcolor(Blue);
		cout << "O";
		Textcolor(Red);
		_Common::goToXY(SIZE * 4 + 30 + 12, 4);
		cout << _b->demX;
		_Common::goToXY(SIZE * 4 + 32, 26);
		cout << " Den luot X ";
		Textcolor(Blue);
		_Common::goToXY(SIZE * 4 + 30 + 12, 14);
		cout << _b->demY;

		break;
	case 0:
		return false;
		break;
	}
	return true;
}
int _Game::demNuocCoDaDi()
{
	return _b->demX + _b->demY;
}
void P1() // X win
{
	int i = 10, j = 10;
	Textcolor(rand() % 13 + 241);
	_Common::goToXY(i, j);     cout << " . -----------------------------------------------------------------------------------------------------------." << endl;
	_Common::goToXY(i, j + 1); cout << " |     ******     *****       .______.             ._____.     .__________.         ._______.  ._________.    |" << endl;
	_Common::goToXY(i, j + 2); cout << " |      ******   *****        |>___<  " << char(92) << "           / >___<|     |___.  .___|        |____     " << char(92) << " |__.  .___|    |" << endl;
	_Common::goToXY(i, j + 3); cout << " |       ****** *****              |  |          |  |              |  |                |  .   " << char(92) << "    |  |       |  " << endl;
	_Common::goToXY(i, j + 4); cout << " |        **********               |  |          |  |              |  |                |  | " << char(92) << "  " << char(92) << "   |  |       |" << endl;
	_Common::goToXY(i, j + 5); cout << " |         ********                |  |   >--<   |  |              |  |                |  |  " << char(92) << "  " << char(92) << "  |  |       | " << endl;
	_Common::goToXY(i, j + 6); cout << " |         ********                |  |  / __ " << char(92) << "  |  |              |  |                |  |   " << char(92) << "  " << char(92) << " |  |       |" << endl;
	_Common::goToXY(i, j + 7); cout << " |       ***** ******              |  | / /  " << char(92) << " " << char(92) << " |  |              |  |                |  |    " << char(92) << "  .|  |       |" << endl;
	_Common::goToXY(i, j + 8); cout << " |      *****   ******             |  |/ /    " << char(92) << " " << char(92) << "|  |          .___|  |___.         .__|  |__.  " << char(92) << "     |__.    |" << endl;
	_Common::goToXY(i, j + 9); cout << " |     *****     ******            " << char(92) << ".___/      " << char(92) << "___./          |__________|         |________|   " << char(92) << "_______|    |" << endl;
	_Common::goToXY(i, j + 10); cout << " . -----------------------------------------------------------------------------------------------------------." << endl;
}
void P2() //O WIN
{
	int i = 10, j = 10;
	Textcolor(rand() % 14 + 241);
	_Common::goToXY(i, j);     cout << " . -----------------------------------------------------------------------------------------------------------." << endl;
	_Common::goToXY(i, j + 1); cout << " |       ********             .______.             ._____.     .__________.         ._______.  ._________.    |" << endl;
	_Common::goToXY(i, j + 2); cout << " |    *****    *****          |>___<  " << char(92) << "           / >___<|     |___.  .___|        |____     " << char(92) << " |__.  .___|    |" << endl;
	_Common::goToXY(i, j + 3); cout << " |   *****      *****              |  |          |  |              |  |                |  .   " << char(92) << "    |  |       |  " << endl;
	_Common::goToXY(i, j + 4); cout << " |  *****        *****             |  |          |  |              |  |                |  | " << char(92) << "  " << char(92) << "   |  |       |" << endl;
	_Common::goToXY(i, j + 5); cout << " |  *****        *****             |  |   >--<   |  |              |  |                |  |  " << char(92) << "  " << char(92) << "  |  |       | " << endl;
	_Common::goToXY(i, j + 6); cout << " |  *****        *****             |  |  / __ " << char(92) << "  |  |              |  |                |  |   " << char(92) << "  " << char(92) << " |  |       |" << endl;
	_Common::goToXY(i, j + 7); cout << " |   *****      *****              |  | / /  " << char(92) << " " << char(92) << " |  |              |  |                |  |    " << char(92) << "  .|  |       |" << endl;
	_Common::goToXY(i, j + 8); cout << " |    *****    *****               |  |/ /    " << char(92) << " " << char(92) << "|  |          .___|  |___.         .__|  |__.  " << char(92) << "     |__.    |" << endl;
	_Common::goToXY(i, j + 9); cout << " |       ********                  " << char(92) << ".___/      " << char(92) << "___./          |__________|         |________|   " << char(92) << "_______|    |" << endl;
	_Common::goToXY(i, j + 10); cout << " . -----------------------------------------------------------------------------------------------------------." << endl;
}
void Draw()//DRAW
{
	int i = 18, j = 10;
	_Common::goToXY(i, j);     cout << " .------------------------------------------------------------------------------------------------------------." << endl;
	_Common::goToXY(i, j + 1); cout << "|        _____________        _____________.              __________          .________    ________            |" << endl;
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(i, j + 2); cout << "|       |__.    ___    '     |__.   _____   " << char(92) << "            /          " << char(92) << "         |__    __|  |___   __|           |" << endl;
	_Common::goToXY(i, j + 3); cout << "|          |  |     .   '       |  |     " << char(92) << "   '          /            " << char(92) << "           |  |        |  |              |" << endl;
	_Common::goToXY(i, j + 4); cout << "|          |  |      '   '      |  |      |  '         |    .-----.   |          |  |        |  |              |" << endl;
	_Common::goToXY(i, j + 5); cout << "|          |  |       |   |     |  |_____/  /          |   |      |   |          |  |        |  |              |" << endl;
	_Common::goToXY(i, j + 6); cout << "|          |  |       '   |     |  |_____. .           |   .______.   |          |  |  ___   |  |              |" << endl;
	_Common::goToXY(i, j + 7); cout << "|          |  |       '   '     |  |     " << char(92) << "  " << char(92) << "          |   |      |   |          |  | /    " << char(92) << " |  |              |" << endl;
	_Common::goToXY(i, j + 8); cout << "|        __|  | _____'   '    __|  |_    _" << char(92) << "  " << char(92) << "__      _|   |_    _|   |_         |  |/  /" << char(92) << "  " << char(92) << "|  |              |" << endl;
	_Common::goToXY(i, j + 9); cout << "|       |_____________..     |_______|  |_______|    |_______|  |_______|        |_____/  " << char(92) << "_____|              |" << endl;
	_Common::goToXY(i, j + 10); cout << ".-------------------------------------------------------------------------------------------------------------." << endl;
}
void Box()
{
	int i = 8, j = 8;
	_Common::goToXY(i, j);
	for (int i = 0; i < 110; i++) {
		Textcolor(rand() % 15 + 1);
		Sleep(1);
		cout << char(178);
	}
	_Common::goToXY(i, j + 14);
	for (int i = 0; i < 110; i++) {
		Textcolor(rand() % 15 + 1);
		Sleep(1);
		cout << char(178);
	}
	Textcolor(Black);
	_Common::goToXY(50, j + 18);
	cout << "Y   : Play Again";
	_Common::goToXY(50, j + 19);
	cout << "ESC : BACK";
}
int _Game::processFinish(int x, int y)
{
	_Common::goToXY(0, _b->getYAt(_b->getKichThuoc() - 1, _b->getKichThuoc() - 1) + 2);
	int pWhoWin = _b->testBanCo(x, y);
	switch (pWhoWin)
	{
	case -1:
		system("cls");
		P1WIN();
		break;
	case 1:
		system("cls");
		P2WIN();
		break;
	case 0:
		system("cls");
		PlaySound(TEXT("muzic.wav"), NULL, SND_FILENAME | SND_ASYNC);
		PDraw();
		break;
	case 2:
		_turn = !_turn;
	}
	_Common::goToXY(_x, _y);// Trả về vị trí hiện hành của con trỏ màn hình bàn cờ
	return pWhoWin;
}
int _Game::getXatEnter()
{
	return _x;
}
int _Game::getYatEnter()
{
	return _y;
}
void _Game::findPlacesHard()
{
	_x = _b->findPlacesHard().getX();
	_y = _b->findPlacesHard().getY();
}
void _Game::findPlacesEasy()
{
	_x = _b->findPlacesEasy().getX();
	_y = _b->findPlacesEasy().getY();
}
_Game::~_Game()
{
	delete _b;
}

void _Game::SaveGame(int n)
{
	char data[30];
	ofstream f1;
	ofstream f2;
	_Common::goToXY(35, SIZE * 2 + 1);
	cout << "ENTER FILE NAME: ";
	Textcolor(Cyan);
	cin.getline(data, 30);
	f1.open(data, ios::out);
	f2.open("Name.txt", ios::app);
	f2 << data << " " << endl;
	//thong tin
	f1 << diemP1 << " " << diemP2 << " " << n << endl;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			f1 << _b->get_Check(i, j) << " ";
		}
		f1 << endl;
	}
	f1.close();
	f2.close();
	_Common::goToXY(35, SIZE * 2 + 2);
	cout << "ESC : BACK";
	int t = 1;
	while (t)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 27:
				PlaySound(TEXT("move10.wav"), NULL, SND_FILENAME | SND_ASYNC);
				t = 0;
				system("cls");
				ScreenStartGame(99);
				break;
			}
		}
	}
}
void _Game::LoadGame(char data[30])
{

	//NHAP FILE
	ifstream f;
	f.open(data, ios::in);
	if (!f) {
		_Common::goToXY(35, 46);
		cout << "\n FILE KHONG TON TAI!" << endl;
	}
	else
	{
		f >> diemP1 >> diemP2 >> cheDo;
		system("cls");
		//thong tin
		//ban co
		int k;
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				f >> k;
				_b->loadDuLieu(i, j, k);
			}
		}
		_x = _b->getXAt(0, 0);
		_y = _b->getYAt(0, 0);
		_b->veBanCo();
		f.close();
	}
	Textcolor(Red);
	_Common::goToXY(SIZE * 4 + 30 + 12, 4);
	cout << _b->demX;
	Textcolor(Blue);
	_Common::goToXY(SIZE * 4 + 30 + 12, 14);
	cout << _b->demY;
	if (_turn == 1)
	{
		Textcolor(Red);
		_Common::goToXY(SIZE * 4 + 32, 26);
		cout << " Den luot X ";
	}
	else
	{
		Textcolor(Blue);
		_Common::goToXY(SIZE * 4 + 32, 26);
		cout << " Den luot O ";
	}
}