#include <iostream>
#include <iomanip>
#include <cmath>
#include "P56.h"
using namespace std;
bool sotoanchanvadeptrai(int n)
{
    while (n > 0)
    {
        int t = n % 10;
        if (t % 2 != 0)
            return 0;
        n = n / 10;
    }
    return 1;
}