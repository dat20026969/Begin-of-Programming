// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:1, 2, 12, 6
// Output:12, 1
// Test case 2
// Input:1, 2, 3, 4
// Output:4, 1
// Test case 3
// Input:0, 2, 3, 2222
// Output:2222, 0
#include <bits/stdc++.h>  
using namespace std; 
int nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao day a"<<i<<endl;
        cin>>a[i];
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main()
{
    int a[1000];
    int n;
    cout<<"nhap so n"<<endl;
    cin>>n;
    nhap(a, n);
    cout<<"gia tri lon nhat la "<<max(a, n)<<endl;
    cout<<"gia tri nho nhat la "<<min(a, n)<<endl;
    return 0;
}

