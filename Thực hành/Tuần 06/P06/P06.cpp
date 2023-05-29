#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, d, e=0;
	cin>>a;
	for(int i=1; i<=a; ++i)
	{
		cin>>b>>c>>d;
		if((b+c+d)>=2){
			e++;
		}
	}
	cout<<e<<endl;
	return 0;
}
