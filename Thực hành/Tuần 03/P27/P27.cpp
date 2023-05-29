// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:10000, 2, 2
// Output:10400
// Test case 2
// Input:100000, 3, 3
// Output:109000
// Test case 3
// Input:200000, 3, 4
// Output:224000
#include <bits/stdc++.h>
using namespace std; 
int main()
{

	int x;
	double tienlai,tiengui,laisuat,thoihan,tong;
	for(x=4;x>=0;x--)
	{
		cout << "Nhap tien gui ban dau, lai suat va thoi han : " << endl;
		cin>>tiengui>>laisuat>>thoihan;
		tienlai=(tiengui*laisuat*thoihan)/100;
		tong=tiengui+tienlai;
		cout << "Tien gui ban dau la " << tiengui << endl;
		cout << "Lai suat la " << laisuat << "%" << endl;
		cout << "Thoi han la " << thoihan << " nam" << endl;
		cout << "So tien lai la " << tienlai << endl;
		cout << " Tong so tien ca goc lan lai la: "<<tong<<endl;
}
return 0;
}
