#ifndef bt_h
#define bt_h
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;
struct Date {
	int day, month, year;
};

struct Student {
	int id;
	char fullname[51];
	double gpa;
	char address[101];
	Date dob;
};
void inputDate(Date &d);
void outputDate(Date d);
void outputDateWithFormat1(Date d); // 2020-12–19
void outputDateWithFormat2(Date d); // 19/12/2019
void outputDateWithFormat3(Date d); // 12/10/2019
void outputDateWithFormat4(Date d); // Dec 19 20
int ngayTrongThang(Date d);
void tomorrow(Date d);
void yesterday(Date d);
void inputStudent(Student &st);
void outputStudent(Student st);
#endif