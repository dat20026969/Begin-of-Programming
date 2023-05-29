// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:5
// Output:NO
// Test case 2
// Input:6
// Output:NO
// Test case 3
// Input:9
// Output: YES
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,a;
    cout<<"Nhap vao so nguyen duong:"<<n<<endl;
    cin>>n;
    if(n>=0)
    {
        a=sqrt(n);
        if((a*a)==n)
        cout<<"YES, do la so chinh phuong"<<endl;
         	else
		  		cout<<"NO, do khong phai la so chinh phuong";
            }else cout<<"moi ban nhap lai, vi n<0 nen khong thoa man yeu cau bai toan";
	return 0;
}
