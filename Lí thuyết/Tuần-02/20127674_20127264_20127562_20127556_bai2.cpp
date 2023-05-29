#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "Nhap 1 chu bat ky: "<<endl;
	cin >> a;
	cout << "ASCII code la:" << int(a) << endl;
	a = a - ('a' - 'A') * (a >= 'a' && a <= 'z');
	cout << "Upper case: ";
	return 1;
}