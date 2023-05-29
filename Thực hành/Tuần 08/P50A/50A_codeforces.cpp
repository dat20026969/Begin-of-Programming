// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:2, 3.
// Output:2
// Test case 2
// Input:3, 3
// Output:4
// Test case 3
// Input:4, 5
// Output:10
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, n, domino;
	cin>>m>>n;
	if (m>=1 && m<=n && n<=16){	
		domino= m*n/2;
		cout<<domino;
	}
	else{
	 return 0;
	}
	return 0;
}

	
