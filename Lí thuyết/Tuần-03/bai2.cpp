#include <bits/stdc++.h>
using namespace std;
int i, n;
float S;
int main()
{
	S=0; i=1;
	do
	{
		cout<<"nhap n"<<endl;
		cin>>n;
		if(n<1)
		{
			cout<<"KHong thoa man yeu cau bai toan"<<endl;
		}
		
	}
	while (n<1);
	while (i<=n)
	{
		S = (float) S + 1.0/i;
		i++;
	}
	
	cout<<"Tong cua day tren la"<<S<<endl;
	return 0;
}
	
