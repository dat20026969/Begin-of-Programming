#include <iostream>
using namespace std;
int Fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibo(n - 1) + Fibo(n - 2);
}
int main()
{
    int a;
    cout << "nhap n: ";
    cin >> a;
    cout << "So Fibonacci thu " << a << " la: " << Fibo(a);
    return 0;
}
 