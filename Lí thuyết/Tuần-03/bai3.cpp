#include <bits/stdc++.h>
using namespace std;
int i, n;
long S, P;
int main()
{
	S=0;
	P=1;
	i=1;
	do
	{
		cout<<"nhap n"<<endl;
		cin>>n;
		if(n<1)
		{
			cout<<"khong thoa man yeu cau bai toan"<<endl;
		}
	}while (n<1);
	while (i<=n)
	{
		P=P*i;
		S=S+P;
		i++;
	}
	cout<<"Tong do la "<<S<<endl;
	return 0;
}
