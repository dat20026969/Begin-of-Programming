#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int edge1, edge2, edge3, chuvi;
float p, dientich;
int main()
{
    float edge1, edge2, edge3;
    cout << "Nhap canh a: "<<endl;
    cin >> edge1;
    cout << "Nhap canh b: "<<endl;
    cin >> edge2;
    cout << "Nhap canh c: "<<endl;
    cin >> edge3;    
    chuvi= edge1 + edge2 + edge3;
	p = (float) chuvi/2;    
    dientich = sqrt(p*(p - edge1)*(p - edge2)*(p - edge3));
    if (edge1 >= edge2 + edge3 || edge2 >= edge1 + edge3 || edge3 >= edge1 + edge2)
        cout << "Khong co tam giac nao thoa man yeu cau bai toan";
        else
	{
        cout << "Chu vi cua tam giac la: "<<chuvi<<endl;
        cout << "Dien tich cua tam giac la: " << dientich<<endl;
    }    
    return 0;
}
