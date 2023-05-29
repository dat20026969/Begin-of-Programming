#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int taxi;
    float total;
    cin>>taxi;
    if(taxi==1){
        total=1*15;
        cout<<total<<endl;
    }
    else if(taxi>1 && taxi <=5){
        total=1*15+(taxi-1)*13.50;
        cout<<total<<endl;
    }
    else if(taxi>5){
        total=1*15+4*13.50+(taxi-5)*11;
        cout<<total<<endl;
    }
    return 0;
}