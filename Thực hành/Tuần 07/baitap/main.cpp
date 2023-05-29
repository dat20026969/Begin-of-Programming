// <20127674>
// <Le Duc Dat>
// <20CLC08>
#include "array.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int a[1000], b[1000], a1[1000], b1[1000];
	int n, m, n1, m1, ansWer;
	while (100 < 200)
	{
		cout << "1 - P02 - TBC So chan trong mang" << endl;
		cout << "2 - P04 - Tim cac so nguyen to trong mang" << endl;
		cout << "3 - P06 - Kiem tra thu tu cac phan tu trong mang" << endl;
		cout << "4 - P12 - Tim phan tu lon thu hai trong mang" << endl;
		cout << "5 - P23 - Dem so nguyen to thuoc mang" << endl;
		cout << "6 - P28 - Tim tong bang 0 tren hai mang"<<endl;
		cout << "7 - P09 - Dem cac phan tu khac nhau trong mang" << endl;
		cout << "8 - P26 - Cac phan tu cung xuat hien tren hai mang" << endl;
		cout << "9 - P38 - Tich lon nhat hai phan tu trong mang" << endl;
		cout << "10 - P01 - Tim so chan lon nhat, so le be nhat trong mang" << endl;
		cout << "0 - Ket thuc chuong trinh" << endl;
		int choice;
		cout << "moi thay nhap lua chon" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "nhap mang a:" << endl;
			input(a, n);
			cout << "mang a la:" << endl;
			output(a, n);
			double answer = evenAverage(a, n);
			cout << "TBC cac so chan la: " << fixed << setprecision(2) << answer << endl;
		}
		else if (choice == 2) {
			cout << "nhap mang a:" << endl;
			input(a, n);
			cout << "mang a la:" << endl;
			output(a, n);
			cout << "cac so nguyen to trong mang nay la:" << endl;
			for (int i = 0; i < n; i++)
			{
				if (soNguyenTo(a[i])) {
					cout << a[i] << endl;
				}
			}
		}
		else if (choice == 3) {
			cout << "nhap mang a:" << endl;
			input(a, n);
			cout << "mang a la:" << endl;
			output(a, n);
			if (daySoTangDan(a, n)) {
				cout << "Day so nay la day so tang dan" << endl;
			}
			else if (daySoGiamDan(a, n)) {
				cout << "Day so nay la day so giam dan" << endl;
			}
			else {
				cout << "Day do nay khong tang cung khong giam." << endl;
			}
		}
		else if (choice == 4) {
			cout << "nhap mang a:" << endl;
			input(a, n);
			cout << "mang a la:" << endl;
			output(a, n);
			cout<<"So lon thu hai la: "<<timSoLonNhi(a, n)<<endl;
		}
		else if (choice == 5) {
			cout << "nhap mang a:" << endl;
			input(a, n);
			cout << "mang a la:" << endl;
			output(a, n);
			cout << "mang co so luong so nguyen to la: " << demSoNguyenTo(a, n) << endl;
		}
		else if (choice == 6) {			
			input1(a1, b1, n1, m1);			
			output1(a1, b1, n1, m1);
			sumZero(a1, b1, m1, n1);
		}
		else if (choice == 7) {
			cout << "nhap mang a:" << endl;
			input(a, n);
			cout << "mang a la:" << endl;
			output(a, n);
			cout << "so luong cac phan tu khac nhau la: " << demSo(a, n) << endl;
		}
		else if (choice == 8) {
			input1(a1, b1, n1, m1);
			output1(a1, b1, n1, m1);
			giaoHaiMang(a1, b1, n1, m1);
		}
		else if (choice == 9) {			
			input(a, n);
			output(a, n);
			tichLonNhat(a, n);			
		}
		else if (choice == 10) {
			cout << "nhap mang a:" << endl;
			input(a, n);
			cout << "mang a la:" << endl;
			output(a, n);
			if (kiemTraSoLe(a, n) == 1) {
				cout << "So le nho nhat la: " << soLeNhoNhat(a, n) << endl;
			}
			else {
				cout << "Khong ton tai so le nao de tinh tiep bai toan" << endl;
			}
			if (kiemTraSoChan(a, n) == 1) {
				cout << "So chan lon nhat la: " << soChanLonNhat(a, n) << endl;
			}
			else {
				cout << "Khong ton tai so chan nao de tinh tiep bai toan" << endl;
			}
		}
		else if (choice == 0) {
			break;
		}
		else {
			cout << "lua chon khong hop le" << endl;
		}
	}
	cout << "ket thuc chuong trinh - byebye cac thay dep trai <3" << endl;
	return 0;
}
//P01

// Test case 1
// Input: 1, 2, 3, 4, 5
// Output:3.00

// Test case 2
// Input:6, 7, 8, 9, 10
// Output:8.00

// Test case 3
// Input:11, 12, 13, 14, 15
// Output:13.00

//P02

// Test case 1
// Input: 1, 2, 3, 4, 5
// Output:2, 3, 5

// Test case 2
// Input:6, 7, 8, 9, 10
// Output:7

// Test case 3
// Input:11, 12, 13, 14, 15
// Output:11, 13

//P03

// Test case 1
// Input: 1, 2, 3, 4, 5
// Output: Day so nay la day so tang dan.

// Test case 2
// Input:6, 5, 4, 3, 2
// Output: Day so nay la day so giam dan.

// Test case 3
// Input:11, 12, 13, 14, 10
// Output:Day do nay khong tang cung khong giam.

//P04

// Test case 1
// Input: 1, 2, 3, 4, 5
// Output:4

// Test case 2
// Input:6, 7, 8, 9, 10
// Output:9

// Test case 3
// Input:11, 12, 13, 14, 15
// Output:14

//P05

// Test case 1
// Input: 1, 2, 3, 4, 5
// Output:3

// Test case 2
// Input:6, 7, 8, 9, 10
// Output:1

// Test case 3
// Input:11, 12, 13, 14, 15
// Output:2

//P06

// Test case 1
// Input: 1, 2, 3, 4, 5; -1, -2, -3, -4, 5.
// Output:(1, 1); (2, 2); (3, 3); (4, 4).

// Test case 2
// Input:6, 7, 8, 9, 10; 1, 2, 3, 4, -6
// Output:(1, 5)

// Test case 3
// Input:11, 12, 13, 14, 15; -11, 23, 45, 67, 89
// Output:(1, 1)

//P07

// Test case 1
// Input: 1, 2, 3, 4, 4
// Output:4

// Test case 2
// Input:6, 7, 8, 8, 8
// Output:3

// Test case 3
// Input:11, 12, 12, 12, 12
// Output:2

//P08

// Test case 1
// Input: 1, 2, 3, 4, 5; -1, -2, -3, -4, 5.
// Output:0

// Test case 2
// Input:6, 7, 8, 9, 10; 1, 2, 3, 4, -6
// Output:0

// Test case 3
// Input:11, 12, 13, 14, 15; 11, 23, 45, 67, 89
// Output:0

//P09

// Test case 1
// Input: 1, 2, 3, 4, 5
// Output:(4, 5)

// Test case 2
// Input:6, 7, 8, 9, 10
// Output:(9, 10)

// Test case 3
// Input:-2, -5, 1, 2, 5
// Output:(-2, -5), (2, 5)

//P10

// Test case 1
// Input: 1, 2, 3, 4, 5
// Output:4, 1

// Test case 2
// Input:6, 7, 8, 9, 10
// Output:10, 7
// Test case 3
// Input:11, 12, 13, 14, 15
// Output:14, 11