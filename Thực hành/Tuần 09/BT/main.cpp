#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include "bt.h"
using namespace std;
void inputDate(Date &d) {
	cout << "Day: ";
	cin >> d.day;
	cout << "Month: ";
	cin >> d.month;
	cout << "Year: ";
	cin >> d.year;
}
void outputDate(Date d) {
	cout << d.year << " - " << d.month << " - " << d.day<<endl;
}
void outputDateWithFormat1(Date d) {
	outputDate(d);	
}
void outputDateWithFormat2(Date d) {
	cout << d.day << "/" << d.month << "/" << d.year << endl;
}
void outputDateWithFormat3(Date d) {
	cout << d.month << "/" << d.day << "/" << d.year << endl;
}
void outputDateWithFormat4(Date d) {
    switch (d.month){
    case 1:
        cout << "Jan";
        break;
    case 2:
        cout << "Feb";
        break;
    case 3:
        cout << "Mar";
        break;
    case 4:
        cout << "Apr";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "Jun";
        break;
    case 7:
        cout << "Jul";
        break;
    case 8:
        cout << "Aug";
        break;
    case 9:
        cout << "Sep";
        break;
    case 10:
        cout << "Oct";
        break;
    case 11:
        cout << "Nov";
        break;
    case 12:
        cout << "Dec";
        break;    
    }
    d.year = d.year % 100;
    cout <<d.month<<" " << d.day << " " << d.year << endl;
 }
int ngayTrongThang(Date d){
	int soNgay;
	switch (d.month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		soNgay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		soNgay = 30;
		break;
	case 2:
		if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		{
			soNgay = 29;
		}
		else
		{
			soNgay = 28;
		}
		break;
	}

	return soNgay;
}
void tomorrow(Date d) {
    d.day++;
    if (d.day > ngayTrongThang(d))
    {
        d.day = 1;
        d.month++;
        if (d.month > 12)
        {
            d.month = 1;
            d.year++;
        }
    }
	cout << "Ngay mai la: " << d.day << "/" << d.month << "/" << d.year << endl;
}
void yesterday(Date d) {
	d.day--;
	if (d.day == 0)
	{
		d.month--;
		if (d.month == 0)
		{
			d.month = 12;
			d.year--;
		}

		d.day = ngayTrongThang(d);
	}
	cout << "Ngay hom qua la: " << d.day << "/" << d.month << "/" << d.year << endl;
}
void inputStudent(Student &st) {
	cout << "ID:" << endl;
	cin >> st.id;
	cin.ignore(1);

	cout << "Full name: ";
	cin.getline(st.fullname, 51);

	cout << "Address: ";
	cin.getline(st.address, 51);

	cout << "GPA";
	cin >> st.gpa;

	cout << "Date of birth: ";
	inputDate(st.dob); 
}
void outputStudent(Student st) {
	cout << "ID: " << st.id << endl;
	cout << "Full name: " << st.fullname << endl;
	cout << "Address: " << st.address << endl;
	cout << "GPA: " << st.gpa << endl;
	cout << "DOB: ";
	outputDate(st.dob);
	cout << endl;

}