// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:5
// Output:1, 5
// Test case 2
// Input:6
// Output:1, 3
// Test case 3
// Input:7
// Output: 1, 7
#include <bits/stdc++.h>
using namespace std;
int main()
{
       int n, cacuocsole = 1;
       cout<<"nhap so n: "<<n<<endl;
       do{
           cin>>n;
           if(n <= 0)
		   {
           		cout<<"khong thoa man yeu cau bai toan";
          }
       }while(n <= 0);
    
       for(int i = 1;i <= n;i++)
	   {
           if(n % i == 0)
		   {
              if(i % 2 == 1)
			  {
                  cacuocsole = i;
                  cout<<"cac uoc so le la:"<<setprecision(2)<<fixed<<cacuocsole<<endl;
                     
            }
       }        
}return 0;
}
