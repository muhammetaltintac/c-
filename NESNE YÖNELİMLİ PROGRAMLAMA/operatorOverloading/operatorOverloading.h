#include <iostream>
using namespace std;

class Person {
public:
	string name;
	string surname;
	int yas;
	Person();
	Person(string pername, string persurname, int peryas);
	void display() {
		cout << "NAME: " << name << "\nSURNAME: " << surname << "\n YAS " << yas;
	}
	bool operator ==(const Person& oth);
	void operator ++(int);
	void operator ++();
};

Person::Person() {
	name = "";
	surname = "";
	yas = 0;
}
Person::Person(string pername, string persurname, int peryas) {
	name = pername;
	surname = persurname;
	yas = peryas;
}
bool Person::operator==(const Person& oth) {
	return(name == oth.name && surname == oth.surname && yas == oth.yas);
}
void Person::operator++(int) {
	yas += 1;
}
void Person::operator++() {
	yas += 1;
}