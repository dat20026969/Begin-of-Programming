#include<bits/stdc++.h>
using namespace std;
int main()
{
	int plate;
    cout<<"Nhap vao day bien so xe cua ban "<<plate<<endl;
    cin>>plate;    
    int dem=0;
    while(plate>=10)
	{
        plate/=10; 
        dem++;
    }
    cout<<"So nut la: "<<dem+1<<endl;
    return 0;
    }
