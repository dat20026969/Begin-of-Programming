#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if((a+b<=c)||(b+c<=a)||(c+a<=b)){
        return 0;
    }
    else{
        if((a==b)&&(b==c)&&(c==a)){
            cout<<"tam giac deu"<<endl;
        }
        else if(((a==b)&&(a!=c))&&((b==c)&&(b!=a))&&((a==c)&&(a!=b))){
            cout<<"tam giac can"<<endl;
        }
        else if((float)(a*a+b*b=c*c)||(b*b+c*c=a*a)||(c*c+a*a=b*b)){
            cout<<"tam giac vuong"<<endl;
        }
        else{
            cout<<"tam giac thuong"<<endl;
        }
    }
    return 0;
}
