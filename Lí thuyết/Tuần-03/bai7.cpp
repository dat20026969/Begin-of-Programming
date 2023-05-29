#include <bits/stdc++.h>
using namespace std;
unsigned long long int  n, t, P;
unsigned long long int TichChuSo(int N)
{
    long P = 1;
    while (N > 0)
    {
        int t = N % 10;

        P = P * t;

        N = N / 10;
    }
    return P;
}

int main()
{
    int N;
    cout << "Nhap so ban muon = ";
    cin >> N;

    long result = TichChuSo(N);
    cout << "Tich = " << result << endl;

    return 0;
}
