#include <iostream>
#include <iomanip>
#include <cmath>
#include "Header.h"
using namespace std;
int main() {
    int a[100][100];
    int m, n;
    cout << "Nhap so hang: " << endl;
    cin >> n;
    cout << "Nhap so cot: " << endl;
    cin >> m;
    cout << "Nhap ma tran: " << endl;
    set2dArray(a, m, n);
    print2dArray(a, m, n);
    cout << "Phan tu nho nhat: " << findMin(a, m, n) << endl;
    cout << "So luong so nguyen to la: " << countNumberofPrime(a, m, n) << endl;
    cout << "Tong cac duong cheo chinh la: " << sumDiagonal(a, m, n) << endl;
    int x;
    cin >> x;
    cout << "So luong phan tu " << x << "trong mang la" << countOccurrences(a, m, n, x) << endl;
    cout << "Tong cac phan tu trong mang la: " << sumArray(a, m, n) << endl;

}