// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:1.2, 2.4
// Output:Phuong trinh co mot nghiem la x: -2.00
// Test case 2
// Input:1, 2
// Output:Phuong trinh co mot nghiem la x: -2.00
// Test case 3
// Input:0, 2
// Output:Phuong trinh vo nghiem
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    double a, b;
    cout << "Nhap a:";
    cin >> a;
    cout << "Nhap b:";
    cin >> b;
    if (a == 0)
	 {
        if (b == 0)
            cout << "Phuong trinh co vo so nghiem" << endl;
        else
            cout << "Phuong trinh vo nghiem" << endl;
     }
    else
        cout << "Phuong trinh co mot nghiem la x: " <<fixed<< setprecision(2)<<-b / a << endl;
    return 0;
}
