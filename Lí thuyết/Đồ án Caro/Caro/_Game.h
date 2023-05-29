#pragma once
#include "_BanCo.h"
#include "_Diem.h"
#include "_General.h"
#include "_Play.h"
#include <Windows.h>
#include <fstream>
void P1();
void P2();
void P1WIN();
void P2WIN();
void Box();
void Draw();
void PDraw();
// Xử lí hiệu ứng thắng - thua - hòa .
class _Game
{
	_Board* _b;		// Khởi tạo 1 bàn cờ
	bool _turn;		// True là lượt người chơi 1 , false là người chơi 2.
	int _x, _y;		// Tọa độ
	int _lenhBanPhim;	// Nhận phím
	bool _loop;		// True chơi tiếp, False Out.
	int diemP1;  // Số trận thắng P1
	int diemP2;// Số trận thắng P2
	int cheDo; // Đọc file để nhận biết chế độ chơi
	// -31 : Chế độ P vs P đang đến lượt X
	// -30 : Chế độ P vs P đang đến lượt O
	// -4  : Chế độ P vs Bot (Dễ ) đang đến lượt X
	// -5  : Chế độ P vs Bot (Khó ) đang đến lượt X
public:
	void setCountXY() {
		_b->demX = 0;
		_b->demY = 0;
	}
	// Cài đặt biến đếm nước cờ X và Y = 0.
	int getCheDo() {
		return cheDo; 
	}
	// Nhận biết chế độ .
	int getScore1() {
		return diemP1;
	}
	int getScore2() {
		return diemP2;
	}
	// Lấy tỉ số thắng 
	void setScore1() {
		diemP1 = 0;
	}
	void setScore2() {
		diemP2 = 0; 
	}
	// Cài đặt tỉ số thắng = 0 .
	int getCommand();
	// Lấy giá trị của phím nhập vào .
	void setCommand(int x) {
		_lenhBanPhim = x;
	}
	// Cài đặt phím nhập vào
	bool isContinue();
	// Trò chơi tiếp tục
	char waitKeyBoard();
	// Chờ nhập phím
	char askContinue();
	// Chơi lại hay không ?

public:
	void startGame(); // Khởi tạo game . Bắt đầu game 
	void exitGame(); // Thoát Game
	void SaveGame(int n);  // Lưu Game đang chơi với biến n là chế độ và lượt .
	void LoadGame(char data[30]); // Khởi tạo game . Bắt đầu game ( trường hợp Load Game ) 
public:
	int processFinish(int x, int y);
	// Kiểm tra thắng thua - tiếp tục
	bool processCheckBoard();
	// Đánh dấu X và O trên bàn cờ
	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
	// Di chuyển lên - xuống - trái - phải
	void setX(int x) { _x = x; }
	void setY(int y) { _y = y; }
	// Cài đặt biến _x _y 
	int getXatEnter();
	int getYatEnter();
	// Lấy giá trị _x _y 
	bool getTurn() { 
		return _turn;
	}
	// Lấy giá trị của lượt chơi .
	void setTurn() {
		_turn = !_turn;
	}
	// Đảo lượt chơi
	void findPlacesHard();
	void findPlacesEasy();
	// Tìm kiếm nước đi cho máy
	int demNuocCoDaDi();
	// Đếm nước cờ đã đi được
public:
	_Game();
	_Game(int pSize, int pLeft, int pTop);
	~_Game();
};
