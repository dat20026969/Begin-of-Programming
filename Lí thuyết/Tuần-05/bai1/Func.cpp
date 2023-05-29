#include <math.h>
#include <iostream>
#include "func.h"
using namespace std;

void SolutionPrint(int n, int k, double x, double y){
	switch (n) {
		case NoSolution:
			break;
	}
}
void EquaDisplay(double a, double b) {

}

int bai1(int n) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) cout << i << " ";
        }
        cout << endl;
        return 0;
   
}
int ngto(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int bai2(int n) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 && ngto(i)) {
                cout << i << " ";
            }
        }
        return 0;
}



int bai3(int n) {
    if (n < 2) return 0;
    for (int i = 1; i < n; i++) {
        if(ngto(i) == 1) cout << i << " ";
    }
    return 0;
}

int daoso(int n) {
    int ans = 0;
    while (n > 0) {
        int x = n % 10;
        ans = ans * 10 + x;
        n /= 10;
    }
    return ans;
}

int bai4(int n) {
    for (int i = 1; i < n; ++i) {
        if (daoso(i) == i) cout << i << " ";
    }
    return 0;
}

double giaithua(double n) {
    double ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans = ans * i;
    }
    return ans;
}

double tohop(double n, double k) {
    double ans = 0;
    ans = giaithua(n) / (giaithua(k) * giaithua(n - k));
    return ans;
}



