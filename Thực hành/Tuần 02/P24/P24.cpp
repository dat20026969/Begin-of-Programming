#include <bits/stdc++.h>
using namespace std;
int main()

{
	float percent = 40, quota = 100000, hangmaximum;
	cout<<"Nhap ti le phan tram hoan tien cho moi giao dich"<<percent;
	cout<<"So tien hoan tra toi da"<<quota;
	cin>>percent>>quota;
	hangmaximum= (float) 100000/40*100;
	cout<<"So tien toi da phai mua de duoc hoan tien toi da la:"<<fixed<< setprecision(2)<<hangmaximum;
	return 0;
}


