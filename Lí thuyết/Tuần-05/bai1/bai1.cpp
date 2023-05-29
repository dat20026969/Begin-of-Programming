#include <iostream>
#include "func.h"
using namespace std;


int main()
{
	int m;
	cout << " nhap n " << endl;
	cin >> m;
	bai1(m);
	cout << endl;
	bai2(m);
	cout << endl;
	bai3(m);
	cout << endl;
	bai4(m);
	cout << endl;
	double n, k;
	cout << "nhap n, k" << endl;
	cin >> n >> k;
	cout << tohop(n, k)<<endl;
	return 0;
}

