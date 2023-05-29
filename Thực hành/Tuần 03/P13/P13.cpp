// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:2016
// Output:do la nam nhuan
// Test case 2
// Input:2020
// Output:do la nam nhuan
// Test case 3
// Input:2345
// Output:khong phai la nam nhuan
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int year;
	cout<<"nhap nam"<<year<<endl;
	cin>>year;
	if (year %4 == 0 )
	{  
		cout<<"do la nam nhuan"<<endl;
	}
	else
	cout<<"ko phai la nam nhuan"<<endl;
	return 0;
}
