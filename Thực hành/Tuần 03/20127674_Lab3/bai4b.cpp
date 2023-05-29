#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n;
    do{
        cin >> n;
        if(n <= 0){
            return 0;
        }
    }while(n <= 0);
    int sum=0;
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
 