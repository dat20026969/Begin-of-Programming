#include <iostream>
#include <string>

using namespace std;

typedef struct SinhVien{
	string HoTen;
	int NamSinh;
    double toan;
    double ly;
    double hoa;
    double DTB;
} sv;

int main(){
	sv arr[100];
	int n = 0;
	while (cin >> arr[n].HoTen >> arr[n].NamSinh >> arr[n].toan >> arr[n].ly >> arr[n].hoa) {
		n++;
	}
	double max = arr[0].DTB, min = arr[0].DTB;
	for (int i = 1; i < n; i++) {
        arr[i].DTB=(double)(arr[i].toan+arr[i].ly+arr[i].hoa)/3;
		if (max < arr[i].DTB){
            max = arr[i].DTB;
        }
		if (min > arr[i].DTB){
            min = arr[i].DTB;
    }
}
	int j = 0;
	cout << "Diem cao nhat lop:" << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i].DTB == max) {
			cout << "#" << j + 1 << endl;
			cout << arr[i].HoTen << " " << arr[i].NamSinh << " " << arr[i].DTB << endl;
			j++;
		}
	}
	j = 0;
	cout << "Diem thap nhat lop:" << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i].DTB == min) {
			cout << "#" << j + 1 << endl;
			cout << arr[i].HoTen << " " << arr[i].NamSinh << " " << arr[i].DTB << endl;
			j++;
		}
	}
    return 0;
}
//Thanks internet.