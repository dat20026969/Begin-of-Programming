#include <bits/stdc++.h>
using namespace std;
#define N 50
double phanso[100];
struct phanSo
{
	int tuSo;
	int mauSo;
};

void nhapPhanSo(phanSo& x)
{
	cout << "Moi nhap tu so: "; cin >> x.tuSo;
	do
	{
		cout << "Moi nhap mau so: ";
		cin >> x.mauSo;
		if (x.mauSo == 0)
			cout << "Moi ban nhap lai: ";
		else break;
	} while (1);
}
void xuatPhanSo(phanSo x)
{
	cout << x.tuSo << "/" << x.mauSo;
	cout << endl;
}
float tongPhanSo(phanSo x1, phanSo x2)
{
	int tuSo, mauSo;
	tuSo = x1.tuSo * x2.mauSo + x1.mauSo * x2.tuSo;
	mauSo = x1.mauSo * x2.mauSo;
	return (float)tuSo / mauSo;
}
float hieuPhanSo(phanSo x1, phanSo x2)
{
	int tuSo, mauSo;
	tuSo = x1.tuSo * x2.mauSo - x1.mauSo * x2.tuSo;
	mauSo = x1.mauSo * x2.mauSo;
	return (float)tuSo / mauSo;
}
float tichPhanSo(phanSo x1, phanSo x2)
{
	int tuSo, mauSo;
	tuSo = x1.tuSo * x2.tuSo;
	mauSo = x1.mauSo * x2.mauSo;
	return (float)tuSo / mauSo;
}
float thuongHaiPhanSo(phanSo x1, phanSo x2)
{
	int tuSo, mauSo;
	tuSo = x1.tuSo * x2.mauSo;
	mauSo = x1.mauSo * x2.tuSo;
	return (float)tuSo / mauSo;
}
void soSanhHaiPhanSo(phanSo x1, phanSo x2)
{
	double t = hieuPhanSo(x1, x2);
	if (t > 0) {
		cout << "x1>x2" << endl;
	}
	if (t < 0) {
		cout << "x1<x2" << endl;
	}
	if (t != 0) {
		cout << "x1 # x2" << endl;
	}
	if (t == 0) {
		cout << "x1=x2" << endl;
	}
	if (t >= 0) {
		cout << "x1>=x2" << endl;
	}
	if (t <= 0) {
		cout << "x1<=x2" << endl;
	}
}
int UCLN(phanSo x);
int UCLN(phanSo x)
{
	int i, max = x.tuSo, ucln = 0;
	if (x.tuSo < x.mauSo) { max = x.mauSo; }
	for (i = max - 1; i >= 1; i--)
	{
		if (x.tuSo % i == 0 && x.mauSo % i == 0) break;
		else continue;
	}
	return ucln;
}
void inputFraction(double phanso[], int& n);
void inputFraction(double phanso[], int& n)
{
	struct phanSo x;
	int i;
	cout << "Nhap so luong phan so: "; cin >> n;
	for (i = 0; i < n; i++)
	{
		nhapPhanSo(x);//cin x.tuSo,x.mauSo
		phanso[i] = (x.tuSo * 1.0) / (x.mauSo);
	}
}
double largestFraction(double phanso[], int n);
double largestFraction(double phanso[], int n)
{
	int i, j;
	double temp = 0;
	if (n == 1) return phanso[0];
	else {
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (phanso[j] > phanso[i]) {
					temp = phanso[j];
					phanso[j] = phanso[i];
					phanso[i] = temp;
				}
			}
		}
	}
	return phanso[0];
}
double sumAll(double phanso[], int n);
double sumAll(double phanso[], int n)
{
	int i;
	double S = 0;
	for (i = 0; i < n; i++)
	{
		S += phanso[i];
	}
	return S;
}
void fractionArrange(double phanso[], int n);
void fractionArrange(double phanso[], int n)
{
	int i, j, temp = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (phanso[j] < phanso[i])
			{
				temp = phanso[j];
				phanso[j] = phanso[i];
				phanso[i] = temp;
			}
		}
		cout << phanso[i] << " ";
	}
}
int main()
{
	struct phanSo x1;
	struct phanSo x2;
	struct phanSo x;
	int n;
	nhapPhanSo(x);
	xuatPhanSo(x);
	nhapPhanSo(x1);
	nhapPhanSo(x2);
	cout << "Tong : " <<  tongPhanSo(x1, x2) << endl;;
	cout << "Hieu : " << hieuPhanSo(x1,x2) << endl;
	cout << "Tich : " <<tichPhanSo(x1,x2) << endl;
	cout << "Thuong : " << thuongHaiPhanSo(x1, x2) << endl;
	soSanhHaiPhanSo(x1,x2);
	inputFraction(phanso, n);
	cout << "Phan so lon nhat : " << largestFraction(phanso, n) << endl;
	cout << "Tong phan tu : " << sumAll(phanso, n) ;
	cout << endl;
	cout << "Sap xep tang dan : ";
	fractionArrange(phanso,n);
	cout << endl;
	system("pause");
	return 0;
}
