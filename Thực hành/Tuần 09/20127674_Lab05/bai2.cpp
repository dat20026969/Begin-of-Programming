#include <iostream>  
#include <math.h>  
using namespace std;  
  
struct PhanSo {  
    int nu, de;  
};  
  
PhanSo sumFraction(PhanSo a, PhanSo b) {  
    PhanSo res;  
    res.nu = a.nu * b.de + b.nu * a.de;  
    res.de = a.de * b.de;  
    return res;  
}  
  
int GCD(int a, int b) {  
    if (b == 0) return a;  
    return GCD(b, a % b);   
}  
  
PhanSo reduce(PhanSo f){    
        if(f.nu == 0){    
            f.de = 1;    
            return f;     
        }    
        int x = GCD(abs(f.nu), abs(f.de));    
        f.nu = f.nu / x;    
        f.de = f.de / x;  
        return f;  
}    
  
int main () {  
    PhanSo a, b;  
    cin >> a.nu >> a.de;  
    cin >> b.nu >> b.de;  
  
    PhanSo res = sumFraction(a, b);  
    res = reduce(res);   
    cout << res.nu << ' ' << res.de;  
    return 0;  
}  
