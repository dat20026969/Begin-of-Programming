#include "_BanCo.h"
#include "_Play.h"
#include "_Diem.h"
#include <vector>
#include "_General.h"
vector <_Point> win;
int _Board::getKichThuoc() { return _size; }
int _Board::getLeft() { return _left; }
int _Board::getTop() { return _top; }
int _Board::getXAt(int i, int j)
{
	return _pArr[i][j].getX();
}
int _Board::getYAt(int i, int j)
{
	return _pArr[i][j].getY();
}
_Board::_Board()
{
	for (int i = 0; i < _size; i++)
	{
		delete[] _pArr[i];
	}
	delete[] _pArr;
}
_Board::_Board(int pSize, int pX, int pY)
{
	_size = pSize;
	_left = pX;
	_top = pY;
	_pArr = new _Point * [pSize];
	for (int i = 0; i < pSize; i++)
	{
		_pArr[i] = new _Point[pSize];
	}
}
void _Board::loadDuLieu(int i, int j, int k)
{
	if (_size == 0) return;
	_pArr[i][j].setX(4 * j + _left + 2);
	_pArr[i][j].setY(2 * i + _top + 1);
	_pArr[i][j].setCheck(k);
	if (k == -1)
	{
		Textcolor(Red);	//X
		_Common::goToXY(4 * j + _left + 2, 2 * i + _top + 1);
		cout << "X";
		demX++;
	}
	if (k == 1)
	{
		Textcolor(Blue);	//O
		_Common::goToXY(4 * j + _left + 2, 2 * i + _top + 1);
		cout << "O";
		demY++;
	}

}
void _Board::resetDuLieu()
{
	if (_size == 0) return;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			_pArr[i][j].setX(4 * j + _left + 2);
			_pArr[i][j].setY(2 * i + _top + 1);
			_pArr[i][j].setCheck(0);
		}
	}

}
void _Board::veBanCo()
{
	if (_size == 0) return;
	Textcolor(Black);
	// ##########################
	for (int i = 0; i < SIZE * 2; i++)
	{
		// Ve cot phai

		_Common::goToXY(SIZE * 4, i + 1);
		if ((i + 1) % 2 == 1)
			cout << char(179);
		else
			cout << char(182);
	}
	// ##########################
	// ##########################
	// Dong thuong
	for (int i = 0; i < SIZE * 2; i = i + 2)
	{

		_Common::goToXY(0, i);
		for (int j = 0; j < SIZE * 4; j++)
		{
			if (j % 4 == 0)
				cout << char(197);
			else
				cout << char(196);
		}
	}
	// ##########################
	for (int i = 0; i < SIZE * 2; i++)
	{

		// Ve cot trai
		_Common::goToXY(0, i + 1);
		if ((i + 1) % 2 == 1)
			cout << char(179);
		else
			cout << char(199);
	}
	// ##########################
	// Cot thuong
	for (int i = 1; i < SIZE * 2; i = i + 2)
	{
		for (int j = 0; j < SIZE * 4; j = j + 4)
		{

			_Common::goToXY(j, i);
			if (j == 0)
				continue;
			cout << char(179);
		}
	}
	// ##########################
	// Ve dong dau
	_Common::goToXY(0, 0);
	for (int i = 0; i < SIZE * 4; i++)
	{

		if (i % 4 == 0)
			cout << char(209);
		else
			cout << char(196);
	}
	_Common::goToXY(0, 0); cout << char(201);
	_Common::goToXY(SIZE * 4, 0); cout << char(187);

	// Ve dong cuoi
	_Common::goToXY(0, SIZE * 2);
	for (int i = 0; i < SIZE * 4; i++)
	{

		if (i % 4 == 0)
			cout << char(207);
		else
			cout << char(196);
	}
	_Common::goToXY(0, SIZE * 2); cout << char(200);
	_Common::goToXY(SIZE * 4, SIZE * 2);
	cout << char(188);

	//===========================
	_Common::goToXY(_pArr[0][0].getX(), _pArr[0][0].getY());
}

int _Board::boolXO(int pX, int pY, bool pTurn) // che do choi 0 : Player - 1 :Bot
{
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			if (_pArr[i][j].getX() == pX && _pArr[i][j].getY() == pY && _pArr[i][j].getCheck() == 0)
			{
				if (pTurn)
				{
					_pArr[i][j].setCheck(-1);
					demX++;
				}	// X
				else
				{
					_pArr[i][j].setCheck(1);
					demY++;
				}	// O	
				return _pArr[i][j].getCheck();
			}
		}
	}
	return 0;
}

