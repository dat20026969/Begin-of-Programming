#include <iostream>
#include <iomanip>
#include <cmath>
#include "P60.h"
using namespace std;
int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}