#include <iostream>
#include <iomanip>
#include <cmath>
#include "P56.h"
using namespace std;
int main()
{
    int n;
    cout << "moi ban nhap so n: ";
    cin >> n;
    bool sofullchan = sotoanchanvadeptrai(n);
    if (sofullchan == 1)
        cout << "YES, SIR";
    else
        cout << "NO, NEVER" << endl;
    return 0;
}