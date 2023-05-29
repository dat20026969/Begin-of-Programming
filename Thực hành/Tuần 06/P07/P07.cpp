#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
	int n, i, dem=0;
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=0; i<n; i++){
		if(arr[i]!=arr[i+1]){
			dem++;
		}
	}
	cout<<dem;
	return 0;
}
