#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int UCLN(int a, int b){    
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a; 
}
int main(){
    int m, n;
    cin>>m>>n;
    cout<<UCLN(m, n)<<endl;
    return 0;
}