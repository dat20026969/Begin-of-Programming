#include<iostream>
using namespace std;
unsigned long long num;
int main()
{
	cout<<"Nhap so tien:"<<num<<endl;
	cin >>num;
	cout << num << "=";
	num /= 1000;
	cout << num / 500 << "x500,000 +";
	cout << (num % 500) / 200 << "x200,000 +";
	cout << ((num % 500) % 200) / 100 << "x100,000 +";
	cout << (((num % 500) % 200) % 100) / 50 << "x50,000 +";
	cout << ((((num % 500) % 200) % 100) % 50) / 20 << "x20,000 +";
	cout << (((((num % 500) % 200) % 100) % 50) % 20) / 10 << "x10,000";
	return 0;
}
