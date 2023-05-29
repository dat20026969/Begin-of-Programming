#pragma once
#include "_Diem.h"
#include "_General.h"
const  long Defend_Score1[7] = { 0, 8, 512, 32768, 2097152, 134217728 };
const  long Attack_Score1[7] = { 0, 64, 4096, 262144, 16777216, 1073741824 };
// 2 mảng điểm tấn công phòng thủ cho máy khó 
const  long Defend_Score2[7] = { 1, 2, 3, 1, 1, 1 };
const  long Attack_Score2[7] = { 2, 3, 4, 5, 6, 7 };
// 2 mảng điểm tấn công phòng thủ cho máy dễ
class _Board
{
private:
	int _size;
	// Kích thước bàn cờ (size x size)
	int _left;
	int _top;
	// Tọa độ phía bên trái và trên bàn cờ.
	_Point** _pArr;
	// Mảng 2 chiều để chuyển đổi tọa độ (x,y) thành các ô trong mảng 2 chiều .
public:
	int getKichThuoc();
	// Lấy giá trị _size
	int getLeft();
	// Lấy giá trị _left
	int getTop();
	// Lấy giá trị _top
	int getXAt(int, int);
	int getYAt(int, int);
	// Lấy tọa độ x,y tại vị trí i,j trên bàn cờ mảng 2 chiều _pArr
	int get_Check(int i, int j) { return _pArr[i][j].getCheck(); }
	// Lấy giá trị _check trên mảng 2 chiều . nhận biết X O và ô trống.
	void loadDuLieu(int, int, int);
	// Load dữ liệu 
	void resetDuLieu();
	// Reset bàn cờ cho tất cả các ô trống _check = 0.
	void veBanCo();
	// Vẽ bàn cờ
	int boolXO(int, int, bool);
	// Kiểm tra X hay O
	int testBanCo(int x, int y);
	// Kiểm tra thắng thua trên bàn cờ
	_Point findPlacesHard(); // Tìm nước đi cho máy khó 
	_Point findPlacesEasy(); // Tìm nước đi cho máy dễ
	long pointAttack_column(long, long, const long Defend_Score[], const long Attack_Score[]);
	long pointAttack_row(long, long, const long Defend_Score[], const long Attack_Score[]);
	long pointAttack_diagonal1(long, long, const long Defend_Score[], const long Attack_Score[]);
	long pointAttack_diagonal2(long, long, const long Defend_Score[], const long Attack_Score[]);
	long pointDefense_column(long, long, const long Defend_Score[], const long Attack_Score[]);
	long pointDefense_row(long, long, const long Defend_Score[], const long Attack_Score[]);
	long pointDefense_diagonal1(long, long, const long Defend_Score[], const long Attack_Score[]);
	long pointDefense_diagonal2(long, long, const long Defend_Score[], const long Attack_Score[]);
	// Duyệt Các Ô Trống tính điểm cho từng ô theo dọc , ngang , chéo ngược , chéo xuôi.
public:
	int kiemTraHang(int x, int y, int value); // value (-1 hoac 1 ) hay X hoac O
	// Kiểm tra thắng theo dòng
	int kiemTraCot(int x, int y, int value);
	// Kiểm tra thắng theo cột
	int kiemTraDuongCheo1(int x, int y, int value);
	// Kiểm tra thắng theo đường chéo thứ 1
	int kiemTraDuongCheo2(int x, int y, int value);
	// Kiểm tra thắng theo đường chéo thứ 2
	int demX; // Đếm nước cờ X
	int demY; // Đếm nước cờ O
public:
	_Board();
	_Board(int pSize, int pX, int pY);
	~_Board();
};

