#include <bits/stdc++.h>
using namespace std;
int i, n;
float x, T, S;
int main()
{
	i=1;
	T=1;
	S=0;
	cout<<"nhap x"<<endl;
	cin>>x;
	cout<<"nhap n"<<endl;
	cin>>n;
	while (i<=n)
	{
		T=T*x;
		S=S+T;
		i++;
	}
	cout<<"Tong do la "<<S<<endl;
	return 0;
}
