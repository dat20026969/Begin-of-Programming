#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n==0){
        cout<<"khong phai la so chinh phuong"<<endl;
    }
    if(n==1){
        cout<<"do la so chinh phuong"<<endl;
    }
    if(n>1){
        if(n==pow(sqrt(n), 2)){
            cout<<"do la so chinh phuong"<<endl;
        }
        else{
            cout<<"khong phai la so chinh phuong"<<endl;
        }
    }
    return 0;
}
    
