#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int dien, total;
    cin>>dien;
    if(dien<=100){
        total=dien*1000;
        cout<<total<<endl;
    }
    else if(dien>100 && dien<=150){
        total=100*1000+(dien-100)*1200;
        cout<<total<<endl;
    }
    else if(dien>150 && dien<=200){
        total=100*1000+50*1200+(dien-150)*2000;
        cout<<total<<endl;
    }
    else if(dien>200){
        total=100*1000+50*1200+50*1500+(dien-200)*2500;
        cout<<total<<endl;
    }
    return 0;
}