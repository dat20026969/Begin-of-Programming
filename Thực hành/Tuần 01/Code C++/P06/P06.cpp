#include <iostream>
#include <iomanip>
#include <cmath>
#define PI  3.14
using namespace std;
int main ()
{
 double x,bt;
 cout<<"Nhap vao x=";
 cin>>x;
 x = x*PI/180;
 bt = sin(x);
 cout<<"Gia tri bieu thuc A="<<fixed<< setprecision(2) << bt << endl;
 return 0;
 }
