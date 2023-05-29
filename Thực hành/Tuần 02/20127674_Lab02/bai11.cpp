#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int distance;
    cin>>distance;
    if(distance<=5){
        return 0;
    }
    else if(distance>5 && distance<=10){
        cout<<700000<<endl;
    }
    else if(distance>10 && distance <=20){
        cout<<2500000<<endl;
    }
    else if(distance>20 && distance <=35){
        cout<<5500000<<endl;
    }
    else{
        cout<<7500000<<endl;
    }
    return 0;
}