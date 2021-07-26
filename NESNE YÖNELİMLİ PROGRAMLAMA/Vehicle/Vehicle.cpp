#include "Vehicle.h"

int main()
{
	Vehicle* vhc[] = { new Car(100.00,"BMW"), new MotorCycle(541.23,"HONDA") };
	int Which_vehicle;
	char inputVehicle;
	vhc[0]->display();
	cout << "MENU \n 0--> CAR ***** 1--> MOTORCYCLE \n S-->START ***** F--> FINISH \n U--> INCREASE SPEED ***** D--> DECRAISE SPEED " << endl;
	do {
		fflush(stdin);
		cout << "PLESA ENTER  YOUR CHOOSES\n";
		cin >> Which_vehicle >> inputVehicle;
		vhc[Which_vehicle];
		switch (inputVehicle)
		{
		case 'S':
			vhc[Which_vehicle]->startEngine();
			vhc[Which_vehicle]->display();
			break;
		case 'F':
			vhc[Which_vehicle]->stopEngine();
			vhc[Which_vehicle]->display();
			break;
		case 'U':
			vhc[Which_vehicle]->incraiseSpeed();
			vhc[Which_vehicle]->display();
			break;
		case 'D':
			vhc[Which_vehicle]->decraiseSpeed();
			vhc[Which_vehicle]->display();
			break;

		default:
			cout << "PLEASE ENTER A VALID INPUT " << endl;
			break;
		}

	} while (Which_vehicle != -1);

	
}
