#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, hangDonVi, hangChuc;
	cin>>a;
	if(a<10 && a>99){
		return 0;
	}
	else{
		hangDonVi=a%10;
		hangChuc=(a-hangDonVi)/10;
		cout<<hangDonVi<<hangChuc;
	}
	return 0;
}
