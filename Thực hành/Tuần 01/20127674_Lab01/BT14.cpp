#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int t,t10,t5,t2,t1;
	
 	cin>>t;
    t10=t/10;
	t-=10*t10;
	t5=t/5;
	t-=5*t5;
	t2=t/2;
	t-=2*t2;
	t1=t/1;
	t-=t1;
 	cout<<"Cac menh gia la: "<<endl;
 	cout<<"Loai 10 la: "<<t10<<endl;
 	cout<<"Loai 5 la: "<<t5<<endl;
 	cout<<"Loai 2 la: "<<t2<<endl;
 	cout<<"Loai 1 la: "<<t1<<endl;
 return 0;
}
