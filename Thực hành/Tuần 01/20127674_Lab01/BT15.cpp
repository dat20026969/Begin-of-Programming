#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int soChai, price, fund, person, tienThua, t10, t5, t2, t1;
	cout<<"Ban muon mua bao nhieu chai?"<<endl;
	cin>>soChai;
	cout<<"Gia tien moi chai:"<<endl;
	cin>>price;
	cout<<"Moi ban moc tien ra tra!"<<endl;
	cin>>person;
	fund=soChai*price;
	tienThua=person-fund;
	t10=tienThua/10;
	tienThua-=10*t10;
	t5=tienThua/5;
	tienThua-=5*t5;
	t2=tienThua/2;
	tienThua-=2*t2;
	t1=tienThua/1;
	tienThua-=t1;
	if(tienThua<0){
		cout<<"Con no, out ra mua lai!"<<endl;
	}	
	else{
		
 		cout<<"Cac menh gia sau khi nhan tien thua la: "<<endl;
 		cout<<"Loai 10 la: "<<t10<<endl;
 		cout<<"Loai 5 la: "<<t5<<endl;
 		cout<<"Loai 2 la: "<<t2<<endl;
 		cout<<"Loai 1 la: "<<t1<<endl;
	}
	return 0;
}

