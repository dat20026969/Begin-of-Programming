#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double weight, height, BMI ;
	cin >> weight >> height;
	BMI = weight / (height*height);
	cout<<BMI<<endl;
	return 0;
}