int _Board::kiemTraHang(int x, int y, int value)
{
	int dong, cot;
	int loop = 1;
	int test = -1;
	int check2dau = 0;
	int countRowLeft = 0, countRowRight = 0;
	dong = (x - _left - 2) / 4;
	cot = (y - _top - 1) / 2;
	int dongtrai, dongphai; // Xet dem X ve phia trai, va ve phia phai
	dongtrai = dongphai = dong;
	// Xet X chien thang
	// Xet hang ngang
	while (_pArr[cot][dongtrai].getCheck() == value)
	{
		win.push_back(_pArr[cot][dongtrai]);
		countRowLeft++;
		if (dongtrai == 0)
			break;
		dongtrai--;
	}
	while (_pArr[cot][dongphai].getCheck() == value)
	{
		win.push_back(_pArr[cot][dongphai]);
		countRowRight++;
		if (dongphai == _size - 1)
			break;
		dongphai++;
	}
	if (_pArr[cot][dongtrai].getCheck() == -value && _pArr[cot][dongphai].getCheck() == -value)
		check2dau = 1;
	if ((countRowLeft + countRowRight - 1) == 5 && (check2dau == 0))
	{
		test = 1;
	}
	else
		test = 0;
	if (test == 1)
	{
		PlaySound(TEXT("endgame.wav"), NULL, SND_FILENAME | SND_ASYNC);
		while (loop < 30)
		{
			Textcolor(rand() % 15 + 241);
			for (int i = 0; i < win.size(); i++)
			{
				_Common::goToXY(win[i].getX(), win[i].getY());
				if (win[i].getCheck() == -1)
					cout << "X";
				else
					cout << "O";
			}
			Sleep(100);
			loop++;
		}
	}
	else win.clear();
	return test;
}
int _Board::kiemTraCot(int x, int y, int value) // Xet chien thang theo hang doc
{
	int dong, cot;
	int test = -1, loop = 1;
	int check2dau = 0;
	int countColTop = 0, countColBot = 0;
	dong = (x - _left - 2) / 4;
	cot = (y - _top - 1) / 2;
	int cottren, cotduoi; // Xet bien dem ve phia tren, va ve phia duoi
	cottren = cotduoi = cot;
	// Xet chien thang
	// Xet hang doc
	while (_pArr[cottren][dong].getCheck() == value)
	{
		countColTop++;
		win.push_back(_pArr[cottren][dong]);
		if (cottren == 0)
			break;
		cottren--;
	}
	while (_pArr[cotduoi][dong].getCheck() == value)
	{
		countColBot++;
		win.push_back(_pArr[cotduoi][dong]);
		if (cotduoi == _size - 1)
			break;
		cotduoi++;
	}
	if (_pArr[cottren][dong].getCheck() == -value && _pArr[cotduoi][dong].getCheck() == -value)
		check2dau = 1;
	if ((countColTop + countColBot - 1) == 5 && (check2dau == 0))
	{
		test = 1;
	}
	else
		test = 0;
	if (test == 1)
	{
		PlaySound(TEXT("endgame.wav"), NULL, SND_FILENAME | SND_ASYNC);
		while (loop < 30)
		{
			Textcolor(rand() % 15 + 241);
			for (int i = 0; i < win.size(); i++)
			{
				_Common::goToXY(win[i].getX(), win[i].getY());
				if (win[i].getCheck() == -1)
					cout << "X";
				else
					cout << "O";
			}
			Sleep(100);
			loop++;
		}
	}
	else win.clear();
	return test;
}
int _Board::kiemTraDuongCheo2(int x, int y, int value)
{
	int dong, cot;
	int test = -1, loop = 1;
	int check2dau = 0;
	int countDiaTop = 0, countDiaBot = 0;
	dong = (x - _left - 2) / 4;
	cot = (y - _top - 1) / 2;
	int cottren, cotduoi;// Xet dem X ve phia tren, va ve phia duoi
	int dongphai, dongtrai;
	cottren = cotduoi = cot;
	dongphai = dongtrai = dong;
	// Xet X chien thang
	// Xet hang ngang
	while (_pArr[cottren][dongtrai].getCheck() == value)
	{
		win.push_back(_pArr[cottren][dongtrai]);
		countDiaTop++;
		if (cottren == 0 || dongtrai == 0)
			break;
		cottren--;
		dongtrai--;
	}

	while (_pArr[cotduoi][dongphai].getCheck() == value)
	{
		win.push_back(_pArr[cotduoi][dongphai]);
		countDiaBot++;
		if (cotduoi == _size - 1 || dongphai == _size - 1)
			break;
		cotduoi++;
		dongphai++;
	}
	if (_pArr[cottren][dongtrai].getCheck() == -value && _pArr[cotduoi][dongphai].getCheck() == -value)
		check2dau = 1;
	if ((countDiaTop + countDiaBot - 1) == 5 && (check2dau == 0))
	{
		test = 1;
	}
	else
		test = 0;
	if (test == 1)
	{
		PlaySound(TEXT("endgame.wav"), NULL, SND_FILENAME | SND_ASYNC);
		while (loop < 30)
		{
			Textcolor(rand() % 15 + 241);
			for (int i = 0; i < win.size(); i++)
			{
				_Common::goToXY(win[i].getX(), win[i].getY());
				if (win[i].getCheck() == -1)
					cout << "X";
				else
					cout << "O";
			}
			Sleep(100);
			loop++;
		}
	}
	else win.clear();
	return test;
}
int _Board::kiemTraDuongCheo1(int x, int y, int value)
{
	int dong, cot;
	int test = -1, loop = 1;
	int check2dau = 0;
	int countDiaTop = 0, countDiaBot = 0;
	dong = (x - _left - 2) / 4;
	cot = (y - _top - 1) / 2;
	int cottren, cotduoi;// Xet dem X ve phia tren, va ve phia duoi
	int dongphai, dongtrai;
	cottren = cotduoi = cot;
	dongphai = dongtrai = dong;
	// Xet X chien thang
	// Xet hang ngang
	while (_pArr[cottren][dongphai].getCheck() == value)
	{
		countDiaTop++;
		win.push_back(_pArr[cottren][dongphai]);
		if (cottren == 0 || dongphai == _size - 1)
			break;
		cottren--;
		dongphai++;
	}
	while (_pArr[cotduoi][dongtrai].getCheck() == value)
	{
		win.push_back(_pArr[cotduoi][dongtrai]);
		countDiaBot++;
		if (cotduoi == _size - 1 || dongtrai == 0)
			break;
		cotduoi++;
		dongtrai--;
	}
	if (_pArr[cottren][dongphai].getCheck() == -value && _pArr[cotduoi][dongtrai].getCheck() == -value)
		check2dau = 1;
	if ((countDiaTop + countDiaBot - 1) == 5 && (check2dau == 0))
	{
		test = 1;
	}
	else
		test = 0;
	if (test == 1)
	{
		PlaySound(TEXT("endgame.wav"), NULL, SND_FILENAME | SND_ASYNC);
		while (loop < 30)
		{
			Textcolor(rand() % 15 + 241);
			for (int i = 0; i < win.size(); i++)
			{
				_Common::goToXY(win[i].getX(), win[i].getY());
				if (win[i].getCheck() == -1)
					cout << "X";
				else
					cout << "O";
			}
			Sleep(100);
			loop++;
		}
	}
	else win.clear();
	return test;
}
int _Board::testBanCo(int x, int y)
{
	// X chien thang
	if (kiemTraHang(x, y, -1) == 1)
		return -1;
	if (kiemTraCot(x, y, -1) == 1)
		return -1;
	if (kiemTraDuongCheo1(x, y, -1) == 1)
		return -1;
	if (kiemTraDuongCheo2(x, y, -1) == 1)
		return -1;
	// O chien thang
	if (kiemTraHang(x, y, 1) == 1)
		return 1;
	if (kiemTraCot(x, y, 1) == 1)
		return 1;
	if (kiemTraDuongCheo1(x, y, 1) == 1)
		return 1;
	if (kiemTraDuongCheo2(x, y, 1) == 1)
		return 1;
	if (demX + demY == SIZE * SIZE)
		return 0;
	return 2;
}
_Board::~_Board()
{
}

