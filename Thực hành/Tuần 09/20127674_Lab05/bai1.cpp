#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
typedef struct{
    int h;
    int m;
    int s;
}TIME, *TIMES;
 
void importTime(TIMES time);
void dispTime(TIME time);
TIME calcTime(TIME time1, TIME time2);
 
int main(){
    TIME time1,time2,time;
    
    importTime(&time1);
    cout<<"Thoi gian moc dau tien: "<<endl;
    dispTime(time1);    
    importTime(&time2);
    cout<<"Thoi gian moc thu hai: "<<endl;
    dispTime(time2);
    
    cout<<"Hieu hai thoi gian la: ";
    time = calcTime(time1, time2);
    dispTime(time);
    return 0;
}

void dispTime(TIME time){
    cout<<time.h<<":"<<time.m<<":"<<time.s;
} 

void importTime(TIMES time){
    int h,m,s;
    cout<<"Nhap thoi gian: "<<endl;
    do{
        cout<<"Nhap so gio: "<<endl;
        cin>>h;
    } while (h < 0 || h > 23);    
    do{
        cout<<"Nhap so phut: "<<endl;
        cin>>m;
    } while (m < 0 || m > 59);
    
    do{
        cout<<"Nhap so giay: "<<endl;
        cin>>s;
    } while (s < 0 || s > 59);
 
    
    time->h = h;
    time->m = m;
    time->s = s; 
}
 
TIME calcTime(TIME time1, TIME time2){
    int s1 = 0, s2 = 0;
    int s;
    TIME time;
    s1 = 60*60*time1.h + 60*time1.m + time1.s;
    s2 = 60*60*time2.h + 60*time2.m + time2.s;
    s = s1 - s2;
    if(s < 0){
        s = (-1)*s;
    }
    time.m = s/60;
    time.s = s%60;
    time.h = time.m/60;
    time.m = time.m%60;
 
    return time;
}