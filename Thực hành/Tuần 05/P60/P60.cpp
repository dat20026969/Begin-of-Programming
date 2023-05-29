#include <iostream>
#include <iomanip>
#include <cmath>
#include "P60.h"
using namespace std;   
int main()
{
    int a, b;
    cout << "nhap so a, a = ";
    cin >> a;
    cout << "nhap so b, b = ";
    cin >> b;
    int GCD = UCLN(a, b);    
    cout << "GCD(a, b)= "<<GCD<<endl;    
    return 0;
}