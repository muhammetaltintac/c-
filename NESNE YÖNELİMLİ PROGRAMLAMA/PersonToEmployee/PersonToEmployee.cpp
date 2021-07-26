#include "PersonToEmployee.h"
int main()
{
	srand(time(NULL));
	Employee emp1("mustafa", "altintac", "IT", "SOFTWARE", 1800, 4);
	Employee emp5("mehmet", "tas", "IT", "SOFTWARE", 1400, 2);
	Employee emp2("talha", "isildak", "IT", "SOFTWARE", 7800, 7);
	Employee emp3("kamil", "basaran", "ACCOUNTANTING", "ACCOUNTANT", 1800, 7);
	Employee emp4("kadir", "akbas", "IT", "SOFTWARE", 1600, 5);
	Manager man("hakan", "altintac", "IT", "SOFTWARE", 2800, 10);
	Employee employeelists[] = {emp1, emp2, emp3, emp4,emp5};
	
	man.extraEmployees(employeelists);
	man.print();
}

