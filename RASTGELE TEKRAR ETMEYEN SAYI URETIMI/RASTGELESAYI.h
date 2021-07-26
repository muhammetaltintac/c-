#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Rastgele {
public:
	Rastgele(int boyut=1);
	~Rastgele();
	int boyut, rakam, sayac1=0, sayac2=0;
	int *dizi;
	int getBoyut(int b) { return b; };
	void setBoyut(int b);
	void uretim(int b);
	void gosterim();
};
Rastgele::Rastgele(int b ) {
	boyut = b;
}
void Rastgele::uretim(int b) {
	boyut = b;
	srand(time(0));
	dizi = new int[boyut];
	
	sayac1 = 0;
	for (int i = 0; i < boyut; i++) {
		rakam = rand() % 10;
		while (!(rakam == dizi[i])) {
			dizi[sayac1] = rakam;
			rakam = rand() % 10;
		}
		sayac1 += sayac1;
	}

}
void Rastgele::gosterim() {
	for (int i = 0; i < boyut; i++) {
		cout << dizi[i] << "-";
	}
}
