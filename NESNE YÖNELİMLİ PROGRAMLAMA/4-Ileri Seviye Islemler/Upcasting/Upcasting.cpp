#include "Upcasting.h"

int main()
{

	/*
	upcasting iþleminde ana sýnýftan üretilen bir iþaretçi nesnesi miras verdiði sýnýfýn kendinde olan deðerlerine ulaþabilir.

	ana         üretilen 
	name		name      --->>>> ulaþabilir
	surname		surname   --->>>> ulaþabilir
	salary		salary    --->>>> ulaþabilir
				department --->>>> ulaþamaz
				increasing --->>>> ulaþamaz
	
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
	//mng->manDepartment = "it";  /// bu bir hatadýr çünkü mng bir employee sýnýfýnýn nesnesinin bilgilerini tutar ve onda olmayan bir özelliði ona atfedemez
	emp5->print();                 // bundaki hatada ise mng  nin print fonkunda departman yazýlmasý gerekir ancak mng nin y-tuttuðu employede bu bilgi yok ve hata alýrýz
	*/
	/*
	biz bu hatalarýn önüne virtual anahtar sözcüðü ile geçeriz ve ana fonksiyonumuzdaki ortaak fonkun baþýna virtual keyvordu ekleriz
	*/ 
	/*
	mng->print(); // fonk çalýþýrken mng hangi fonk hangi nesne üzerinden çaðrýlýyorsa o aýnýfýn fonku çalýþýr
//----------------------------------------------------------------------------------------------------------------------------------------
	manager newmanager("almila", "hiranur", 9800, "medicine");
    employee newemployee("talha", "isildak", 8750);
	//referans ile çaðýrma 
	cout<<"\n REFERANS ILE CAGIRMA \n";
	displayinformation1(newmanager);
	displayinformation1(newemployee);
//---------------------------------------------------------------------------------------------------------------------------------
//  ---pointer ile çaðýrma
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
	//delete emp;   // sadece emp in desti çalýþtý ancak biz boyle olmasýnýistemeyiz  çünkü budurumda mng de hata yaþarýz
//	delete mng;		// nacak bu kullaným uygundur hem mng hemde emp silinir
	// budurumun önüne geçebilmek için ana fonkun destine virtual kywordunu ekleriz
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

