// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:2, 2020
// Output:29
// Test case 2
// Input:2, 2021
// Output:28
// Test case 3
// Input:3, 2020
// Output:31
#include <bits/stdc++.h> 
using namespace std; 
bool isCheck(int nam) 
{
    return (nam % 4 == 0);
}
 
int fun(int thang, int nam) 
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (isCheck(nam))
            return 29;
        else
            return 28;
    default:
        cout << "So thang nhap khong hop le"<<endl;
        return(0);
    }
}
 
int main()
{
    int thang, nam;
    do {
        cout << "Nhap so thang : ";
        cin >> thang;
        cout << "Nhap so nam : ";
        cin >> nam;
    } while (nam < 0 || thang < 1 || thang >12);
    cout << "So ngay trong thang do la: " << fun(thang, nam) << endl;
    return 0;
}
 
