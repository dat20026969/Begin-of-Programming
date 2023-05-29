#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int hour, minute, second;
    cin>>hour>>minute>>second;
    if((hour>=0 && hour<=23)&&(minute>=0 && minute <=59)&&(second>=0 && second<=60)){
        cout<<"Hop le"<<endl;
    }
    else{
        cout<<"khong hop le"<<endl;
    }
    return 0;
}