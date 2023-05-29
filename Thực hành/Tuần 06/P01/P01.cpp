#include <iostream>
using namespace std;
int dolanamnhuan(int year1);
int ktthang(int month1, int year1);
int ktsongay(int day1, int month1, int year1);
void tomorrow(int day1, int month1, int year1, int& day2, int& month2, int& year2);
int dolanamnhuan(int year1)
{
	bool namnhuan;
	if (year1 % 400 == 0 || year1 % 4 == 0 && year1 % 100 != 0)
		namnhuan = 1;
	else namnhuan = 0;
	return namnhuan;
}
int ktthang(int month1, int year1)
{
	int nday1;
	switch (month1)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: nday1 = 31;
		break;
	case 4: case 6: case 9: case 11: nday1 = 30;
		break;
	case 2: if (dolanamnhuan(year1) == 1)
		nday1 = 29;
			else nday1 = 28;
			break;
	default: nday1 = 0;
	}
	return nday1;
}
int ktsongay(int day1, int month1, int year1)
{
	if (ktthang(month1, year1) == 0)
		return 0;
	else
	{
		if (day1 <= 0 || day1 > 31)
			return 0;
	}
	return 1;
}
void tomorrow(int day1, int month1, int year1, int& day2, int& month2, int& year2)
{
	int nday1;
	day2 = day1 +1;
	month2 = month1;
	year2 = year1;
	nday1 = ktthang(month1, year1);
	if (day2 > nday1)
	{
		if (month1 == 12)
		{
			month2 = 1 ;
			year2 = year1 + 1;
			day2 = 1;
		}
		else
		{
			month2 = month1 + 1;
			year2 = year1;
			nday1 = ktthang(month2, year2);
			day2 = 1;
		}
	}
}
int main()
{
	int day1, month1, year1, day2, month2, year2;
	cout << "Nhap ngay, thang, nam : ";
	cin >> day1 >> month1 >> year1;
	tomorrow(day1, month1, year1, day2, month2, year2);
	cout << "Ngay hom sau : " << day2 << "-" << month2 << "-" << year2 << endl;
	return 0;
}
