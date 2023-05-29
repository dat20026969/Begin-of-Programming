#pragma once
#ifndef _CONSOLE_
#define _CONSOLE_
#pragma warning(disable:4996)
#define ColorCode_Black			240
#define ColorCode_DarkBlue		241
#define ColorCode_DarkGreen		242
#define ColorCode_DarkCyan		243
#define ColorCode_DarkRed		244
#define ColorCode_DarkPink		245
#define ColorCode_DarkYellow	246
#define ColorCode_DarkWhite		247
#define ColorCode_Grey			248
#define ColorCode_Blue			249
#define ColorCode_Green			250
#define ColorCode_Cyan			251
#define ColorCode_Red			252
#define ColorCode_Pink			253
#define ColorCode_Yellow		254
#define ColorCode_White			255

#define default_ColorCode		240
#include <conio.h>
#include <cstdlib>
void remove_scrollbar();
void fixConsoleWindow();
void goToXY(int, int);
void textColor(int);
void showConsoleCursor(bool);
int getCursorY();
int getCursorX();
void changeFont(int x);
#endif // !_CONSOLE_