#include <iostream>
#include <iomanip>
#include <cmath>
#include "Header.h"
#define MAX 100;
using namespace std;
void set2dArray(int a[][100], int& m, int& n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << j;
            cin >> a[i][j];
        }
    }
}

void print2dArray(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
            cout << endl;
        }
    }
}
int findMin(int a[][100], int m, int n) {
    int min = a[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}
bool SoNguyenTo(int a){
    if (a < 2){
        return false;
    }
    else{
        for (int i = 2; i <= sqrt((float)a); i++){
            if (a % i == 0){
                return false;
            }
        }
    }
    return true;
}
int countNumberofPrime(int a[][100], int m, int n) {
    int dem = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (SoNguyenTo(a[i][j])) {
                dem++;
            }
        }
    }
    return dem;
}
int sumDiagonal(int a[][100], int m, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }
    return sum;
}
int countOccurrences(int a[][100], int m, int n, int k) {
    int demso = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == k) {
                demso++;
            }
        }
    }
    return demso;
}
int sumArray(int a[][100], int m, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tong += a[i][j];
        }
    }
    return tong;
}