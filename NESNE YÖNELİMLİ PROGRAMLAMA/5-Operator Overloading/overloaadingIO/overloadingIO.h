#include <iostream>
using namespace std;

class Example {
public:
	friend ostream& operator <<(ostream&,const Example& oth);
	friend istream& operator >>(istream&, Example&);
	string name;
	int age;
};

ostream& operator<<(ostream& object, const Example& oth) {
	object << oth.name << endl
		<< oth.age << endl;
	return object;
}
istream& operator >>(istream& object, Example& oth2) {
	object >> oth2.name >> oth2.age;
	return object;
}