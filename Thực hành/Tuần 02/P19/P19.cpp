#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Nhap so a"<<a<<endl;
	cout<<"Nhap so b"<<b<<endl;
	cout<<"Nhap so c"<<c<<endl;
	cin>>a>>b>>c;
	int d=a;
	a=b;
	b=c;
	c=d;
	cout<<"Thu tu 2 so sau khi hoan doi la: "<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}

