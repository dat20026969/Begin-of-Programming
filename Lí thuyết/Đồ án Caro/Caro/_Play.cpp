#include "_Play.h"
#include <vector>
#include <Windows.h>
#include <mmsystem.h>
#include <iostream>
using namespace std;

struct Name {
	char data[30];
};
vector <Name> ch;
void Textcolor(int color)
{
	HANDLE hConsoleColor;
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, color);
}
void AnTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void HienTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = TRUE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
int ReadChedo(char a[30])
{
	int d1, d2, chedo;
	system("cls");
	ifstream f;
	f.open(a, ios::in);
	if (!f) {
		_Common::goToXY(35, 46);
		cout << "\n FILE KHONG TON TAI!" << endl;
		Sleep(1000);
		ScreenStartGame(99);
	}
	else
		f >> d1 >> d2 >> chedo;
	f.close();
	return chedo;
}
void ReadNameFile()
{
	Textcolor(Cyan);
	_Common::goToXY(60, 18);
	cout << "LIST FILE NAME";
	int i = 19;
	ifstream f;
	f.open("Name.txt", ios::in);
	while (!f.eof())
	{
		char s[30];
		f >> s;
		_Common::goToXY(50, i);
		cout << s;
		i++;
	}
	f.close();
}
void PrintCaro()
{
	int x = 25, y = 0;
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x - 4, y);		cout << "****************";
	_Common::goToXY(x - 5, y + 1);	cout << "*****************";
	_Common::goToXY(x - 6, y + 2);  cout << "******************";
	_Common::goToXY(x - 7, y + 3);  cout << "********";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x - 7, y + 4);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 5);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 6);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 7);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 8);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 9);  cout << "$-CARO-$";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x - 7, y + 10); cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 11); cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 12); cout << "$******$";
	_Common::goToXY(x - 6, y + 13); cout << "****************";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x - 4, y + 14);	cout << "***************";
	_Common::goToXY(x - 3, y + 15);	    cout << "***************";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x - 4 + 22 - 3, y + 4);			 cout << "******       *****";
	_Common::goToXY(x - 4 + 22 - 3, y + 5);		     cout << " ******     ***** ";
	_Common::goToXY(x - 4 + 22 - 3, y + 6);		     cout << "  ******   *****      ";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x - 4 + 22 - 3, y + 7);			 cout << "   ****** *****";
	_Common::goToXY(x - 4 + 22 - 3, y + 8);			 cout << "    **********";
	_Common::goToXY(x - 4 + 22 - 3, y + 9);			 cout << "     ********";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x - 4 + 22 - 3, y + 10);		 cout << "     ********";
	_Common::goToXY(x - 4 + 22 - 3, y + 11);		 cout << "    **********";
	_Common::goToXY(x - 4 + 22 - 3, y + 12);		 cout << "   ***** ******";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x - 4 + 22 - 3, y + 13);		 cout << "  *****   ******";
	_Common::goToXY(x - 4 + 22 - 3, y + 14);		 cout << " *****     ******";
	_Common::goToXY(x - 4 + 22 - 3, y + 15);		 cout << "*****       ******";

	Textcolor(rand() % 15 + 241);

	_Common::goToXY(x + 33, y + 4);			cout << " oooooooooooooooo";
	_Common::goToXY(x + 33, y + 5);			cout << " ooooooooooooooooo";
	_Common::goToXY(x + 33, y + 6);			cout << " oooo          oooo";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x + 33, y + 7);			cout << " oooo           oooo";
	_Common::goToXY(x + 1 + 33, y + 8);			 cout << "oooo           oooo";
	_Common::goToXY(x + 1 + 33, y + 9);			 cout << "oooo          oooo";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x + 1 + 33, y + 10);		 cout << "oooooooooooooooo";
	_Common::goToXY(x + 1 + 33, y + 11);		 cout << "ooooooooooooo ";
	_Common::goToXY(x + 1 + 33, y + 12);		 cout << "oooo      oooo";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x + 1 + 33, y + 13);		 cout << "oooo       oooo";
	_Common::goToXY(x + 1 + 33, y + 14);		 cout << "oooo        oooo";
	_Common::goToXY(x + 1 + 33, y + 15);		 cout << "oooo         oooo";
	// Textcolor(Yellow);
	_Common::goToXY(x + 57, y + 4);					cout << "***************";
	_Common::goToXY(x + 57 - 2, y + 5);			  cout << "*******************";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x + 57 - 3, y + 6);			 cout << "*********************";
	_Common::goToXY(x + 57 - 3, y + 7);			 cout << "******         ******";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x + 57 - 3, y + 8);			 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 9);			 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 10);		 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 11);		 cout << "******         ******";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x + 57 - 3, y + 12);		 cout << "*****          ******";
	_Common::goToXY(x + 57 - 3, y + 13);		 cout << "*********************";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x + 57 - 2, y + 14);		  cout << "*******************";
	_Common::goToXY(x + 57, y + 15);				cout << "***************";
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(x + 57 + 25, y + 7);		cout << "   | X |   ";
	_Common::goToXY(x + 57 + 25, y + 8);			cout << "-----------";
	_Common::goToXY(x + 57 + 25, y + 9);		cout << " X | O | O";
	_Common::goToXY(x + 57 + 25, y + 10);		cout << "-----------";
	_Common::goToXY(x + 57 + 25, y + 11);		cout << "   | X |   ";
	Textcolor(rand() % 13 + 241);
	_Common::goToXY(15, 28); cout << "                                                                     oooooo     oooooo     oooooo     ooo ";
	_Common::goToXY(15, 29); cout << "ooo    ooo       ooo      oooooooo    oooooooo    ooo     ooo       ooo   oo   oo    oo   ooo   oo    ooo ";
	_Common::goToXY(15, 30); cout << "ooo    ooo      oo oo     oo      o   oo      o    ooo   ooo        oo    oo   oo    oo   oo    oo    ooo ";
	_Common::goToXY(15, 31); cout << "oooooooooo     oo   oo    oo      o   oo      o      ooooo             oo      oo    oo        oo     ooo ";
	_Common::goToXY(15, 32); cout << "oooooooooo    ooooooooo   ooooooo     ooooooo         ooo            oo        oo    oo      oo       ooo ";
	_Common::goToXY(15, 33); cout << "ooo    ooo   oo       oo  oo          oo              ooo           oo         oo    oo    oo         ooo ";
	_Common::goToXY(15, 34); cout << "ooo    ooo  oo         oo oo          oo              ooo         ooooooooo     oooooo   ooooooooo    ooo ";
}
void PrintCaro2()
{
	int x = 25, y = 0;
	Sleep(200);
	Textcolor(246);
	_Common::goToXY(x - 4, y);		cout << "****************";
	_Common::goToXY(x - 5, y + 1);	cout << "*****************";
	_Common::goToXY(x - 6, y + 2);  cout << "******************";
	_Common::goToXY(x - 7, y + 3);  cout << "********";
	_Common::goToXY(x - 7, y + 4);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 5);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 6);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 7);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 8);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 9);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 10); cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 11); cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 12); cout << "$******$";
	_Common::goToXY(x - 6, y + 13); cout << "****************";
	_Common::goToXY(x - 4, y + 14);	cout << "***************";
	_Common::goToXY(x - 3, y + 15);	    cout << "***************";
	Sleep(200);
	Textcolor(244);
	_Common::goToXY(x - 4 + 22 - 3, y + 4);			 cout << "******       *****";
	_Common::goToXY(x - 4 + 22 - 3, y + 5);		     cout << " ******     ***** ";
	_Common::goToXY(x - 4 + 22 - 3, y + 6);		     cout << "  ******   *****      ";
	_Common::goToXY(x - 4 + 22 - 3, y + 7);			 cout << "   ****** *****";
	_Common::goToXY(x - 4 + 22 - 3, y + 8);			 cout << "    **********";
	_Common::goToXY(x - 4 + 22 - 3, y + 9);			 cout << "     ********";
	_Common::goToXY(x - 4 + 22 - 3, y + 10);		 cout << "     ********";
	_Common::goToXY(x - 4 + 22 - 3, y + 11);		 cout << "    **********";
	_Common::goToXY(x - 4 + 22 - 3, y + 12);		 cout << "   ***** ******";
	_Common::goToXY(x - 4 + 22 - 3, y + 13);		 cout << "  *****   ******";
	_Common::goToXY(x - 4 + 22 - 3, y + 14);		 cout << " *****     ******";
	_Common::goToXY(x - 4 + 22 - 3, y + 15);		 cout << "*****       ******";
	Sleep(200);
	Textcolor(253);
	_Common::goToXY(x + 33, y + 4);			     cout << " oooooooooooooooo";
	_Common::goToXY(x + 33, y + 5);			     cout << " ooooooooooooooooo";
	_Common::goToXY(x + 33, y + 6);			     cout << " oooo          oooo";
	_Common::goToXY(x + 33, y + 7);			     cout << " oooo           oooo";
	_Common::goToXY(x + 1 + 33, y + 8);			 cout << "oooo           oooo";
	_Common::goToXY(x + 1 + 33, y + 9);			 cout << "oooo          oooo";
	_Common::goToXY(x + 1 + 33, y + 10);		 cout << "oooooooooooooooo";
	_Common::goToXY(x + 1 + 33, y + 11);		 cout << "ooooooooooooo ";
	_Common::goToXY(x + 1 + 33, y + 12);		 cout << "oooo      oooo";
	_Common::goToXY(x + 1 + 33, y + 13);		 cout << "oooo       oooo";
	_Common::goToXY(x + 1 + 33, y + 14);		 cout << "oooo        oooo";
	_Common::goToXY(x + 1 + 33, y + 15);		 cout << "oooo         oooo";
	Sleep(200);
	Textcolor(241);
	_Common::goToXY(x + 57, y + 4);					cout << "***************";
	_Common::goToXY(x + 57 - 2, y + 5);			  cout << "*******************";
	_Common::goToXY(x + 57 - 3, y + 6);			 cout << "*********************";
	_Common::goToXY(x + 57 - 3, y + 7);			 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 8);			 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 9);			 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 10);		 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 11);		 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 12);		 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 13);		 cout << "*********************";
	_Common::goToXY(x + 57 - 2, y + 14);		  cout << "*******************";
	_Common::goToXY(x + 57, y + 15);				cout << "***************";
	Sleep(200);
	Textcolor(240);
	_Common::goToXY(x + 57 + 25, y + 7);		cout << "   | X |   ";
	_Common::goToXY(x + 57 + 25, y + 8);		cout << "-----------";
	_Common::goToXY(x + 57 + 25, y + 9);		cout << " X | O | O";
	_Common::goToXY(x + 57 + 25, y + 10);		cout << "-----------";
	_Common::goToXY(x + 57 + 25, y + 11);		cout << "   | X |   ";
	Textcolor(defaultColor);


}
void PrintCaro3()
{
	int x = 25, y = 0;
	Sleep(200);
	Textcolor(246);
	_Common::goToXY(x - 4, y);		cout << "****************";
	_Common::goToXY(x - 5, y + 1);	cout << "*****************";
	_Common::goToXY(x - 6, y + 2);  cout << "******************";
	_Common::goToXY(x - 7, y + 3);  cout << "********";
	_Common::goToXY(x - 7, y + 4);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 5);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 6);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 7);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 8);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 9);  cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 10); cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 11); cout << "$-CARO-$";
	_Common::goToXY(x - 7, y + 12); cout << "$******$";
	_Common::goToXY(x - 6, y + 13); cout << "****************";
	_Common::goToXY(x - 4, y + 14);	cout << "***************";
	_Common::goToXY(x - 3, y + 15);	    cout << "***************";
	Sleep(200);
	Textcolor(244);
	_Common::goToXY(x - 4 + 22 - 3, y + 4);			 cout << "******       *****";
	_Common::goToXY(x - 4 + 22 - 3, y + 5);		     cout << " ******     ***** ";
	_Common::goToXY(x - 4 + 22 - 3, y + 6);		     cout << "  ******   *****      ";
	_Common::goToXY(x - 4 + 22 - 3, y + 7);			 cout << "   ****** *****";
	_Common::goToXY(x - 4 + 22 - 3, y + 8);			 cout << "    **********";
	_Common::goToXY(x - 4 + 22 - 3, y + 9);			 cout << "     ********";
	_Common::goToXY(x - 4 + 22 - 3, y + 10);		 cout << "     ********";
	_Common::goToXY(x - 4 + 22 - 3, y + 11);		 cout << "    **********";
	_Common::goToXY(x - 4 + 22 - 3, y + 12);		 cout << "   ***** ******";
	_Common::goToXY(x - 4 + 22 - 3, y + 13);		 cout << "  *****   ******";
	_Common::goToXY(x - 4 + 22 - 3, y + 14);		 cout << " *****     ******";
	_Common::goToXY(x - 4 + 22 - 3, y + 15);		 cout << "*****       ******";
	Sleep(200);
	Textcolor(253);
	_Common::goToXY(x + 33, y + 4);			     cout << " oooooooooooooooo";
	_Common::goToXY(x + 33, y + 5);			     cout << " ooooooooooooooooo";
	_Common::goToXY(x + 33, y + 6);			     cout << " oooo          oooo";
	_Common::goToXY(x + 33, y + 7);			     cout << " oooo           oooo";
	_Common::goToXY(x + 1 + 33, y + 8);			 cout << "oooo           oooo";
	_Common::goToXY(x + 1 + 33, y + 9);			 cout << "oooo          oooo";
	_Common::goToXY(x + 1 + 33, y + 10);		 cout << "oooooooooooooooo";
	_Common::goToXY(x + 1 + 33, y + 11);		 cout << "ooooooooooooo ";
	_Common::goToXY(x + 1 + 33, y + 12);		 cout << "oooo      oooo";
	_Common::goToXY(x + 1 + 33, y + 13);		 cout << "oooo       oooo";
	_Common::goToXY(x + 1 + 33, y + 14);		 cout << "oooo        oooo";
	_Common::goToXY(x + 1 + 33, y + 15);		 cout << "oooo         oooo";
	Sleep(200);
	Textcolor(241);
	_Common::goToXY(x + 57, y + 4);					cout << "***************";
	_Common::goToXY(x + 57 - 2, y + 5);			  cout << "*******************";
	_Common::goToXY(x + 57 - 3, y + 6);			 cout << "*********************";
	_Common::goToXY(x + 57 - 3, y + 7);			 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 8);			 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 9);			 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 10);		 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 11);		 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 12);		 cout << "******         ******";
	_Common::goToXY(x + 57 - 3, y + 13);		 cout << "*********************";
	_Common::goToXY(x + 57 - 2, y + 14);		  cout << "*******************";
	_Common::goToXY(x + 57, y + 15);				cout << "***************";
	Sleep(200);
	Textcolor(240);
	_Common::goToXY(x + 57 + 25, y + 7);		cout << "   | X |   ";
	_Common::goToXY(x + 57 + 25, y + 8);		cout << "-----------";
	_Common::goToXY(x + 57 + 25, y + 9);		cout << " X | O | O";
	_Common::goToXY(x + 57 + 25, y + 10);		cout << "-----------";
	_Common::goToXY(x + 57 + 25, y + 11);		cout << "   | X |   ";
	Textcolor(defaultColor);

}
void About()
{
	system("cls");
	PrintCaro3();
	Textcolor(Cyan);
	_Common::goToXY(60, 18);
	cout << "ABOUT";
	_Common::goToXY(50, 21);
	cout << "DO AN GAME CARO" << endl;
	_Common::goToXY(50, 22);
	cout << "-> GAME DUOC LAM BOI NHOM 10 " << endl;
	_Common::goToXY(50, 23);
	cout << "LOP 20CLC08" << endl;
	_Common::goToXY(50, 24);
	cout << "CAM CAC CAC BAN DA CHOI GAME " << endl;
	Textcolor(rand() % 15 + 241);
	_Common::goToXY(50, 25);
	cout << "-> Chuc moi nguoi choi game vui ve <--" << endl;
	_Common::goToXY(60, 30);
	Textcolor(Red);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}
