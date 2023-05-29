#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int khoiLuong, baoGao;
	cin >> khoiLuong;
	baoGao = khoiLuong / 20;
	if(khoiLuong%20==0){
		cout<<baoGao<<endl;
	}
	else{
		cout<<baoGao+1<<endl;
	}
	return 0;
}
