// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:5
// Output:11.19
// Test case 2
// Input:6
// Output:27.04
// Test case 3
// Input:7
// Output: 71.18
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double s;
	int tinhtoan = 1;
	cout<<"nhap so n:"<<endl;
	cin>>n;	
	s = sqrt((double)tinhtoan);
	for(int i = 2; i <= n; i++)
	{
		tinhtoan *= i;
		s = sqrt(tinhtoan+s);
	}
	cout<<"ket qua do la:"<<setprecision(2)<<fixed<<s;
	return 0;
}