void Help()
{
	system("cls");
	PrintCaro3();
	Textcolor(Blue);
	_Common::goToXY(60, 18);
	cout << "HELP";
	_Common::goToXY(40, 21);
	cout << "HUONG DAN" << endl;
	_Common::goToXY(40, 22);
	cout << "BAN CO CO 16X16 O VUONG " << endl;
	_Common::goToXY(40, 23);
	cout << "DUNG CAC NUT W A S D DE DI CHUYEN " << endl;
	_Common::goToXY(40, 24);
	cout << "AI CO 5 NUOC TIH THEO NGANG,DOC, CHEO SE THANG " << endl;
	Textcolor(Red);
	_Common::goToXY(40, 25);
	cout << "CHUC BAN CHOI GAME VUI VE " << endl;
	_Common::goToXY(50, 30);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}
void LoadLoad()
{
	int n = 100;
	system("cls");
	PrintCaro3();
	ReadNameFile();
	char data[30];
	_Common::goToXY(50, 32);
	HienTroChuot();
	cout << "ENTER FILE NAME: ";
	cin.getline(data, 30);
	int chedo = ReadChedo(data);
	if (chedo == -30 || chedo == -31)
	{
		Diem a;
		a.score1 = 0;
		a.score2 = 0;
		int t = PlayerVsPlayer(a, chedo, data);
		if (t == 27)
		{
			system("cls");
			ScreenStartGame(n - 1);
		}
	}
	if (chedo == -4)
	{
		Diem a;
		a.score1 = 0;
		a.score2 = 0;
		int t = PlayerVsCom2(a, -4, data);
		if (t == 27)
		{
			system("cls");
			ScreenStartGame(n - 1);
		}
	}
	if (chedo == -5)
	{
		Diem a;
		a.score1 = 0;
		a.score2 = 0;
		int t = PlayerVsCom(a, -5, data);
		if (t == 27)
		{
			system("cls");
			ScreenStartGame(n - 1);
		}
	}
}
void ScreenStartGame(int n)
{
	AnTroChuot();
	int x = 50, y = 20;
	int i;
	char s[30] = " ";
	int check = 1;
	Textcolor(Red);
	_Common::goToXY(50, 20); cout << "Player Vs Player ";
	Textcolor(240);
	_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
	_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
	_Common::goToXY(50, 23); cout << "Load Game";
	_Common::goToXY(50, 24); cout << "Help";
	_Common::goToXY(50, 25); cout << "About";
	_Common::goToXY(50, 26); cout << "Exit";
	Textcolor(rand() % 13 + 241);
	_Common::goToXY(15, 28); cout << "                                                                     oooooo     oooooo     oooooo     ooo  ";
	_Common::goToXY(15, 29); cout << "ooo    ooo       ooo      oooooooo    oooooooo    ooo     ooo       ooo   oo   oo    oo   ooo   oo    ooo" ;
	_Common::goToXY(15, 30); cout << "ooo    ooo      oo oo     oo      o   oo      o    ooo   ooo        oo    oo   oo    oo   oo    oo    ooo"  ;
	_Common::goToXY(15, 31); cout << "oooooooooo     oo   oo    oo      o   oo      o      ooooo             oo      oo    oo        oo     ooo";
	_Common::goToXY(15, 32); cout << "oooooooooo    ooooooooo   ooooooo     ooooooo         ooo            oo        oo    oo      oo       ooo ";
	_Common::goToXY(15,33); cout << " ooo    ooo   oo       oo  oo          oo              ooo           oo         oo    oo    oo          ooo " ;
	_Common::goToXY(15, 34); cout << "ooo    ooo  oo         oo oo          oo              ooo         ooooooooo     oooooo   ooooooooo    ooo ";

	if (n == 100)
	{
		PlaySound(TEXT("muzic.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Screen();
		PrintCaro2();
	}
	else
		PrintCaro3();

	while (check)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'w':
				if (y > 20)
				{
					y--;
					_Common::goToXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					Textcolor(240);
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 21)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					Textcolor(Red);
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					Textcolor(240);
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 22)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					Textcolor(Red);
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					Textcolor(240);
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 23)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					Textcolor(Red);
					_Common::goToXY(50, 23); cout << "Load Game";
					Textcolor(240);
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 24)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					Textcolor(Red);
					_Common::goToXY(50, 24); cout << "Help";
					Textcolor(240);
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 25)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					Textcolor(Red);
					_Common::goToXY(50, 25); cout << "About";
					Textcolor(240);
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 26)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					Textcolor(Red);
					_Common::goToXY(50, 25); cout << "About";
					Textcolor(240);
					_Common::goToXY(50, 26); cout << "Exit";
				}
				break;
			case 's':
				if (y < 26)
				{
					y++;
					_Common::goToXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					Textcolor(240);
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 21)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					Textcolor(Red);
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					Textcolor(240);
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 22)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					Textcolor(Red);
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					Textcolor(240);
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 23)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					Textcolor(Red);
					_Common::goToXY(50, 23); cout << "Load Game";
					Textcolor(240);
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 24)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					Textcolor(Red);
					_Common::goToXY(50, 24); cout << "Help";
					Textcolor(240);
					_Common::goToXY(50, 25); cout << "About";
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 25)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					Textcolor(Red);
					_Common::goToXY(50, 25); cout << "About";
					Textcolor(240);
					_Common::goToXY(50, 26); cout << "Exit";
				}
				if (y == 26)
				{
					Textcolor(240);
					_Common::goToXY(50, 20); cout << "Player Vs Player";
					_Common::goToXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::goToXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::goToXY(50, 23); cout << "Load Game";
					_Common::goToXY(50, 24); cout << "Help";
					_Common::goToXY(50, 25); cout << "About";
					Textcolor(Red);
					_Common::goToXY(50, 26); cout << "Exit";
				}
				break;
			case 13:
				PlaySound(TEXT("choose.wav"), NULL, SND_FILENAME | SND_SYNC);
				if (y == 20)
				{
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
					int t = PlayerVsPlayer(a, 0, s);
					if (t == 27)
					{
						system("cls");
						ScreenStartGame(99);
					}
				}
				if (y == 21)
				{
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
					int t = PlayerVsCom2(a, 0, s);
					if (t == 27)
					{
						system("cls");
						ScreenStartGame(99);
					}
				}
				if (y == 22)
				{
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
					int t = PlayerVsCom(a, 0, s);
					if (t == 27)
					{
						system("cls");
						ScreenStartGame(99);
					}
				}
				if (y == 23)
				{
					LoadLoad();

				}
				if (y == 24)
				{
					Help();
					ScreenStartGame(99);
				}
				if (y == 25)
				{
					About();
					ScreenStartGame(99);
				}
				if (y == 26)
				{
					exit(0);
				}
				break;
			}
		}
	}
	system("color F0");
}
void PrintScoreBoard()
{

	Textcolor(DarkPink);
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 - 14) / 2 + 1); cout << "_| _| _| _| _|   ";
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 - 12) / 2 + 1); cout << "_| ";
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 - 10) / 2 + 1); cout << "_| ";
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 - 8) / 2 + 1); cout << "_|";
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 - 6) / 2 + 1); cout << "_|";
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 - 4) / 2 + 1); cout << "_|";
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 - 2) / 2 + 1); cout << "_| _| _| _| _|   ";
	

	Textcolor(DarkRed);
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 4) / 2);   cout << "oooooooooooooooo " << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 6) / 2);   cout << "o  xxx   xxx   o" << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 8) / 2);  cout << "o   xxx xxx    o  " << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 10) / 2);   cout << "o     xxx      o" << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 12) / 2);  cout << "o   xxx xxx    o  " << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 14) / 2);  cout << "o  xxx   xxx   o    " << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 16) / 2);  cout << "oooooooooooooooo" << endl;
	Textcolor(DarkCyan);

	_Common::goToXY(SIZE * 4 + 6, (SIZE * 1 + 10) / 2 + 5); cout << "_|  _| _|";
	_Common::goToXY(SIZE * 4 + 6, (SIZE * 1 + 10) / 2 + 6); cout << "_|__|     _|";
	_Common::goToXY(SIZE * 4 + 6, (SIZE * 1 + 10) / 2 + 7); cout << "_| ";
	_Common::goToXY(SIZE * 4 + 6, (SIZE * 1 + 10) / 2 + 8); cout << "_| ";
	_Common::goToXY(SIZE * 4 + 6, (SIZE * 1 + 10) / 2 + 9); cout << "_| ";
	_Common::goToXY(SIZE * 4 + 6, (SIZE * 1 + 10) / 2 + 10); cout << "_| ";
	Textcolor(DarkBlue);
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 10) / 2 + 12);   cout << "oooooooooooooooo " << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 10) / 2 + 13);   cout << "o     0000     o" << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 10) / 2 + 14);   cout << "o   00    00   o" << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 10) / 2 + 15);   cout << "o   00    00   o" << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 10) / 2 + 16);   cout << "o   00    00   o  " << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 10) / 2 + 17);   cout << "o     0000     o    " << endl;
	_Common::goToXY(SIZE * 4 + 5, (SIZE * 1 + 10) / 2 + 18);   cout << "oooooooooooooooo" << endl;

	//Bang 2
	Textcolor(Blue);
	_Common::goToXY(SIZE * 4 + 19, (SIZE * 2 - 1) / 2 + 1);
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Common::goToXY(SIZE * 4 + 25, 11 + i);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Common::goToXY(SIZE * 4 + 61, 11 + i);
		cout << char(219);
	}
	_Common::goToXY(SIZE * 4 + 25, 10);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(220);
	}
	_Common::goToXY(SIZE * 4 + 25, 11 + 8);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(223);
	}
	// Bang 3
	Sleep(1);
	Textcolor(Black);
	_Common::goToXY(SIZE * 4 + 19, (SIZE * 2 - 1) - 3);
	for (int i = 0; i < 10; i++) {
		Sleep(1);
		_Common::goToXY(SIZE * 4 + 25, SIZE * 2 - i);
		cout << char(219);
	}
	for (int i = 0; i < 10; i++) {
		Sleep(1);
		_Common::goToXY(SIZE * 4 + 61, SIZE * 2 - i);
		cout << char(219);
	}
	_Common::goToXY(SIZE * 4 + 25, SIZE * 2);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(223);
	}
	_Common::goToXY(SIZE * 4 + 25, SIZE * 2 - 10);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(220);
	}
	// Bang 1
	Sleep(1);
	Textcolor(Red);
	_Common::goToXY(SIZE * 4 + 19, 4);
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Common::goToXY(SIZE * 4 + 25, i + 1);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Common::goToXY(SIZE * 4 + 61, i + 1);
		cout << char(219);
	}
	_Common::goToXY(SIZE * 4 + 25, 0);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(220);
	}
	_Common::goToXY(SIZE * 4 + 25, 8 + 1);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(223);
	}
	Textcolor(Red);
	_Common::goToXY(SIZE * 4 + 40, 2);
	cout << "QUAN X";
	Textcolor(Black);
	_Common::goToXY(SIZE * 4 + 30, 4);
	cout << "So quan X : ";
	_Common::goToXY(SIZE * 4 + 30, 5);
	cout << "So tran thang : ";

	Textcolor(Blue);
	_Common::goToXY(SIZE * 4 + 40, 12);
	cout << "QUAN O";
	Textcolor(Black);
	_Common::goToXY(SIZE * 4 + 30, 14);
	cout << "So quan O : ";
	_Common::goToXY(SIZE * 4 + 30, 15);
	cout << "So tran thang : ";




	_Common::goToXY(SIZE * 4 + 30, 27);
	cout << "-----------------------";
	_Common::goToXY(SIZE * 4 + 30, 28);
	cout << " W A S D : Move ";
	_Common::goToXY(SIZE * 4 + 30, 29);
	cout << " L : Save Game ";
	_Common::goToXY(SIZE * 4 + 30, 30);
	cout << " T: Load Game ";
	_Common::goToXY(SIZE * 4 + 30, 31);
	cout << " ESC : Exit ";

	_Common::goToXY(2, 1);
} // IN BANG DIEM
void Screen()
{
	int check = 1;
	while (check < 20)
	{
		PrintCaro();
		Sleep(100);
		check++;
	}

}
int PlayerVsCom(Diem& a, int load, char data[30])
{
	int k = 1, n = 100;
	HienTroChuot();
	_Game g(SIZE, 0, 0);
	g.setCountXY();
	if (load == -5)
	{
		g.LoadGame(data);
	}
	else
	{
		g.startGame();
		g.setTurn();
	}
	PrintScoreBoard();
	Textcolor(Cyan);
	_Common::goToXY(SIZE * 4 + 32, 24);
	cout << " PLAYER VS BOT (HARD) ";
	Textcolor(Blue);
	_Common::goToXY(SIZE * 4 + 30 + 18, 5);
	cout << a.score1;
	Textcolor(Red);
	_Common::goToXY(SIZE * 4 + 30 + 18, 15);
	cout << a.score2;
	_Common::goToXY(2, 1);
	while (g.isContinue())
	{
		if (!g.getTurn())
		{
			if (g.demNuocCoDaDi() == 0)
			{
				g.setX((SIZE * 4 / 2) - 2);
				g.setY((SIZE * 2 / 2) - 1);
				_Common::goToXY((SIZE * 4 / 2) - 2, (SIZE * 2 / 2) - 1);
				g.setCommand(13);
			}
			else
			{
				g.findPlacesEasy();
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				_Common::goToXY(x, y);
				Sleep(300);
				g.setCommand(13);
			}
		}
		else
			g.waitKeyBoard();
		if (g.getCommand() == 27)
		{
			PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
			return 27;
		}
		else
		{
			switch (g.getCommand())
			{
			case 'A':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveLeft();
				break;
			case 'D':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveRight();
				break;
			case 'W':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveUp();
				break;
			case 'S':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveDown();
				break;
			case 'L':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.SaveGame(-5);
				break;
			case 'T':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				LoadLoad();
				break;
			case 13:
				PlaySound(TEXT("choose.wav"), NULL, SND_FILENAME | SND_ASYNC);
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard()) {
					switch (g.processFinish(x, y)) {
					case -1:
						a.score1++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n - 1);
									break;
								}
							}
						}
						break;
					case 1:
						a.score2++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n - 1);
									break;
								}
							}
						}

						break;
					case 0:
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n - 1);
									break;
								}
							}
						}
						break;
					}
				}
			}
		}

	}
}
int PlayerVsCom2(Diem& a, int load, char data[30])
{
	int n = 99;
	int k = 1;
	HienTroChuot();
	_Game g(SIZE, 0, 0);
	g.setCountXY();
	if (load == -4)
	{
		g.LoadGame(data);
	}
	else
	{
		g.startGame();
		g.setTurn();
	}
	PrintScoreBoard();
	Textcolor(Cyan);
	_Common::goToXY(SIZE * 4 + 32, 24);
	cout << " PLAYER VS BOT (EASY) ";
	Textcolor(Blue);
	_Common::goToXY(SIZE * 4 + 30 + 18, 5);
	cout << a.score1;
	Textcolor(Red);
	_Common::goToXY(SIZE * 4 + 30 + 18, 15);
	cout << a.score2;
	_Common::goToXY(2, 1);
	while (g.isContinue())
	{
		if (!g.getTurn())
		{
			if (g.demNuocCoDaDi() == 0)
			{
				g.setX((SIZE * 4 / 2) - 2);
				g.setY((SIZE * 2 / 2) - 1);
				_Common::goToXY((SIZE * 4 / 2) - 2, (SIZE * 2 / 2) - 1);
				g.setCommand(13);
			}
			else
			{
				g.findPlacesEasy();
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				_Common::goToXY(x, y);
				Sleep(300);
				g.setCommand(13);
			}
		}
		else
			g.waitKeyBoard();
		if (g.getCommand() == 27) {
			PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
			return 27;
		}
		else
		{
			switch (g.getCommand())
			{
			case 'A':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveLeft();
				break;
			case 'D':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveRight();
				break;
			case 'W':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveUp();
				break;
			case 'S':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveDown();
				break;
			case 'L':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.SaveGame(-4);
				break;
			case 'T':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				LoadLoad();
				break;
			case 13:
				PlaySound(TEXT("choose.wav"), NULL, SND_FILENAME | SND_ASYNC);
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard()) {
					switch (g.processFinish(x, y)) {
					case -1:
						a.score1++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom2(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}

						break;
					case 1:
						a.score2++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom2(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}

						break;
					case 0:
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom2(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}
						break;
					}
				}
			}
		}

	}
}
int PlayerVsPlayer(Diem& a, int load, char data[30])
{
	int k = 1;
	int n = 99;
	HienTroChuot();
	_Game g(SIZE, 0, 0);

	system("color F0");
	g.setCountXY();
	if (load == -30)
	{
		g.setTurn();
		g.LoadGame(data);
	}
	else if (load == -31)
	{
		g.LoadGame(data);
	}
	else
		g.startGame();
	PrintScoreBoard();
	Textcolor(DarkCyan);
	_Common::goToXY(SIZE * 4 + 32, 24);
	cout << " PLAYER VS PLAYER ";
	Textcolor(Blue);
	_Common::goToXY(SIZE * 4 + 30 + 18, 5);
	cout << a.score1;
	Textcolor(Red);
	_Common::goToXY(SIZE * 4 + 30 + 18, 15);
	cout << a.score2;
	_Common::goToXY(2, 1);
	while (g.isContinue())
	{
		g.waitKeyBoard();
		if (g.getCommand() == 27) {
			PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
			return 27;
		}

		else
		{
			switch (g.getCommand())
			{
			case 'A':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveLeft();
				break;
			case 'D':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveRight();
				break;
			case 'W':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveUp();
				break;
			case 'S':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveDown();
				break;
			case 'L':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (g.getTurn() == 1)
					g.SaveGame(-31);
				else
					g.SaveGame(-30);
				break;
			case 'T':
				PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
				LoadLoad();
				break;
			case 13:
				PlaySound(TEXT("choose.wav"), NULL, SND_FILENAME | SND_ASYNC);
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard()) {
					switch (g.processFinish(x, y)) {
					case -1:
						a.score1++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("choose.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsPlayer(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}
						break;
					case 1:
						a.score2++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("choose.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsPlayer(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}
						break;
					case 0:
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("choose.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsPlayer(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("wasd.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}
						break;

					}
				}
			}
		}
	}
	system("Color F0");
}
