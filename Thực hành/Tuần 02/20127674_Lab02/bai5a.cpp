#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int namNhuan;
    bool leapYear=true;
    cin>>namNhuan;
    if((namNhuan%4==0 && namNhuan%100!=0) || (namNhuan%400==0)){
        cout<<"YES";
        return true;        
    }
    return false;
  }





