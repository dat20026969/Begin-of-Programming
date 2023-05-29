// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:5
// Output:1, 5
// Test case 2
// Input:6
// Output:1, 2, 3, 6
// Test case 3
// Input:7
// Output: 1, 7
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
	
	int n;
    cout << "Nhap n = "<<endl;
    do {
        cin >> n;
        if (n <= 0) {
            cout << "Nhap lai n = "<<endl;
            }
        } while (n <= 0);

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";
        
    }
    

}return 0;
}