// Xu li AI
long _Board::pointAttack_row(long Dong, long Cot, const long Defend_Score[], const long Attack_Score[])
{
	long iScoreTempNgang = 0;
	long iScoreAttack = 0;
	int iSoQuanTa = 0;
	int iSoQuanDich = 0;
	int iSoQuanTa2 = 0;
	int iSoQuanDich2 = 0;
	for (int iDem = 1; iDem < 6 && Cot + iDem < _size; iDem++)
	{
		if (_pArr[Dong][Cot + iDem].getCheck() == 1)
			iSoQuanTa++;
		if (_pArr[Dong][Cot + iDem].getCheck() == -1)
		{
			iSoQuanDich++;
			break;
		}
		if (_pArr[Dong][Cot + iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot + iDem2 < _size; iDem2++)
			{
				if (_pArr[Dong][Cot + iDem2].getCheck() == 1)
					iSoQuanTa2++;
				if (_pArr[Dong][Cot + iDem2].getCheck() == -1)
				{
					iSoQuanDich2++;
					break;
				}
				if (_pArr[Dong][Cot + iDem2].getCheck() == 0)
					break;
			}
			break;
		}
	}
	//iScoreAttack += Attack_Score[iSoQuanTa];
	//iSoQuanTa = 0;

	for (int iDem = 1; iDem < 6 && Cot - iDem >= 0; iDem++)
	{
		if (_pArr[Dong][Cot - iDem].getCheck() == 1)
			iSoQuanTa++;
		if (_pArr[Dong][Cot - iDem].getCheck() == -1)
		{
			iSoQuanDich++;
			break;
		}
		if (_pArr[Dong][Cot - iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot - iDem2 >= 0; iDem2++)
			{
				if (_pArr[Dong][Cot - iDem2].getCheck() == 1)
					iSoQuanTa2++;
				if (_pArr[Dong][Cot - iDem2].getCheck() == -1)
				{
					iSoQuanDich2++;
					break;
				}
				if (_pArr[Dong][Cot - iDem2].getCheck() == 0)
					break;
			}
			break;
		}
	}
	if (iSoQuanDich == 2)
		return 0;
	if (iSoQuanDich == 0)
		iScoreTempNgang += Attack_Score[iSoQuanTa] * 2;
	else
		iScoreTempNgang += Attack_Score[iSoQuanTa];
	if (iSoQuanDich2 == 0)
		iScoreTempNgang += Attack_Score[iSoQuanTa2] * 2;
	else
		iScoreTempNgang += Attack_Score[iSoQuanTa2];

	if (iSoQuanTa >= iSoQuanTa2)
		iScoreTempNgang -= 1;
	else
		iScoreTempNgang -= 2;
	if (iSoQuanTa == 4)
		iScoreTempNgang *= 2;
	if (iSoQuanTa == 0)
		iScoreTempNgang += Defend_Score[iSoQuanDich] * 2;
	else
		iScoreTempNgang += Defend_Score[iSoQuanDich];
	if (iSoQuanTa2 == 0)
		iScoreTempNgang += Defend_Score[iSoQuanDich2] * 2;
	else
		iScoreTempNgang += Defend_Score[iSoQuanDich2];
	return iScoreTempNgang;
}
long _Board::pointAttack_column(long Dong, long Cot, const long Defend_Score[], const long Attack_Score[])
{
	long iScoreTempDoc = 0;
	long iScoreAttack = 0;
	int iSoQuanTa = 0;
	int iSoQuanDich = 0;
	int iSoQuanTa2 = 0;
	int iSoQuanDich2 = 0;
	for (int iDem = 1; iDem < 6 && Dong + iDem < _size; iDem++)
	{
		if (_pArr[Dong + iDem][Cot].getCheck() == 1)
			iSoQuanTa++;
		if (_pArr[Dong + iDem][Cot].getCheck() == -1)
		{
			iSoQuanDich++;
			break;
		}
		if (_pArr[Dong + iDem][Cot].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Dong + iDem2 < _size; iDem2++)
			{
				if (_pArr[Dong + iDem2][Cot].getCheck() == 1)
					iSoQuanTa2++;
				if (_pArr[Dong + iDem2][Cot].getCheck() == -1)
				{
					iSoQuanDich2++;
					break;
				}
				if (_pArr[Dong + iDem2][Cot].getCheck() == 0)
					break;
			}
			break;
		}

	}
	//iScoreAttack += Attack_Score[iSoQuanTa];
	//iSoQuanTa = 0;

	for (int iDem = 1; iDem < 6 && Dong - iDem >= 0; iDem++)
	{
		if (_pArr[Dong - iDem][Cot].getCheck() == 1)
			iSoQuanTa++;
		if (_pArr[Dong - iDem][Cot].getCheck() == -1)
		{
			iSoQuanDich++;
			break;
		}
		if (_pArr[Dong - iDem][Cot].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Dong - iDem2 >= 0; iDem2++)
			{
				if (_pArr[Dong - iDem2][Cot].getCheck() == 1)
					iSoQuanTa2++;
				if (_pArr[Dong - iDem2][Cot].getCheck() == -1)
				{
					iSoQuanDich2++;
					break;
				}
				if (_pArr[Dong - iDem2][Cot].getCheck() == 0)
				{
					break;
				}
			}
			break;
		}
	}

	if (iSoQuanDich == 2)
		return 0;
	if (iSoQuanDich == 0)
		iScoreTempDoc += Attack_Score[iSoQuanTa] * 2;
	else
		iScoreTempDoc += Attack_Score[iSoQuanTa];
	if (iSoQuanDich2 == 0)
		iScoreTempDoc += Attack_Score[iSoQuanTa2] * 2;
	else
		iScoreTempDoc += Attack_Score[iSoQuanTa2];

	if (iSoQuanTa >= iSoQuanTa2)
		iScoreTempDoc -= 1;
	else
		iScoreTempDoc -= 2;
	if (iSoQuanTa == 4)
		iScoreTempDoc *= 2;
	if (iSoQuanTa == 0)
		iScoreTempDoc += Defend_Score[iSoQuanDich] * 2;
	else
		iScoreTempDoc += Defend_Score[iSoQuanDich];
	if (iSoQuanTa2 == 0)
		iScoreTempDoc += Defend_Score[iSoQuanDich2] * 2;
	else
		iScoreTempDoc += Defend_Score[iSoQuanDich2];
	return iScoreTempDoc;
}

