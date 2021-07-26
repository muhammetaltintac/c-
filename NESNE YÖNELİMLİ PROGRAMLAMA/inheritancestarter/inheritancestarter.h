#include <iostream>
using namespace std;

class anasinif {
public:       
	int x;//e�er private olursa t�m t�retilmi� fonklarda hata verir ��nk� private �yelere sadece s�n�f�n i�eriinden eri�im yaabiliriz.
				   // e�er protected olursa miras ald���m�z s�n�flarda s�k�nt� olmaz ancak main i�erisnden hi�bir �ekilde bu �yeleri �a��ramay�z
	anasinif(int anaX = 0) {
		x = anaX;
		cout << "ANA CONSTRUCTOR WORKED " << endl;
	}
	~anasinif() {
		cout << "ANA DESTRUCTURE WORKED " << endl;
	}
	anasinif(const anasinif& oth) {
		x = oth.x;
		cout << "ANA COPY CONSTRUCTURE WORKED " << endl;
	}
	
	void setX(int mainX) { x = mainX; };
	int getX() { return x; };
	void print1() { cout << x << endl; }

};
class turetilmissinif : public anasinif {
public:
	int y;
	turetilmissinif(int anaY=0, int yapayX=0) :anasinif(yapayX) {
		y = anaY;
	//	x = yapayX;                          BU KULLANIM BELK KODDA KARI�IKLIK �IKARAB�L�R B�Z�M A�IMIZDAN
		cout << "TURETILMIS CONSTRUCTURE WORKED " << endl;

	}
	~turetilmissinif() {
		cout << "TURETILMIS DESTRUCTURE WORKED " << endl;
	}
	turetilmissinif(const turetilmissinif& oth) {
		y = oth.y;
		x = oth.x;
		cout << "KOPYA CONSTRUCTURE WORKED " << endl;

	}

	
	void setY(int mainY) { y = mainY; };
	int getY() { return y; };
	void print2() { cout << y << endl; }

};
class turetilmissinif2 : private anasinif {
public:

	int z;
	void setZ(int mainZ) { z = mainZ; };
	int getZ() { return z; };
	void print3(){ 
		cout << z << endl; 
		x = 9;           //x e sadece scope i�erisinden eri�im yapabildim demekki boyle olacak
		print1();        // ayni �ekilde 
	}
};
class turetilmissinif3 : protected anasinif {
public:
	
	int t;
	void setT(int mainT) { t= mainT; };
	int getT() { return t; };
	void print4() {
		cout << t << endl;
		x = 87;
		print1();
	}



};


// �OKLU KALITIM

class ASINIF {
public:
	int a;
	ASINIF() {
		cout << "ASINIF CONSTRUCTURE WORKED " << endl;
	}
	~ASINIF() {
		cout << "ASINIF DESSTRUCTURE WORKED " << endl;
	}

};
class BSINIF {
public:
	int b;
	BSINIF() {
		cout << "BSINIF CONSTRUCTURE WORKED " << endl;
	}
	~BSINIF() {
		cout << "BSINIF DESSTRUCTURE WORKED " << endl;
	}

};

/// <�OKLU KALITIM SYNTAX>
/// ------->>>>>>>>>>>>>>>     CLASS   NAME  : SEV�YE �LKANASINIF , SEV�YE �K�NC�ANASINIF
//    �LK ANA SINIF CONS SONRA �K�NC� ANASINIF CONS ���NC� OLARAK KEND� CONS �ALI�IR DESTRUCTURELAR TAM TERS� SIRA �LE �ALI�IR
/// </summary>
class CSINIF : public ASINIF, public BSINIF {
public:
	CSINIF() {
		cout << "CSINIF CONSTRUCTURE WORKED " << endl;
	}
	~CSINIF() {
		cout << "CSINIF DESSTRUCTURE WORKED " << endl;
	}

};