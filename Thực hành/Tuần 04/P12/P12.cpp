// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:2, 3
// Output:14.00
// Test case 2
// Input:6, 8
// Output:2015538.00
// Test case 3
// Input:7, 2
// Output: 56.00
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double x;
	double Sum=0;
	double accumulate=1;
	cout<<"nhap so thuc x:"<<x<<endl;
	cin>>x;
	cout<<"nhap so tu nhien n"<<n<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"khong thoa man yeu cau bai toan"<<endl;
	}else
	for (int i = 1; i<=n; i++) 
	{
		accumulate *= x;
		Sum += accumulate;
}
	cout<<"ket qua la: "<<setprecision(2)<<fixed<<Sum<<endl;
	return 0;
}
