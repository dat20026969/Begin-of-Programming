// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:3, 4.
// Output:12.00.
// Test case 2
// Input:4.5, 6.25.
// Output:28.12.
// Test case 3
// Input:1, 2.
// Output:2.00.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, parameter;
	cout<<"nhap do dai hai canh hinh chu nhat"<<endl;
	cin>>a>>b;
	parameter=a*b;
	cout<<"Dien tich cua hinh chu nhat do la: "<<fixed<<setprecision(2)<<parameter;
	return 0;	
}
