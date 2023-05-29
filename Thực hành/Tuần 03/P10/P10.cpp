#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, c, d, e1, e2, x1, x2, x3, x4;	
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a != 0)
	{
		d = b*b - 4*a*c;
		if (d == 0)
		{
			e1 = e2 = -b / (2 * a);			
			if (e1 > 0)
			{
				x1 = sqrt(e1);
				x2 = -x1;
				cout << "Phuong trinh co 2 nghiem la:" << endl;
				cout << "x1 = " <<fixed<<setprecision(2)<< x1 << endl;
				cout << "x2 = " <<fixed<<setprecision(2)<< x2 << endl;
			}
			else
			{
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}
		else if (d < 0)
		{
			cout << "Phuong trinh vo nghiem" << endl;
		}
		else
		{
			e1 = (-b + sqrt(d)) / (2 * a);
			e2 = (-b - sqrt(d)) / (2 * a);
			cout << "Phuong trinh co nghiem la: " <<fixed<<setprecision(2)<<e1<<e2<<endl;
			if (e1 > 0)
			{
				x1 = sqrt(e1);
				x2 = -x1;
				cout << "x = " <<fixed<<setprecision(2)<< x1 << endl;
				cout << "x = " <<fixed<<setprecision(2)<< x2 << endl;
			}
			if (e2 > 0)
			{
				x3 = sqrt(e2);
				x4 = -x3;
				cout << "x = " <<fixed<<setprecision(2)<< x3 << endl;
				cout << "x = " <<fixed<<setprecision(2)<< x4 << endl;
			}
			if (e1 < 0 && e2 < 0)
			{
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}
	}
	else
	{
		cout << "khong thoa man yeu cau bai toan" << endl;
	}
	return 0;
}
