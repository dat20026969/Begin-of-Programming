// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:6
// Output:6
// Test case 2
// Input:8
// Output:7
// Test case 3
// Input:10
// Output: 8
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    float S = 1, P = 0;
    int n, i = 1; 
    do
    {
        cout << "nhap so n : ";
        cin >> n;
        if (n < 1)
        {
            cout << "khong thoa man yeu cau bai toan";
        }
    } while (n < 1);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            P = P + i;
        }
    }
    cout << "tong cac uoc so nho hon n cua n : " <<setprecision(2)<<fixed<< P << endl;
    return 0;
}
