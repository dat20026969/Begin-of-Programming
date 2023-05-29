#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int ga, cho;
    for(ga=0;ga<=36;ga++){
        for(cho=0;cho<=36;cho++){
            if((2*ga+4*cho==100)&&(ga+cho==36)){
                cout<<ga<<" ga"<<" "<<cho<<" cho"<<endl;
            }
        }
    }
    return 0;
}