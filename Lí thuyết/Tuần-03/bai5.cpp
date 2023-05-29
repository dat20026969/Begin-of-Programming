#include <bits/stdc++.h>
using namespace std;
int i, n;
float S;
int main()
{
	do
	{
		cout<<"Nhap n: "<<endl;
		cin>>n;
		if(n<1)
		{
			cout<<"khong thoa man yeu cau bai toan"<<endl;
		}
	}while (n<1);
	S = sqrt((float)2);
	for(i = 2; i<=n; i++)
	{
		S = sqrt(2+S);
		
	}
	cout<<"Tong la "<<S<<endl;
	return 0;
}
