#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
  int a;
  cin>>a;
  int dem=0;
  if(a<2){
    cout<<"NO";
    return 0;
  }
  else{
    for(int i=2; i<=sqrt(a);i++){
      if(a%i==0){
        dem++;
      }
    }
  }
  if(dem==0){
    cout<<"YES";
  }
  else{          
    cout<<"NO";
  }
  return 0;
}