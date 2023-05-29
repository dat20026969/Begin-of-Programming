#include <iostream>
#include <iomanip>
#include <cmath>
#include "P72.h"
using namespace std;
int main()
{
    bool x;
    int k;
    cout << "nhap so k:" << endl;
    cin >> k;
    x = kt3k(k);
    if (x == 1) cout << "YES, do la so dang 3^k" << endl;
    else cout << "NO" << endl;
    return 0;



}

   
    






