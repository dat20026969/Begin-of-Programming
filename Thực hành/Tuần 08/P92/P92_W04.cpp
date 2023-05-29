// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:5
// Output:1.00
// Test case 2
// Input:6
// Output:1.00
// Test case 3
// Input:7
// Output:1.00
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double a=1, reSult=0;
	cout<<"nhap so tu nhien n: "<<endl;
	cin>>n;
	for(int i=1; i<=n; i++){
		a=a*(1+double(i));
		reSult=reSult+(i/a);
	}
	cout<<"Tong do la: "<<fixed<<setprecision(2)<<reSult<<endl;
	return 0;
}
