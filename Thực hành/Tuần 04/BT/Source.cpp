#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include "Header.h"
using namespace std;
void nhapMang(int a[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}
int tongMang(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
int minMang(int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}
bool tangDan(int a[], int n) {
	int order = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] <= a[i + 1]) {
			order++;
		}
	}
	if (order == n - 1) {
		return true;
	}
	return false;
}
void xoaPhanTu(int a[], int& n, int x) {
	int i = 0;
	while (i < n) {
		if (a[i] == x) {
			a[i] = a[n - 1];
			n--;
		}
		else {
			i++;
		}
	}
}