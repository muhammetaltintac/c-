#include <iostream>
using namespace std;

class employee {
public:
	string empName;
	string empSurname;
	double empSalary;
	employee(string name, string surname, double salary) {
		empName = name;
		empSurname= surname;
		empSalary = salary;
		
	}
	virtual ~employee() {
		cout << "EMPLOYEEE DESTRUCTOR WORKED" << endl;
	}
	virtual void print() {
		cout << "Name: " << empName << endl;
		cout << "Surname: " << empSurname << endl;
		cout << "Salary: " << empSalary << endl;
	}
};
class manager : public employee {
public:
	string manDepartment;
	manager(string name, string surname, double salary,string department) :employee(name, surname, salary) {
		manDepartment = department;
	}
	~manager() {
		cout << "MANAGER DESTRUCTOR WORKED" << endl;
	}
	void print() {
		employee::print();
		cout << "Department: " << manDepartment << endl;
	}
	void incresing() {
		empSalary += 200;
	}
};

//pass referance
void displayinformation1(employee& object) {
	object.print();
}
// pass pointer
void displayinformation2(employee* object) {
	object->print();
}
//pass value
void displayinformation3(employee object) {
	object.print();
}

//\*************************PURE VÝRTUAL SOYUT SINIF*****************************************************\\

class animal {
public:
	virtual void talk() = 0;  //sytnax yapýsý bu animal clasý þimdi bir sanal sýnýftýr ancak miras verir
	int a;
};
class cat:public animal{
public:
	void talk() {
		a = 0;
		cout <<a<<"--MEOW" << endl;
	}
};
class dog:public animal {
public:
	void talk() {
		a = 9;
		cout <<a<< "--HAV HAV"<<endl;
	}
};
class duck:public animal {
public:
	void talk() {
		a = 8;
		cout <<a<< "--VAK VA"<<endl;
	}
};