#include <iostream>

using namespace std;

class dividerController {
private:
	string message;
public:
	dividerController() {  message = " diveder is a zero please enter a positife a value"; };
	string what() { return message; }
};
class numberController {
private:
	string message;
public:
	numberController(string x="") {
		message = x + " is a negative number plase enter a pozitife a value";
	};
	string what() { return message; };
};