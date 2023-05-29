// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:10, 10, 10, 10, 1
// Output:Ban hoc lai mon - FAILED
// Test case 2
// Input:10, 10, 10, 10, 0
// Output:Diem trung binh mon hoc cua ban la 10.0
// Test case 3
// Input:7, 8, 9, 0
// Output:Diem trung binh mon hoc cua ban la 8.1
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,s=0;
	int d;
	cout<<"nhap diem bai tap"<<a<<endl;
	cout<<"nhap diem thuc hanh"<<b<<endl;
	cout<<"nhap diem ly thuyet"<<c<<endl;
    cin>>a>>b>>c>>d;
    if (d==1) cout<<"Ban hoc lai mon - FAILED";
    else
    {
    s=double (a*3+b*3+c*4)/10;
    if (s<5.0)
    	{
    		cout<<"Ban hoc lai mon - FAILED"<<endl;
		}
		else
    cout<<"Diem trung binh mon hoc cua ban la"<<fixed<<setprecision(1)<<s<<endl;
    }
    return 0;
}
