#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){	
	
	int a,b; 
	long tich;
	int donVi, chuc, tram;
	cout<<"moi ban nhap hai so a va b:"<<endl;
	cin>>a>>b;
	
	donVi=b%10;
	chuc=b%100/10;
	tram=b/100;
	tich=a*b;
	
	cout<<"    "<<a<<endl;
	cout<<"  x "<<b<<endl;
	cout<<"--------"<<endl;
	cout<<"    "<<a*donVi<<endl;
	cout<<"   "<<a*chuc<<endl;
	cout<<"  "<<a*tram<<endl;
	cout<<"--------"<<endl;
	cout<<"  "<<tich<<endl;
	return 0;

}

