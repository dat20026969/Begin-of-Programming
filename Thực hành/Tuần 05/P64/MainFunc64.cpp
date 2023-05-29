#include <iostream>
#include <iomanip>
#include <cmath>
#include "P64.h"
using namespace std;
double tongS(double x, int n)
{
	double a, S = 0, k = 1;
	for (int i = 1; i <= n; ++i)
	{
		a = (double)((-1) * x * x);
		k *= a;
		S += k;
	}
	return S;
}