long _Board::pointAttack_diagonal1(long Dong, long Cot, const long Defend_Score[], const long Attack_Score[])
{
	long iScoreTempCheoNguoc = 0;
	long iScoreAttack = 0;
	int iSoQuanTa = 0;
	int iSoQuanDich = 0;
	int iSoQuanTa2 = 0;
	int iSoQuanDich2 = 0;
	for (int iDem = 1; iDem < 6 && Cot + iDem < _size && Dong + iDem < _size; iDem++)
	{
		if (_pArr[Dong + iDem][Cot + iDem].getCheck() == 1)
			iSoQuanTa++;
		if (_pArr[Dong + iDem][Cot + iDem].getCheck() == -1)
		{
			iSoQuanDich++;
			break;
		}
		if (_pArr[Dong + iDem][Cot + iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot + iDem2 < _size && Dong + iDem2 < _size; iDem2++)
			{
				if (_pArr[Dong + iDem2][Cot + iDem2].getCheck() == 1)
					iSoQuanTa2++;
				if (_pArr[Dong + iDem2][Cot + iDem2].getCheck() == -1)
				{
					iSoQuanDich2++;
					break;
				}
				if (_pArr[Dong + iDem2][Cot + iDem2].getCheck() == 0)
				{
					break;
				}
			}
			break;
		}
	}
	//iScoreAttack += Attack_Score[iSoQuanTa];
	//iSoQuanTa = 0;

	for (int iDem = 1; iDem < 6 && Cot - iDem >= 0 && Dong - iDem >= 0; iDem++)
	{
		if (_pArr[Dong - iDem][Cot - iDem].getCheck() == 1)
			iSoQuanTa++;
		if (_pArr[Dong - iDem][Cot - iDem].getCheck() == -1)
		{
			iSoQuanDich++;
			break;
		}
		if (_pArr[Dong - iDem][Cot - iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot - iDem2 >= 0 && Dong - iDem2 >= 0; iDem2++)
			{
				if (_pArr[Dong - iDem2][Cot - iDem2].getCheck() == 1)
					iSoQuanTa2++;
				if (_pArr[Dong - iDem2][Cot - iDem2].getCheck() == -1)
				{
					iSoQuanDich2++;
					break;
				}
				if (_pArr[Dong - iDem2][Cot - iDem2].getCheck() == 0)
					break;
			}
			break;
		}
	}
	if (iSoQuanDich == 2)
		return 0;
	if (iSoQuanDich == 0)
		iScoreTempCheoNguoc += Attack_Score[iSoQuanTa] * 2;
	else
		iScoreTempCheoNguoc += Attack_Score[iSoQuanTa];
	if (iSoQuanDich2 == 0)
		iScoreTempCheoNguoc += Attack_Score[iSoQuanTa2] * 2;
	else
		iScoreTempCheoNguoc += Attack_Score[iSoQuanTa2];

	if (iSoQuanTa >= iSoQuanTa2)
		iScoreTempCheoNguoc -= 1;
	else
		iScoreTempCheoNguoc -= 2;
	if (iSoQuanTa == 4)
		iScoreTempCheoNguoc *= 2;
	if (iSoQuanTa == 0)
		iScoreTempCheoNguoc += Defend_Score[iSoQuanDich] * 2;
	else
		iScoreTempCheoNguoc += Defend_Score[iSoQuanDich];
	if (iSoQuanTa2 == 0)
		iScoreTempCheoNguoc += Defend_Score[iSoQuanDich2] * 2;
	else
		iScoreTempCheoNguoc += Defend_Score[iSoQuanDich2];
	return iScoreTempCheoNguoc;
}
long _Board::pointAttack_diagonal2(long Dong, long Cot, const long Defend_Score[], const long Attack_Score[])
{
	long iScoreTempCheoXuoi = 0;
	long iScoreAttack = 0;
	int iSoQuanTa = 0;
	int iSoQuanDich = 0;
	int iSoQuanTa2 = 0;
	int iSoQuanDich2 = 0;
	for (int iDem = 1; iDem < 6 && Cot - iDem >= 0 && Dong + iDem < _size; iDem++)
	{
		if (_pArr[Dong + iDem][Cot - iDem].getCheck() == 1)
			iSoQuanTa++;
		if (_pArr[Dong + iDem][Cot - iDem].getCheck() == -1)
		{
			iSoQuanDich++;
			break;
		}
		if (_pArr[Dong + iDem][Cot - iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot - iDem2 >= 0 && Dong + iDem2 < _size; iDem2++)
			{
				if (_pArr[Dong + iDem2][Cot - iDem2].getCheck() == 1)
					iSoQuanTa2++;
				if (_pArr[Dong + iDem2][Cot - iDem2].getCheck() == -1)
				{
					iSoQuanDich2++;
					break;
				}
				if (_pArr[Dong + iDem2][Cot - iDem2].getCheck() == 0)
					break;
			}
			break;
		}
	}
	//iScoreAttack += Attack_Score[iSoQuanTa];
	//iSoQuanTa = 0;

	for (int iDem = 1; iDem < 6 && Cot + iDem < _size && Dong - iDem >= 0; iDem++)
	{
		if (_pArr[Dong - iDem][Cot + iDem].getCheck() == 1)
			iSoQuanTa++;
		if (_pArr[Dong - iDem][Cot + iDem].getCheck() == -1)
		{
			iSoQuanDich++;
			break;
		}
		if (_pArr[Dong - iDem][Cot + iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot + iDem2 < _size && Dong - iDem2 >= 0; iDem2++)
			{
				if (_pArr[Dong - iDem2][Cot + iDem2].getCheck() == 1)
					iSoQuanTa2++;
				if (_pArr[Dong - iDem2][Cot + iDem2].getCheck() == -1)
				{
					iSoQuanDich2++;
					break;
				}
				if (_pArr[Dong - iDem2][Cot + iDem2].getCheck() == 0)
					break;
			}
			break;
		}
	}
	if (iSoQuanDich == 2)
		return 0;
	if (iSoQuanDich == 0)
		iScoreTempCheoXuoi += Attack_Score[iSoQuanTa] * 2;
	else
		iScoreTempCheoXuoi += Attack_Score[iSoQuanTa];
	if (iSoQuanDich2 == 0)
		iScoreTempCheoXuoi += Attack_Score[iSoQuanTa2] * 2;
	else
		iScoreTempCheoXuoi += Attack_Score[iSoQuanTa2];

	if (iSoQuanTa >= iSoQuanTa2)
		iScoreTempCheoXuoi -= 1;
	else
		iScoreTempCheoXuoi -= 2;
	if (iSoQuanTa == 4)
		iScoreTempCheoXuoi *= 2;
	if (iSoQuanTa == 0)
		iScoreTempCheoXuoi += Defend_Score[iSoQuanDich] * 2;
	else
		iScoreTempCheoXuoi += Defend_Score[iSoQuanDich];
	if (iSoQuanTa2 == 0)
		iScoreTempCheoXuoi += Defend_Score[iSoQuanDich2] * 2;
	else
		iScoreTempCheoXuoi += Defend_Score[iSoQuanDich2];
	return iScoreTempCheoXuoi;
}

