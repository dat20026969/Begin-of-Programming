#include <bits/stdc++.h>
#define PI 3.14
using namespace std;	
int main()
{
	float edge, radius, area;
	double Stamgiac, Shinhtron;
	cout<<"Nhap canh cua tam giac deu"<<edge;
	cout<<"Nhap ban kinh hinh tron"<<radius;
	cin>>edge>>radius;
	Stamgiac= (edge  * edge* sqrt(3))/4;
	Shinhtron= PI*radius*radius;
	area = Stamgiac*3 + (float)Shinhtron/2;
	if(edge<=radius)
		cout<<"Khong thoa man de bai"<<endl;
		else
		cout<<"Dien tich hinh nhu de bai la:"<<fixed<< setprecision(2)<<area;
return 0;
}
