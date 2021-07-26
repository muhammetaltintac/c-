#include <iostream>
using namespace std;

class person {
protected:
	string personName, personSurname;
public:
	person(string name = "", string surname = "") {
		personName = name;
		personSurname = surname;
		cout << "PERSON CONSTRUCTURE WORKED " << endl;
	}
	string getPersonName()const {return personName; }
	string getpersonSurname()const { return personSurname; }
	void setPersonName(string name) { personName = name; }
	void setPersonSurname(string surname) { personSurname = surname; }
	void print() {
		cout << "Name: " << personName << "\nSurname: " << personSurname << endl;
	}
};
class student : public person{
private:
	int studentId, studentGrade;
	bool passORfall;
public:
	student(string name, string surname, int ID) : person(name, surname) {
		studentId = ID;
		cout << "STUDENT CONSTRUCTURE WORKED " << endl;
	}
	int getStudentId()const { return studentId; }
	void setStudentId(int ID) { studentId = ID; }
	int getStudentGrade()const { return studentGrade; }
	void setStudentGrade(int Grade) { studentGrade = Grade; }
	int getPassOrFall()const { return passORfall; }
	void setPassOrFall(bool passFall) {passORfall = passFall;}
	void print() {
		person::print();
		cout << "ID: " << studentId << endl;
		cout << "GARDE: " << studentGrade<<endl;
	}
};
class teacher : public person {
private:
	string department;
public:
	teacher(string name, string surname, string dep): person(name,surname) {
		department = dep;
		cout << "TEACHER CONSTRUCTURE WORKED "<<endl;
	}
	string getDepartment() const { return department; }
	void setDepartment(string dep) { department = dep; }
	void print() {
		person::print();
		cout << "DEPARTMENT: " << department << endl;
	}
	void passFailStatus(student* studentArray);
	void printStudentInfotrmation(student* studentArray);
	
};
void teacher:: passFailStatus(student* studentArray) {
	float avarage = 0.0;
	for (int i = 0; i < sizeof(studentArray); i++) {
		avarage += studentArray[i].getStudentGrade();
	}
	avarage = avarage / sizeof(studentArray);
	for (int i = 0; i < sizeof(studentArray); i++) {
		if (studentArray[i].getStudentGrade() >= avarage)
			studentArray[i].setPassOrFall(true);
		else
			studentArray[i].setPassOrFall(false);

	}
	cout << "AVARAGE: " << avarage << "\n***********************************" << endl;
}
void teacher::printStudentInfotrmation(student* studentArray) {

	for (int i = 0; i < sizeof(studentArray); i++) {
		studentArray[i].print();
		if (studentArray[i].getPassOrFall() == true) {
			cout << "--PASS--" << endl;
		}
		else {
			cout << "--FAIL--" << endl;
		}
		cout << "************************************" << endl;
	}

}