long _Board::pointDefense_column(long Dong, long Cot, const long Defend_Score[], const long Attack_Score[])
{
	long iScoreTempDoc = 0;
	long iScoreDefend = 0;
	int iSoQuanDich = 0;
	int iSoQuanTa = 0;
	int iSoQuanDich2 = 0;
	int iSoQuanTa2 = 0;
	for (int iDem = 1; iDem < 6 && Dong + iDem < _size; iDem++)
	{
		if (_pArr[Dong + iDem][Cot].getCheck() == 1)
		{
			iSoQuanTa++;
			break;
		}
		if (_pArr[Dong + iDem][Cot].getCheck() == -1)
			iSoQuanDich++;
		if (_pArr[Dong + iDem][Cot].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Dong + iDem2 < _size; iDem2++)
			{
				if (_pArr[Dong + iDem2][Cot].getCheck() == 1)
				{
					iSoQuanTa2++;
					break;
				}
				if (_pArr[Dong + iDem2][Cot].getCheck() == -1)
					iSoQuanDich2++;
				if (_pArr[Dong + iDem2][Cot].getCheck() == 0)
					break;
			}
			break;
		}
	}
	//iScoreDefend += Defend_Score[iSoQuanDich];
	//iSoQuanDich = 0;

	for (int iDem = 1; iDem < 6 && Dong - iDem >= 0; iDem++)
	{
		if (_pArr[Dong - iDem][Cot].getCheck() == 1)
		{
			iSoQuanTa++;
			break;
		}
		if (_pArr[Dong - iDem][Cot].getCheck() == -1)
			iSoQuanDich++;
		if (_pArr[Dong - iDem][Cot].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Dong - iDem2 >= 0; iDem2++)
			{
				if (_pArr[Dong - iDem2][Cot].getCheck() == 1)
				{
					iSoQuanTa2++;
					break;
				}
				if (_pArr[Dong - iDem2][Cot].getCheck() == -1)
					iSoQuanDich2++;
				if (_pArr[Dong - iDem2][Cot].getCheck() == 0)
					break;
			}
			break;
		}
	}


	if (iSoQuanTa == 2)
		return 0;
	if (iSoQuanTa == 0)
		iScoreTempDoc += Defend_Score[iSoQuanDich] * 2;
	else
		iScoreTempDoc += Defend_Score[iSoQuanDich];
	/*
	if (iSoQuanTa == 0)
	iScoreTempDoc += Defend_Score[iSoQuanDich2] * 2;
	else
	iScoreTempDoc += Defend_Score[iSoQuanDich2];
	*/
	if (iSoQuanDich >= iSoQuanDich2)
		iScoreTempDoc -= 1;
	else
		iScoreTempDoc -= 2;
	if (iSoQuanDich == 4)
		iScoreTempDoc *= 2;
	return iScoreTempDoc;
}

