#include <iostream>
#include <cmath>

using namespace std;

bool laSNT(int n) {
	if (n < 2) return false;
	for (int i = 2; i < (int)sqrt(n) + 1; i++)
		if (n % i == 0) return false;
	return true;
}

int main() {
    int n;
    cin >> n;

    int n1, n2;
    n1 = n2 = n;
    
    while (!laSNT(n1)) n1--;
    while (!laSNT(n2)) n2++;
    if (n - n1 <= n2 - n)
    	cout << n1;
    else
    	cout << n2;
    return 0;
}