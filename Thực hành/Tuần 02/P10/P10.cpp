#include <bits/stdc++.h>
using namespace std;
int main()
{
	int previous, current, gdtt;
	cout<<"Nhap so kwh thang truoc"<<previous<<endl;
	cout<<"Nhap so kwh thang nay"<<current<<endl;
	cin>>previous>>current;
	if (previous>current)
		cout<<"Khong thoa man yeu cau bai toan"<<endl;
		else
		gdtt=current-previous; 
		cout<<"Luong dien gia dinh tieu thu la: "<<gdtt<<endl;
	return 0;
		
	
	
	
	
	
	
	
	
	
}
