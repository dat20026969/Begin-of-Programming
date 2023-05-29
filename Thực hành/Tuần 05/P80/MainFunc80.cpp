#include <iostream>
#include <iomanip>
#include <cmath>
#include "P80.h"
using namespace std;
bool songtogannhat(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}