long _Board::pointDefense_row(long Dong, long Cot, const long Defend_Score[], const long Attack_Score[])
{
	long iScoreTempNgang = 0;
	long iScoreDefend = 0;
	int iSoQuanDich = 0;
	int iSoQuanTa = 0;
	int iSoQuanDich2 = 0;
	int iSoQuanTa2 = 0;
	for (int iDem = 1; iDem < 6 && Cot + iDem < _size; iDem++)
	{
		if (_pArr[Dong][Cot + iDem].getCheck() == 1)
		{
			iSoQuanTa++;
			break;
		}
		if (_pArr[Dong][Cot + iDem].getCheck() == -1)
			iSoQuanDich++;
		if (_pArr[Dong][Cot + iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot + iDem2 < _size; iDem2++)
			{
				if (_pArr[Dong][Cot + iDem2].getCheck() == 1)
				{
					iSoQuanTa2++;
					break;
				}
				if (_pArr[Dong][Cot + iDem2].getCheck() == -1)
					iSoQuanDich2++;
				if (_pArr[Dong][Cot + iDem2].getCheck() == 0)
					break;
			}
			break;
		}
	}
	//iScoreDefend += Defend_Score[iSoQuanDich];
	//iSoQuanDich = 0;

	for (int iDem = 1; iDem < 6 && Cot - iDem >= 0; iDem++)
	{
		if (_pArr[Dong][Cot - iDem].getCheck() == 1)
		{
			iSoQuanTa++;
			break;
		}
		if (_pArr[Dong][Cot - iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot - iDem2 >= 0; iDem2++)
			{
				if (_pArr[Dong][Cot - iDem2].getCheck() == 1)
				{
					iSoQuanTa2++;
					break;
				}
				if (_pArr[Dong][Cot - iDem2].getCheck() == 0)
					break;
				if (_pArr[Dong][Cot - iDem2].getCheck() == -1)
					iSoQuanDich2++;
			}
			break;
		}
		if (_pArr[Dong][Cot - iDem].getCheck() == -1)
			iSoQuanDich++;
	}

	if (iSoQuanTa == 2)
		return 0;
	if (iSoQuanTa == 0)
		iScoreTempNgang += Defend_Score[iSoQuanDich] * 2;
	else
		iScoreTempNgang += Defend_Score[iSoQuanDich];
	/*
	if (iSoQuanTa == 0)
	iScoreTempDoc += Defend_Score[iSoQuanDich2] * 2;
	else
	iScoreTempDoc += Defend_Score[iSoQuanDich2];
	*/
	if (iSoQuanDich >= iSoQuanDich2)
		iScoreTempNgang -= 1;
	else
		iScoreTempNgang -= 2;
	if (iSoQuanDich == 4)
		iScoreTempNgang *= 2;
	return iScoreTempNgang;
}

