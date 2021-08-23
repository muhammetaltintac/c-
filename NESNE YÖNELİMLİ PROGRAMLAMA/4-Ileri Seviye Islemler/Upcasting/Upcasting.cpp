#include "Upcasting.h"

int main()
{

	/*
	upcasting i�leminde ana s�n�ftan �retilen bir i�aret�i nesnesi miras verdi�i s�n�f�n kendinde olan de�erlerine ula�abilir.

	ana         �retilen 
	name		name      --->>>> ula�abilir
	surname		surname   --->>>> ula�abilir
	salary		salary    --->>>> ula�abilir
				department --->>>> ula�amaz
				increasing --->>>> ula�amaz
	
	*/
	/*
	employee* emp;
	manager man("mehmet","alisik",5000,"it");
	emp = &man;
	employee emp1("hasan", "tahsin", 1500);
	
	
	man.print();
	emp = &man;
	emp->empName = "harun";
	man.print();
	// emp->increasing();   --->>> hata verir
	man.incresing();
	manager* man1 = (manager*)(emp);
	man1->manDepartment = "itt";
	man.print();

	employee emp4("hakan", "altintac", 4000);
	employee* emp5 = &emp4;
	manager* mng = (manager*)(emp5);
	//mng->manDepartment = "it";  /// bu bir hatad�r ��nk� mng bir employee s�n�f�n�n nesnesinin bilgilerini tutar ve onda olmayan bir �zelli�i ona atfedemez
	emp5->print();                 // bundaki hatada ise mng  nin print fonkunda departman yaz�lmas� gerekir ancak mng nin y-tuttu�u employede bu bilgi yok ve hata al�r�z
	*/
	/*
	biz bu hatalar�n �n�ne virtual anahtar s�zc��� ile ge�eriz ve ana fonksiyonumuzdaki ortaak fonkun ba��na virtual keyvordu ekleriz
	*/ 
	/*
	mng->print(); // fonk �al���rken mng hangi fonk hangi nesne �zerinden �a�r�l�yorsa o a�n�f�n fonku �al���r
//----------------------------------------------------------------------------------------------------------------------------------------
	manager newmanager("almila", "hiranur", 9800, "medicine");
    employee newemployee("talha", "isildak", 8750);
	//referans ile �a��rma 
	cout<<"\n REFERANS ILE CAGIRMA \n";
	displayinformation1(newmanager);
	displayinformation1(newemployee);
//---------------------------------------------------------------------------------------------------------------------------------
//  ---pointer ile �a��rma
	cout << "\n POINTER ILE CAGIRMA \n";

	manager* newmanager1 = new manager(newmanager);
	employee* newemployee1 = new employee(newemployee);
	displayinformation2(newmanager1);
	displayinformation2(newemployee1);
//  -------------------------------------------------------------------------------------------------------------------------------------
	//DEGER ILE CAGIRMA
	cout << "\n DEGER ILE CAGIRMA \n";
	manager newmanager2("recep", "creatvie", 7850, "personaltrainer");
	employee newemployee2("mert", "aslankaya", 8756);
	displayinformation3(newemployee);
	displayinformation3(newmanager);
	
	*/
	/*
	----VIRTUAL DESTRUCTOR----
	manager* mng = new manager("hakan", "altintac", 7500, "soldier");
	employee* emp = mng;
	//delete emp;   // sadece emp in desti �al��t� ancak biz boyle olmas�n�istemeyiz  ��nk� budurumda mng de hata ya�ar�z
//	delete mng;		// nacak bu kullan�m uygundur hem mng hemde emp silinir
	// budurumun �n�ne ge�ebilmek i�in ana fonkun destine virtual kywordunu ekleriz
	delete emp;
	*/
	cat cat1;
	dog dog1;
	duck duck1;
	cat1.talk();
	dog1.talk();
	duck1.talk();
	cat* catt = new cat;
	dog* dogg = new dog;
	duck* duckk = new  duck;
	animal* anm[] = { dogg,catt,duckk };   /// upcasting
	for (int i = 0; i < 3; i++) {
		anm[i]->talk();
	}
	


	return 0;
}

