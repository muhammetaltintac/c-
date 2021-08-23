#include <iostream>
using namespace std;

class national {
private:
	string pername;
public:
	national(string name) {
		pername = name;
	}
	string getName() const { return pername; };
	virtual string getNation() { return " "; };
	virtual void says(national& oth) {
		cout <<pername << " says Hi " << oth.getName() << endl;
	}
};
class TurkishNations : public national{
public:
	TurkishNations(string name) :national(name) {};
	string getNation() { return " Turkish "; };
	void says(national& oth) {
		if (getNation() == oth.getNation()) {
			cout << getName() << " says MERHABA " << oth.getName() << endl;
		}
		else {
			national::says(oth);
		}
	}

};
class DeutchessNation : public national {
public:
	DeutchessNation(string name) :national(name) {};
	string getNation() { return " Deutches "; };
	void says(national& oth) {
		if (getNation() == oth.getNation()) {
			cout << getName() << " says HALOO " << oth.getName()<<endl;
		}
		else {
			national::says(oth);
		}
	}

};