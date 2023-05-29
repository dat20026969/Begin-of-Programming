#include <bits/stdc++.h>
using namespace std;
unsigned long long int n;
int main()
{
    cout<<"Nhap so cua ban "<<n<<endl;
    cin>>n;    
    int dem=0;
    while(n>=10)
	{
        n/=10; 
        dem++;
    }
    cout<<"So chu so la: "<<dem+1<<endl;
    return 0;
    }
