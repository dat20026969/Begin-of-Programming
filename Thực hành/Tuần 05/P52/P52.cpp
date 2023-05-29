#include <iostream>
#include <iomanip>
#include <cmath>
#include "P52.h"
using namespace std;
int main()
{
    int n;
    cout << "Moi ban nhap n: ";
    cin >> n;
    int nhonhat = chusonhonhatcuaso(n);
    cout << "chu so nho nhat cua so nguyen la: " << nhonhat << endl;
    return 0;
}