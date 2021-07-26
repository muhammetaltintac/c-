#include <iostream>
using namespace std;

class Date {
public:
	Date(int d = 1, int m = 1, int y= 1990);
	Date(const Date& oth);
	~Date();
	void setDate(int d = 1, int m = 1, int y = 1990);
	void setDay(int d );
	void setMonth(int m);
	void setYear(int y);
	int getDay()  {
		return day;
	}
	int getMounth()  {
		return month;
	}
	int getYear() {
		return year;
	}
	void increaseDay();
	void compareDate(const Date& othDate);
	void displayDate();
private:
	int year, month, day;
	const int monthDays[12] = { 31, 29, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31 };
	const string monthName[12] = { "JANUARY", "FEBRUARY", "MARTCH", "APRIL", "MAY", "JULY", "JUNE", "AGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER" };

};

Date::Date(int d, int m, int y) {
	setDate(d, m, y);
}
Date::~Date() {
	cout << "\n \n DATE ARRAY WAS DESTROYED" << endl;
}
Date::Date(const Date& oth) {
	day = oth.day;
	month = oth.month;
	year = oth.year;
}
void Date::setDate(int d, int m, int y) {
	setMonth(m);
	setDay(d);
	setYear(y);

}
void Date::setDay(int d) {
	if (d >= 1 && d <= monthDays[month - 1]) {
		day = d;
	}
	else
		day = 1;
}
void Date::setMonth(int m) {
	if (m > 0 && m < 13) {
		month = m;
	}
	else
		month = 1;
}

void Date::setYear(int y) {
	if (y > 1889)
		year = y;
	else
		year = 1900;

}


// void display();

void Date::displayDate() {
		cout << "Date is " << day << "-" << monthName[month - 1] << "-" << year << endl;
}

//void incrasedate
void Date::increaseDay() {
	
	if (day < monthDays[month - 1] ) {
		day = day + 1;
	}
	else {
		if (month < 12) {
			month++;
			day = 1;
		}
		else {
			year += 1;
			month = 1;
			day = 1;
		}
	}
}
void Date::compareDate(const Date& oth) {
	int toplamgun = 0;
	int gun = 0;
	if (month == 1) {
		gun = day;
		toplamgun = gun + (year - 1990)*365;
	}
	else {
		for (int i = 1; i < month; i++) {
			gun =gun+ monthDays[month - i];
		}
		toplamgun = day + gun + (year-1990)*365;
	}
	int toplamgun2 = 0;
	int gun2 = 0;
	if (oth.month == 1) {
		gun2 = oth.day;
		toplamgun2 = gun2 + (oth.year - 1990)*365;
	}
	else {
		for (int i = 1; i < oth.month ; i++) {
			gun2 =gun2+ oth.monthDays[oth.month - i];
		}
		toplamgun2 =oth.day + gun2 + (oth.year-1990)*365;
	}
	
	if (toplamgun > toplamgun2)
		cout << "FIRST DATE ("<<toplamgun<<")  IS GRATER THAN SECOND DATE ("<<toplamgun2<<") " << toplamgun - toplamgun2 <<" DAYS"<< endl;
	else if(toplamgun2 > toplamgun)
		cout << "SECOND DATE("<<toplamgun2<<") IS GRATER THAN FIRST DATE ("<<toplamgun<<") " << toplamgun2 - toplamgun <<"DAYS"<< endl;
	else
		cout << "TWO DATE ARE EQUAL " << endl;

	cout << oth.day << "-"<<oth.month<<"-" << oth.year << endl;
}