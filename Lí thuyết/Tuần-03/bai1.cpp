#include <bits/stdc++.h>
using namespace std;
int i, n;
long S;
int main()
{
	S=0;
	i=1;
	cout<<"Nhap n:"<<endl;
	cin>>n;
	while(i<=n)
	{
		S=S+i;
		i++;
		}
	cout<<"Tong cua day so do la:"<<S<<endl;
	return 0;
}

