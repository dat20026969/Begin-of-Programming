#include "array.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void input(int a[], int& n)
{
	cout << "nhap n" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "nhap a[" << i << "]:";
		cin >> a[i];
	}
}
void output(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
double evenAverage(int a[], int n)
{
	double tongSo = 0;
	double dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			tongSo = tongSo + a[i];
			dem = dem + 1;
		}
	}
	if (dem == 0) {
		return 0;
	}
	else {
		return tongSo / dem;
	}
}
int soNguyenTo(int n)
{
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
bool daySoTangDan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) return 0;
	}
	return 1;
}
bool daySoGiamDan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		if (a[i] < a[i + 1]) return 0;
	}
	return 1;
}
int timSoLonNhi(int a[], int n) {
	int lonNhat, lonNhi;
	if (a[0] > a[1]) {
		lonNhat = a[0];
		lonNhi = a[1];
	}
	else {
		lonNhat = a[1];
		lonNhi = a[0];
	}
	for (int i = 2; i < n; i++) {
		if (a[i] >= lonNhat) {
			lonNhi = lonNhat;
			lonNhat = a[i];
		}
		else if (a[i] > lonNhi) {
			lonNhi = a[i];
		}
	}
	return lonNhi;
}
bool soNguyenTo1(int a) {
	if (a < 2) return 0;
	for (int i = 2; i <= sqrt(a); ++i) {
		if (a % i == 0) return 0;
	}
	return 1;
}
int demSoNguyenTo(int a[], int n) {
	int p = 0;
	for (int i = 0; i < n; i++)
	{
		if (soNguyenTo1(a[i])) {
			p++;
		}
	}
	return p;
}
int demSo(int a[], int n)
{
	int kQua = 0; 
	for (int i = 0; i < n; i++)
	{
		bool kiemTra = 0;  
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
			{
				kiemTra = 1; 
				break;
			}
		if (!kiemTra)
			kQua++; 
	}
	return kQua;
}
void input1(int a1[], int b1[], int& n1, int &m1)
{
	cout << "nhap n1" << endl;
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cout << "nhap a1[" << i << "]:";
		cin >> a1[i];
	}
	cout << "nhap m1" << endl;
	cin >> m1;
	for (int j = 0; j < m1; j++) {
		cout << "nhap b1[" << j << "]:";
		cin >> b1[j];
	}
}
void output1(int a1[],int b1[],int n1, int m1)
{
	for (int i = 0; i < n1; i++) {
		cout << a1[i] << " ";
	}
	for (int j = 0; j < m1; j++) {
		cout << b1[j] << " ";
	}
}
void sumZero(int a1[], int b1[], int n1, int m1)
{	
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			if ((a1[i] + b1[j]) == 0) {
				cout << i << " " << j << endl;
			}
		}
	}
}
void giaoHaiMang(int a1[], int b1[], int n1, int m1)
{
	for (int i = 0; i < n1; i++) {
		for (int j = 0; i < m1; j++) {
			if (a1[i] = b1[j]) cout << a1[i]<<" ";
		}
	}
}
void tichLonNhat(int a[],  int n)
{
	int b[1000];
	int ansWer = 0;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < b[j]) swap(a[i], b[j]);
		}
	}
	ansWer = max(a[1] * a[2], a[n] * a[n - 1]);
}
bool kiemTraSoLe(int a[], int n)
{
	bool kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			kt = 1;
			break;
		}
	}
	return kt;
}
bool kiemTraSoChan(int a[], int n)
{
	bool kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			kt = 1;
			break;
		}
	}
	return kt;
}
int soChanLonNhat(int a[], int n)
{
	int max;
	int i = 0;
	while (a[i] % 2 != 0)
		i++;
	max = a[i];
	for (int j = i + 1; j < n; j++)
		if (a[j] % 2 == 0)
			if (max < a[j])
				max = a[j];
	return max;
}
int soLeNhoNhat(int a[], int n)
{
	int min;
	int i = 0;
	while (a[i] % 2 == 0)
		i++;
	min = a[i];
	for (int j = i + 1; j < n; j++)
		if (a[j] % 2 != 0)
			if (min > a[j])
				min = a[j];
	return min;
}