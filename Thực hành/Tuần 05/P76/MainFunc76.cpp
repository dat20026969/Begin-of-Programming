#include <iostream>
#include <iomanip>
#include <cmath>
#include "P76.h"
using namespace std;
bool leapyear(int nYear)
{
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)
	{
		return true;
	}
	return false;
}
int NgayTrongThang(int nMonth, int nYear)
{
	int nNumOfDays;

	switch (nMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nNumOfDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		nNumOfDays = 30;
		break;
	case 2:
		if (leapyear(nYear))
		{
			nNumOfDays = 29;
		}
		else
		{
			nNumOfDays = 28;
		}
		break;
	}

	return nNumOfDays;
}
bool NgayHopLe(int nDay, int nMonth, int nYear)
{
	bool bResult = true; 	
	if (!(nYear > 0 && nMonth))
	{
		bResult = false; 
	}	
	if (!(nMonth >= 1 && nMonth <= 12))
	{
		bResult = false; 
	}

	
	if (!(nDay >= 1 && nDay <= NgayTrongThang(nMonth, nYear)))
	{
		bResult = false; 
	}

	return bResult; 
}
void timkNgayHomSau(int& nDay, int& nMonth, int& nYear)
{
	