#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int tinhChiaHet(int n, int a, int b){
    if((n%a==0)&&(n&b!=0)){
        return 1;
    }
    return 0;
}
int main(){
    int m, x, y, sum=0;
    cin>>x>>y>>m;
    if(x<m && y<m){
        for(int i=1;i<m;i++){
            if(tinhChiaHet(m, x, y)==1){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
    
