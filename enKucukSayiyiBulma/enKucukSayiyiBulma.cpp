#include <iostream>
#include <time.h>
using namespace std;

int main()
{

	srand(time(NULL));
	int size = 15, sayac = 0;;
	int* data;
	int smallNumber;
	data = new int[size];
	int i = 0, j = 0;
	for (int i = 0; i < size; i++) {
		data[i] = rand() % 100;
		cout << data[i] << "\t";
	}
	cout << endl;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (sayac == size - 1) {
				break;
			}
			if (i != j) {
				if (data[i] < data[j]) {
					sayac++;
					//cout << sayac << "\t";
					smallNumber = data[i];

				}
				else {
					sayac = 0;


				}
			}
		}
	}
	cout << smallNumber;





}