long _Board::pointDefense_diagonal1(long Dong, long Cot, const long Defend_Score[], const long Attack_Score[])
{

	long iScoreTempCheoNguoc = 0;
	long iScoreDefend = 0;
	int iSoQuanDich = 0;
	int iSoQuanTa = 0;
	int iSoQuanDich2 = 0;
	int iSoQuanTa2 = 0;
	for (int iDem = 1; iDem < 6 && Cot + iDem < _size && Dong + iDem < _size; iDem++)
	{
		if (_pArr[Dong + iDem][Cot + iDem].getCheck() == 1)
		{
			iSoQuanTa++;
			break;
		}
		if (_pArr[Dong + iDem][Cot + iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot + iDem2 < _size && Dong + iDem2 < _size; iDem2++)
			{
				if (_pArr[Dong + iDem2][Cot + iDem2].getCheck() == 1)
				{
					iSoQuanTa2++;
					break;
				}
				if (_pArr[Dong + iDem2][Cot + iDem2].getCheck() == 0)
					break;
				if (_pArr[Dong + iDem2][Cot + iDem2].getCheck() == -1)
					iSoQuanDich2++;
			}
			break;
		}
		if (_pArr[Dong + iDem][Cot + iDem].getCheck() == -1)
			iSoQuanDich++;
	}
	//iScoreDefend += Defend_Score[iSoQuanDich];
	//iSoQuanDich = 0;

	for (int iDem = 1; iDem < 6 && Cot - iDem >= 0 && Dong - iDem >= 0; iDem++)
	{
		if (_pArr[Dong - iDem][Cot - iDem].getCheck() == 1)
		{
			iSoQuanTa++;
			break;
		}

		if (_pArr[Dong - iDem][Cot - iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot - iDem2 >= 0 && Dong - iDem2 >= 0; iDem2++)
			{
				if (_pArr[Dong - iDem2][Cot - iDem2].getCheck() == 1)
				{
					iSoQuanTa2++;
					break;
				}

				if (_pArr[Dong - iDem2][Cot - iDem2].getCheck() == 0)
					break;
				if (_pArr[Dong - iDem2][Cot - iDem2].getCheck() == -1)
					iSoQuanDich2++;
			}
			break;
		}
		if (_pArr[Dong - iDem][Cot - iDem].getCheck() == -1)
			iSoQuanDich++;
	}
	if (iSoQuanTa == 2)
		return 0;
	if (iSoQuanTa == 0)
		iScoreTempCheoNguoc += Defend_Score[iSoQuanDich] * 2;
	else
		iScoreTempCheoNguoc += Defend_Score[iSoQuanDich];
	/*
	if (iSoQuanTa == 0)
	iScoreTempDoc += Defend_Score[iSoQuanDich2] * 2;
	else
	iScoreTempDoc += Defend_Score[iSoQuanDich2];
	*/
	if (iSoQuanDich >= iSoQuanDich2)
		iScoreTempCheoNguoc -= 1;
	else
		iScoreTempCheoNguoc -= 2;
	if (iSoQuanDich == 4)
		iScoreTempCheoNguoc *= 2;
	return iScoreTempCheoNguoc;
}

