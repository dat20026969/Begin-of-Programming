// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:2
// Output:2.08
// Test case 2
// Input:6
// Output:5.70
// Test case 3
// Input:7
// Output: 6.64
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cout<<"moi ban nhap n: "<<n<<endl;
	cin >> n;
	double s = 0;
	for (int i = 0; i <= n; i++)
	{
		s = (double) (2*i+1)/(2*i+2) + s;
	}
	cout <<"ket qua cua bieu thuc la: "<<setprecision(2)<<fixed<<s;
	return 0;
}
