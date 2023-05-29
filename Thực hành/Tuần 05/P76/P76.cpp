#include <iostream>
#include <iomanip>
#include <cmath>
#include "P76.h"
using namespace std;
int main()
{
	int nDay, nMonth, nYear;
	cout << "Day: ";
	cin >> nDay;

	cout << "Month: ";
	cin >> nMonth;

	cout << "Year: ";
	cin >> nYear;

	if (laNgayHopLe(nDay, nMonth, nYear))
	{
		int tmpDay = nDay;
		int tmpMonth = nMonth;
		int tmpYear = nYear;
		timkNgayHomSau(tmpDay, tmpMonth, tmpYear);
		cout << "Tomorrow: " << tmpDay << " / " << tmpMonth << " / " << tmpYear << endl;
	}
	else { cout << "Ngay khong hop le." << endl; }
	

	return 0;
}





