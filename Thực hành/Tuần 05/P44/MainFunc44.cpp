#include <iostream>
#include <math.h>
#include "P44.h"
using namespace std;
int computeSum(int n) {
	int a, tong = 0;
	while (n != 0) {
		a = n % 10;
		tong = tong + a;
		n /= 10;
	}
	return tong;
}