long _Board::pointDefense_diagonal2(long Dong, long Cot, const long Defend_Score[], const long Attack_Score[])
{
	long iScoreTempCheoXuoi = 0;
	long iScoreDefend = 0;
	int iSoQuanDich = 0;
	int iSoQuanTa = 0;
	int iSoQuanDich2 = 0;
	int iSoQuanTa2 = 0;
	for (int iDem = 1; iDem < 6 && Cot - iDem >= 0 && Dong + iDem < _size; iDem++)
	{
		if (_pArr[Dong + iDem][Cot - iDem].getCheck() == 1)
		{
			iSoQuanTa++;
			break;
		}
		if (_pArr[Dong + iDem][Cot - iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem2 < 7 && Cot - iDem2 >= 0 && Dong + iDem2 < _size; iDem2++)
			{
				if (_pArr[Dong + iDem2][Cot - iDem2].getCheck() == 1)
				{
					iSoQuanTa2++;
					break;
				}
				if (_pArr[Dong + iDem2][Cot - iDem2].getCheck() == 0)
					break;
				if (_pArr[Dong + iDem2][Cot - iDem2].getCheck() == -1)
					iSoQuanDich2++;
			}
			break;
		}
		if (_pArr[Dong + iDem][Cot - iDem].getCheck() == -1)
			iSoQuanDich++;
	}
	//iScoreDefend += Defend_Score[iSoQuanDich];
	//iSoQuanDich = 0;

	for (int iDem = 1; iDem < 6 && Cot + iDem < _size && Dong - iDem >= 0; iDem++)
	{
		if (_pArr[Dong - iDem][Cot + iDem].getCheck() == 1)
		{
			iSoQuanTa++;
			break;
		}
		if (_pArr[Dong - iDem][Cot + iDem].getCheck() == 0)
		{
			for (int iDem2 = 2; iDem < 7 && Cot + iDem2 < _size && Dong - iDem2 >= 0; iDem2++)
			{
				if (_pArr[Dong - iDem2][Cot + iDem2].getCheck() == 1)
				{
					iSoQuanTa2++;
					break;
				}
				if (_pArr[Dong - iDem2][Cot + iDem2].getCheck() == 0)
					break;
				if (_pArr[Dong - iDem2][Cot + iDem2].getCheck() == -1)
					iSoQuanDich2++;
			}
			break;
		}
		if (_pArr[Dong - iDem][Cot + iDem].getCheck() == -1)
			iSoQuanDich++;
	}


	if (iSoQuanTa == 2)
		return 0;
	if (iSoQuanTa == 0)
		iScoreTempCheoXuoi += Defend_Score[iSoQuanDich] * 2;
	else
		iScoreTempCheoXuoi += Defend_Score[iSoQuanDich];
	/*
	if (iSoQuanTa == 0)
	iScoreTempDoc += Defend_Score[iSoQuanDich2] * 2;
	else
	iScoreTempDoc += Defend_Score[iSoQuanDich2];
	*/
	if (iSoQuanDich >= iSoQuanDich2)
		iScoreTempCheoXuoi -= 1;
	else
		iScoreTempCheoXuoi -= 2;
	if (iSoQuanDich == 4)
		iScoreTempCheoXuoi *= 2;
	return iScoreTempCheoXuoi;
}
_Point _Board::findPlacesHard()
{
	_Point Oco;
	int dong = 0, cot = 0;
	long Diem = 0;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			long DiemTanCong = 0;
			long DiemPhongThu = 0;
			if (_pArr[i][j].getCheck() == 0)
			{
				DiemTanCong += pointAttack_column(i, j, Defend_Score1, Attack_Score1);
				DiemTanCong += pointAttack_row(i, j, Defend_Score1, Attack_Score1);
				DiemTanCong += pointAttack_diagonal1(i, j, Defend_Score1, Attack_Score1);
				DiemTanCong += pointAttack_diagonal2(i, j, Defend_Score1, Attack_Score1);

				DiemPhongThu += pointDefense_column(i, j, Defend_Score1, Attack_Score1);
				DiemPhongThu += pointDefense_row(i, j, Defend_Score1, Attack_Score1);
				DiemPhongThu += pointDefense_diagonal1(i, j, Defend_Score1, Attack_Score1);
				DiemPhongThu += pointDefense_diagonal2(i, j, Defend_Score1, Attack_Score1);

				if (DiemTanCong > DiemPhongThu)
				{
					if (Diem < DiemTanCong)
					{
						Diem = DiemTanCong;
						dong = i;
						cot = j;
					}
				}
				else
				{
					if (Diem < DiemPhongThu)
					{
						Diem = DiemPhongThu;
						dong = i;
						cot = j;
					}
				}
			}
		}
	}
	Oco.setX(cot * 4 + 2);
	Oco.setY(dong * 2 + 1);
	return Oco;
}
_Point _Board::findPlacesEasy()
{
	_Point Oco;
	int dong = 0, cot = 0;
	long Diem = 0;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			long DiemTanCong = 0;
			long DiemPhongThu = 0;
			if (_pArr[i][j].getCheck() == 0)
			{
				DiemTanCong += pointAttack_column(i, j, Defend_Score2, Attack_Score2);
				DiemTanCong += pointAttack_row(i, j, Defend_Score2, Attack_Score2);
				DiemTanCong += pointAttack_diagonal1(i, j, Defend_Score2, Attack_Score2);
				DiemTanCong += pointAttack_diagonal2(i, j, Defend_Score2, Attack_Score2);

				DiemPhongThu += pointDefense_column(i, j, Defend_Score2, Attack_Score2);
				DiemPhongThu += pointDefense_row(i, j, Defend_Score2, Attack_Score2);
				DiemPhongThu += pointDefense_diagonal1(i, j, Defend_Score2, Attack_Score2);
				DiemPhongThu += pointDefense_diagonal2(i, j, Defend_Score2, Attack_Score2);

				if (DiemTanCong > DiemPhongThu)
				{
					if (Diem < DiemTanCong)
					{
						Diem = DiemTanCong;
						dong = i;
						cot = j;
					}
				}
				else
				{
					if (Diem < DiemPhongThu)
					{
						Diem = DiemPhongThu;
						dong = i;
						cot = j;
					}
				}
			}
		}
	}
	Oco.setX(cot * 4 + 2);
	Oco.setY(dong * 2 + 1);
	return Oco;;
}