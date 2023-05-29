#include <iostream>
#include <math.h>
#include "P48.h"
using namespace std;
double tichcacchusole(int n)
{
    long tich = 1;
    while (n > 0)
    {
        int t = n % 10;

        if (t % 2 != 0)
            tich = tich * t;

        n = n / 10;
    }
    return tich;
}