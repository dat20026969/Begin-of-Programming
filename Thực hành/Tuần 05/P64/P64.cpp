#include <iostream>
#include <iomanip>
#include <cmath>
#include "P64.h"
using namespace std;
int main()
{	
	int n;
	double x, S;
	cout << "nhap so x:" << endl;
	cin >> x;
	cout << "nhap so n:" << endl;
	cin >> n;
	S = tongS(x, n);
	cout << "ket qua Tong la:" << fixed << setprecision(2) << S << endl;
	return 0;



}