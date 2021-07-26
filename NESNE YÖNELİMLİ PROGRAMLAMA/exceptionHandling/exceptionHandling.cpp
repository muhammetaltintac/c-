#include "exceptionHnading.h"
//#include <cassert>
int main()
{
	/*   
	int x, y, z;
	cout << "enter a value ";
	cin >> x;
	cout << "enter a value ";
	cin >> y;
	assert(y != 0);  /// cassert işlemi durdurur
	z= x / y;
	cout << "result :" << z;
	*/
/*	float x, y, z;
	string a;
	try {
		
		cout << "enter a value ";
		cin >> x;
		cout << "enter a value ";
		cin >> y;
		if (y == 0) {
			throw a;
		}
		else if (y < 0) {
			throw y;
		}
		else if (x < 0) {
			throw x;
		}
		else {
			throw 12;   ///12 değeri oylesıne bir değer 
		}
		z = x / y;
		cout << "result :" << z;
	}
	catch (string x) {
		cout << x << " cannot be zero" << endl;
	}
	catch (float b) {
		cout << b <<" cannot be negative"<<endl;
	}
	catch (...) {
		cout << "default" << endl;
	}
}
*/
	float x, y, z;
	string a;
	try {

		cout << "enter a value ";
		cin >> x;
		cout << "enter a value ";
		cin >> y;
		if (y == 0) {
			throw dividerController();
		}
		else if (y < 0) {
			throw numberController("divider");
		}
		else if (x < 0) {
			throw numberController("division");
		}
		else {
			throw 12;   ///12 değeri oylesıne bir değer 
		}
		z = x / y;
		cout << "result :" << z;
	}
	catch (dividerController& oth) {
		cout << oth.what();
	}
	catch (numberController& oth ) {
		cout << oth.what();
	}
	catch (...) {
		cout << "default" << endl;
	}
}
