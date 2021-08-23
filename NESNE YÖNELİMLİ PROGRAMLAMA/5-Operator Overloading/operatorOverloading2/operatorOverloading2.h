#include <iostream>
using namespace std;

class Person {
	//friend ostream& operator<<(ostream&, const Person&);
	//friend istream& operator>>(istream&, Person&);
	friend void example(const Person& exp);   // friend foncitionlar direk nesne uzerinden çaðrýlmaz ve sýnýfýn hic bir üyesine kendisi eriþemez
	friend bool operator !=(const Person& first, const Person& second);
	friend ostream& operator <<(ostream& , const Person& exp1);
	friend istream& operator >>(istream& , Person&);
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
// aþaðýdaki fonku Person::example olarak çaðýramayýz çünkü non member fonktur friend fuctions
void example(const Person& exp) {
	cout << "NAME:" << exp.name << endl;
	cout << "SURNAME:" << exp.surname << endl;
	cout << "YAS:" << exp.yas << endl;
}
bool operator !=(const Person& first, const Person& second) {
	return !(first.name == second.name && first.surname == second.surname && first.yas == second.yas);
}

ostream& operator <<(ostream& osObject, const Person& exp1) {
	 osObject  << "NAME: " << exp1.name<<endl
     << "SURNAME: " << exp1.surname << endl
	 << "YAS: " << exp1.yas << endl;
    return osObject;

}
istream& operator >>(istream& isObject, Person& exp2) {
	isObject >> exp2.name >> exp2.surname >> exp2.yas;
	return isObject;
}