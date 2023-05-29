#include <iostream>
#include <cmath>
#include <iomanip>
#include "P48.h"
using namespace std;
int main()
{
    int n;
    cout << "Moi ban nhap so n: ";
    cin >> n;
    double tich = tichcacchusole(n);
    cout << "tich cac chu so le trong so n la: " << tich << endl;
    return 0;
}