// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:0,25
// Output:0,5
// Test case 2
// Input:0,74
// Output:0,5
// Test case 3
// Input:0,98
// Output:1,0
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a, b;
	cout<<"nhap so can lam tron"<<endl;
	cin>>a;
	b = double(int(a*2+0.5))/2;
	cout<<"so sau khi lam tron la: "<<fixed<<setprecision(1)<<b<<endl;
	return 0;
}	
	
