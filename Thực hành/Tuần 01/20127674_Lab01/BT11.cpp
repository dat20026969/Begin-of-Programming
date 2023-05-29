#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int second, hour, minute, second1;
	cin >> second;
	hour = second / 3600;
	minute = second / 60;
	second1 = second - (hour*3600+minute*60);
	cout<<hour<<":"<<minute<<":"<<second1;
	return 0;
	
}
