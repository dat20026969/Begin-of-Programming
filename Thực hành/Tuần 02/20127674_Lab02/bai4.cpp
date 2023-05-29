#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int thang, nam;
    bool namnhuan=true;
    cin>>thang>>nam;
    if((nam%4==4)&&(nam%100!=0)){
        namnhuan=true;
    }
    if(nam%400==0){
        namnhuan=true;
    }
    switch(thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout<<"Thang co 31 ngay"<<endl;
        case 4: case 6: case 9: case 11:
            cout<<"Thang co 30 ngay"<<endl;
        case 2:
            if(namnhuan){
                cout<<"Thang co 29 ngay"<<endl;
            }
            else{
                cout<<"Thang co 28 ngay"<<endl;
            }
    }
    return 0;
}