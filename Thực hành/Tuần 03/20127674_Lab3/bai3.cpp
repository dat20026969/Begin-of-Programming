#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int i, n;
    long S, P;
    S = 0;
    P = 1;
    i = 1;
    do{
        cin>>n;
        if(n < 1){
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }
    while(n < 1);
    while(i <= n){
        P = P * i;
        S = S + P;
        i++;
    }
    cout<<S<<endl;


    return 0;
}