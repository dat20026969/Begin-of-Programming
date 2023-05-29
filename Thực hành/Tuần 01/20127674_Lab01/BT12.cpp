#include <iostream>
#include <iomanip>
#include <cmath>
#define k 6.67*pow(10, -11)

using namespace std;

int main(){
	double weight1, weight2, length, force;
	cin >> weight1 >> weight2 >> length;
	force = k*((weight1*weight2)/(length*length));
	cout << force;
	return 0;
}
