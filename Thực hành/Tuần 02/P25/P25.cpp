#include <bits/stdc++.h>
using namespace std;
int main()
{
	float km = 42.195, second=40.2, pace, speed;
	int hour=1, minute=59;
	pace= (1*60 + 59 + (float)40.2/60)/km;
	speed= 42.195 /(1 + (float)59/60 + (float)40.2/3600);
	cout<<"Toc do trong chay bo la:"<<fixed<< setprecision(2)<<pace<<endl;
	cout<<"Van toc cua ong la:"<<fixed<< setprecision(2)<<speed<<endl;
	return 0;
	
}
   
