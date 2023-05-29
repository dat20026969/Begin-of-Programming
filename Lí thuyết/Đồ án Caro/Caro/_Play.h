#pragma once
#include "_Diem.h"
#include "_General.h"
#include "_Banco.h"
#include "_Game.h"

#define SIZE			16   // SIZE BÀN CỜ 
#define Black			240
#define DarkBlue		241
#define DarkGreen		242
#define DarkCyan		243
#define DarkRed			244
#define DarkPink		245
#define DarkYellow		246
#define DarkWhite		247
#define Grey			248
#define Blue			249
#define Green			250
#define Cyan			251
#define Red				252
#define Pink			253
#define Yellow			254
#define White			255
#define defaultColor		240 
// MẶC ĐỊNH CÁC MÀU CƠ BẢN
struct Diem
{
	int score1;
	int score2;
};
// Tỉ số thắng thua 

int ReadChedo(char a[30]); // Đọc chế độ chơi
void ReadNameFile();  // Đọc tên các file đã lưu
void PrintCaro();
void PrintCaro2();
void PrintCaro3();
void Screen();
// In chữ CARO 
void Textcolor(int n); // Đổi màu kí tự 
void AnTroChuot();    // Ẩn trỏ chuột
void HienTroChuot();  // Hiện trỏ chuột
void ScreenStartGame(int); // Menu Chính
void PrintScoreBoard(); // In bảng điểm
int PlayerVsCom(Diem& a, int, char data[30]); // BOT HARD
int PlayerVsCom2(Diem& a, int, char data[30]); // BOT EASY
int PlayerVsPlayer(Diem& a, int, char data[30]); // P VS P
void Help(); // Help
void About(); // About 
void LoadLoad(); // Load Game
