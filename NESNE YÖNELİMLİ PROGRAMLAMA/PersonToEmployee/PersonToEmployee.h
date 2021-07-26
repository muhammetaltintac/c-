#include <iostream>
#include <time.h>
#include <string>
//#include <sstream> 

using namespace std;

class Person {
protected:
	string personName, personSurname, personDepartment, personPosition, personID;
	int personSalary, personYear;
public:
	Person(string name, string surname, string departmnet, string position, int salary, int year) {
		personName = name; personSurname = surname; personDepartment = departmnet; personPosition = position;
		personSalary = salary ;  personYear = year;
	}
	void setName(string name) { personName = name; };
	string getName() { return personName; };
	void setSurname(string surname) { personSurname = surname; };
	string getSurname() { return personSurname; };
	void setPersonDepartment(string department) { personDepartment = department; };
	string getPersonDepartmen() { return personDepartment; };
	void setPersonPosition(string position) { personPosition = position; };
	string getPersonPosition() { return personPosition; };
	void setpersonID(string ID) { personID = ID; };
	string getPersonID() { return personID; };
	void setPersonSalary(int salary) { personSalary = salary; };
	int getPersonSalary() { return personSalary; };
	void setPersonYear(int year) { personYear = year; };
	int getPersonYear() { return personYear; }
	void print() {
		cout << "------------" << endl;
		cout << "NAME: " << personName << endl;
		cout << "SURNAME: " << personSurname << endl;
		cout << "DEPARTMENT: " << personDepartment << endl;
		cout << "POSITION: " << personPosition << endl;
		cout << "YEARS WORKED: " << personYear << endl;
		cout << "ID NUMBER: " << personID << endl;
	}
};

class Employee : public Person {
private:
	int employeeBonus=0;
public:
	Employee(string name, string surname, string department, string position, int salary, int year) :Person(name, surname, department, position, salary, year) {
		
		int X =1000+ rand() % 8999;
		personID = "EMP" + to_string(X);
		employeeBonus = 85 * year;
	}
	
	void print() {
		Person::print();
		cout << "BONUS: " << employeeBonus << endl;
		cout << "------------" << endl;
		
	}
	
};
class Manager : public Employee {
private:
	int managerBonus;
public:
	Manager(string name, string surname, string department, string position, int salary, int year) :Employee(name, surname, department, position, salary, year) {
		
		//int a = 1000+rand() % 8999;
		setpersonID("MAN" + to_string(1000 + rand() % 8999));
		managerBonus = 165 * year;
	}
	void print() {
		Person::print();
		{
			cout << "BONUS: " << managerBonus << endl;
			cout << "------------" << endl;
		}
	}
	void extraEmployees(Employee employeesArray[]) {
		cout << "MANAGER NAME: " << Manager::personName <<" "<<Manager::personSurname<< endl;
		cout << "MANAGER DEPARTMENT: " <<Manager::personDepartment<<endl;
		cout << "------------" << endl;

		for (int i = 0; i < sizeof(employeesArray); i++) {
			if (getPersonDepartmen() == employeesArray[i].getPersonDepartmen()) {
				employeesArray[i].print();
			}
		}
	}

};