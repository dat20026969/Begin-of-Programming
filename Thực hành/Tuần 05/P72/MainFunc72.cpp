#include <iostream>
#include <iomanip>
#include <cmath>
#include "P72.h"
using namespace std;
bool kt3k(int k)
{
	int m = 3, n = 1;
	for (int i = 1; i < 20; ++i) {
		n *= m;
		if (n == k) return 1;
	}
	return 0;

}


