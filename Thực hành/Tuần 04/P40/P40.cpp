// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:5, 5
// Output: 56.13
// Test case 2
// Input:6, 6
// Output:216.20
// Test case 3
// Input:7, 7
// Output: 907.68
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	int n;
	float x;
	float s=0;
	do
	{
		cout<<"nhap so x vao day: "<<x<<endl;
		cin>>x;
		if(x==0)
		{
			cout<<"khong phu hop yeu cau bai toan";
		}	
	}while(x==0);

	do
	{
		cout<<"nhap so n vao day"<<endl;
		cin>>n;
		if(n < 1)
		{
			cout<<"n<1, khong phu hop yeu cau bai toan"<<endl;
		}
		}while(n < 1);
		for(i=1;i<=n;i++)
		{
			s = sqrt(s + pow(x,i));
		}
	cout<<"ket qua bai toan la:"<<setprecision(2)<<fixed<<s<<endl;
	return 0;
}
