#include <iostream>
#include <iomanip>
#include <cmath>
#include "P52.h"
using namespace std;
int chusonhonhatcuaso(int n)
{
    int nhonhat = 9;
    while (n > 0)
    {
        int t = n % 10;

        if (t < nhonhat)
            nhonhat = t;

        n = n / 10;
    }
    return nhonhat;
}