#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int math, phys, chem;
    cin>>math>>phys>>chem;
    if((math+phys+chem>=15)&&(math>=4)&&(phys>=4)&&(chem>=4)){
        cout<<"PASS"<<endl;
    }
    if((math>=5)&&(phys>=5)&&(chem>=5)){
        cout<<"HOC DEU CAC MON"<<endl;
    }
    else if((math<5)||(phys<5)||(chem<5)){
        cout<<"KHONG HOC DEU CAC MON"<<endl;
    }
    else{
        cout<<"THI HONG"<<endl;
    }
    return 0;
}