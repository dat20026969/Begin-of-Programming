// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:5, 3
// Output:34.80
// Test case 2
// Input:6, 2
// Output:11.45
// Test case 3
// Input:7, 7
// Output: 36455.65
#include <bits/stdc++.h>
using namespace std;
double calSum(int n, double x)
{
    double S = 0, T1 = 1, T2 = 0;    
    for (int i = 1; i <= n; i++)
    {       
        T1 = T1 * x;
        T2 = T2 + i;
        S = S + (double)T1 / T2;
    }    
    return S;
}

int main()
{
    int n;
    double x, result;
    cout << "nhap so n: ";
    cin >> n;
    cout << "nhap so x: ";
    cin >> x;
    result = calSum(n, x);
    cout << "Ket qua cua pt la: " <<setprecision(2)<<fixed<< result << endl;    
    return 0;
}
