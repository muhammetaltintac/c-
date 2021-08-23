#include "person-student-teacher.h"
#include <time.h>

int main()
{
	
	student students[] = { { "mustafa", "altintac", 123456 },{"hakan","altintac",4564},{"semanur","altintac",457987},{"almila","altintac",45687498} };
	teacher teac1("MUSTAFA","ULUTAS","PRESIDENT OD DEPARTMENT");
	srand(time(NULL));
	teac1.print();
	for (int i = 0; i < 4; i++) {
		students[i].setStudentGrade(rand() % 100 + 1);
		students[i].print();
		
		cout << "************************************\n";
	}
	teac1.passFailStatus(students);
	teac1.printStudentInfotrmation(students);
	
}

