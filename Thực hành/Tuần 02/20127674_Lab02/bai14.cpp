#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, x, x1, x2, delta;
    cin>>a>>b>>c;
    if(a==0){
        x=-c/b;
        cout<<x<<endl;
    }
    else{
        delta=b*b-4*a*c;
        if(delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            cout<<x1<<" "<<x2<<endl;
        }
        else if(delta=0){
            x=-b/(2*a);
            cout<<x<<endl;
        }
        else{
            return 0;
        }
    }
    return 0;
}