#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include "Header.h"
using namespace std;
int main() {
	int a, b[1000];
	nhapMang(b, a);
	xuatMang(b, a);
	cout << tongMang(b, a) << endl;
	cout << minMang(b, a) << endl;
	cout << tangDan(b, a) << endl;
	xoaPhanTu(b, a, 4);
	return 0;
}