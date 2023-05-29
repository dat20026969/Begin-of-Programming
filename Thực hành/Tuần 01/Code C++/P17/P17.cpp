#include<iostream>
using namespace std;
int tien[9]={500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
int money, totien;
int main()
{
	cout<<"Nhap vao so tien: "<<money;
	cin>>money;
	for(int i=0; i<9;i++)
	{
		totien = money/tien[i];
		if(totien!=0)
		{
			cout<<totien<<" totien "<<tien[i]<<" , "<<endl;
		}
	money = money%tien[i];
	}
return 0;
}

