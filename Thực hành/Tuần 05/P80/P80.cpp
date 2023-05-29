#include <iostream>
#include <iomanip>
#include <cmath>
#include "P80.h"
using namespace std;
int main()
{
        int n;
        cout << "Nhap so n: " << endl;
        cin >> n;
        if (n < 2)
        {
            cout << "lam gi co so nguyen to nao?" << endl;
        }
        else
        {
            for (int i = n; i >= 2; i--)
            {
                if (songtogannhat(i) == true)
                {
                    cout << "So nguyen to gan nhat voi n la: " << i << endl;
                    break; // lệnh break tham khảo.
                }
            }
        }        
        return 0;
    }








