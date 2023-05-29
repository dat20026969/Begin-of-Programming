#include <iostream>
#include <cmath>
#include <iomanip>
#include "P44.h"
using namespace std;
int main()
{
	int n;
	int tong = 0;
	cout << "nhap so n" << endl;
	cin >> n;
	tong = computeSum(n);
	cout << "tong la" << tong << endl;
	system("pause");
	return 0;
}
