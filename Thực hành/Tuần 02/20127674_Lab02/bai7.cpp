#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int min=a;
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    int max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    int middle;
    middle=a+b+c-min-max;
    cout<<max<<" "<<min<<" "<<middle;
    return 0;
}