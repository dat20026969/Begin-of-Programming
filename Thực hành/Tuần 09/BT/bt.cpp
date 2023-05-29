#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include "bt.h"
using namespace std;
int main() {
	Date n;
	inputDate(n);
	outputDate(n);
	outputDateWithFormat1(n);
	outputDateWithFormat2(n);
	outputDateWithFormat3(n);
	outputDateWithFormat4(n);
	tomorrow(n);
	yesterday(n);
	return 0;
}