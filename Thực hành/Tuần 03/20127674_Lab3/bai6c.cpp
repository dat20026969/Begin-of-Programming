#include <iostream>
#include <iomanip> 
#include <algorithm>
using namespace std;
int main(){
    int a, b, LCM;
    cin>>a>>b;5 9
    int maxiab = a*b;
    for(int i = max(a, b); i <= maxiab; i++){
        if(i % a == 0 && i % b == 0){
            LCM = i;
            break;
        }
    }
    cout<<LCM<<endl;
    return 0;
}