// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:5
// Output:1.14
// Test case 2
// Input:6
// Output:1.22
// Test case 3
// Input:7
// Output: 1.30
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i, n;
	double S;
	S = 0;
	do
	{
		cout<<"nhap n: "<<endl;
		cin>>n;
		if(n < 1)
		{
			cout<<"khong thoa man yeu cau bai toan"<<endl;
		}
	}while(n < 1);

	for(i = 1; i <= n; i++)
	{
		S = S + 1.0 / (2 * i);
	}
	cout<<"ket qua can tim la: "<<setprecision(2)<<fixed<<S<<endl;
	return 0;
}
