#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int i, n;
    double S;
    S = 0;
    i = 1;
    do{
        cin>>n;
        if(n < 1)
        {
            return 0;
        }
    }
    while(n < 1);
    while(i <= n){
        S = S + (double)(i+1) / i;
        i++;
    }
    cout<<S<<endl;
    return 0;
}