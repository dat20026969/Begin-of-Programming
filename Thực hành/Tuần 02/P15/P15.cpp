#include <bits/stdc++.h>
#define PI 3.14
#define e 2.71
using namespace std;
int main()
{	
	float x;
	double y1, y2;
	cout<<"Nhap x"<<x<<endl;
	cin>>x;
	y1=4*(x*x+10*x*sqrt(x)+3*x+1);
	if (x<0)
		cout<<"Khong co ket qua"<<endl;
		else
		{
			cout<<"gia tri cua bieu thuc 1 la: "<<y1<<endl;
		}
	y2=(sin(PI*x*x)+ sqrt(x*x+1))/(pow(e, 2*x)+cos(PI/4 * x));	
	cout<<"gia tri cua bieu thuc 2 la: "<<fixed<<setprecision(10)<<y2<<endl;
	return 0;
}
