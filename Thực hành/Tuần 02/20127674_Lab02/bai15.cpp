#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a, b, result;
    char toanTu;
    cin>>a>>b;
    cout<<"Moi ban chon toan tu"<<endl;
    cin>>toanTu;
    switch(toanTu){
        case '+':
        result = a+b;
        cout<<result<<endl;
        case '-':
        result=a-b;
        cout<<result<<endl;
        case '*':
        result=a*b;
        cout<<result<<endl;
        case '/':
        result=a/b;
        if(b==0){
            return 0;
        }
        else{
            cout<<result<<endl;
        }
        case '%':
        result=a%b;
        f(b==0){
            return 0;
        }
        else{
        cout<<result<<endl;
        }
        break;
    default:
    cout<<"error"<<endl;
    break;
    }
    return 0;
}