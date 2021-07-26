#include "operatorOverloading.h"

int main()
{
	Person per1("mustafa", "altintac", 22);
	Person per2("hakan", "altintac", 26);
	Person per3("semanur", "altintac", 23);
	Person per4("mustafa", "altintac", 22);
	Person per5[] = { per1,per2,per3,per4 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i != j) {
				if (per5[i] == per5[j]) {
					cout << "same person " << endl;
				}
				else {
					cout << "not same person" << endl;
				}
			}
		}
		cout << endl;
	}
	per1.display();
	per1++;
	per1.display();
}

