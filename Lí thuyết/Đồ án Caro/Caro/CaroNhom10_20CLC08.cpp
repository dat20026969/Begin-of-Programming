#include "_Diem.h"
#include "_BanCo.h"
#include "_General.h"
#include "_Game.h"
#include "_Play.h"
#include <string.h>
#include<Windows.h>
#include<iostream>
#include "_DieuKhien.h"
using namespace std;

void ClearConsoleToColors(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    //Get the handle to the current output buffer...
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    //This is used to reset the carat/cursor to the top left.
    COORD coord = { 0, 0 };
    //A return value... indicating how many chars were written
      //   not used but we need to capture this since it will be
        //   written anyway (passing NULL causes an access violation).
    DWORD count;

    //This is a structure containing all of the console info
// it is used here to find the size of the console.
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    //Here we will set the current color
    SetConsoleTextAttribute(hStdOut, wColor);
    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //This fills the buffer with a given character (in this case 32=space).
        FillConsoleOutputCharacter(hStdOut, (TCHAR)32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

        FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
        //This will set our cursor position for the next print statement.
        SetConsoleCursorPosition(hStdOut, coord);
    }
    return;
}
int main()
{
    ClearConsoleToColors(0, 15);
    remove_scrollbar();
    fixConsoleWindow();
    changeFont(16);
    system("color F0");

    //MENU
    //END(1);
    int n = 100;
    _Common::fixConsoleWindow();
    _Common::setConsoleWindow(1000, 600);

    ScreenStartGame(n);
    system("color F0");
    return 0;
}