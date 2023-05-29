#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int h;
    cin>>h;
    for(int i=1;i<=h;i++){
      for(int j=1;j<=h-i;j++){
        cout<<" ";
      }
      for(int j=h-i+1;j<=h+i-1;j++){
        cout<<"*";
      }
	cout<<endl;
  }
  return 0;
}
