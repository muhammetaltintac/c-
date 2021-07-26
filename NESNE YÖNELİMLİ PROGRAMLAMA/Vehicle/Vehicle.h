#include <iostream>
using namespace std;

class Vehicle {
private:
	int speed;
	int gearNumber;
	bool isWork;
	double price;
	string brand;
public:
	Vehicle( double v_price=0.0, string v_brand="") {
		speed = 0;
		gearNumber = 0;
		isWork = false;
		price = v_price;
		brand = v_brand;
		cout << "CONSTRUCTURE WORKED " << endl;
	};

	int getSpeed() { return speed; };
	int getGearNumber() { return gearNumber; };
	bool getIsWork() { return isWork; };
	double getPrice() { return price; };
	string getBrand() { return brand; };

	void setSpeed(int v_speed) { speed = v_speed; };
	void setGearNumber(int v_GearNumber) { gearNumber = v_GearNumber; };
	void setIsWork(bool situation) { isWork = situation; }
	void setBrand(string v_brand) { brand = v_brand; };
	void startEngine() {
		isWork = true;
		gearNumber = 1;
	}
	void stopEngine() {
		isWork = false;
		speed = 0;
		gearNumber = 0;
	}
	virtual void display(){
		cout << "BRAND: " << brand << endl;
		cout << "PRICE: " << price << endl;
		cout << "SPEED: " << speed<< " GEARNUMBER: " << gearNumber<<endl;
		isWork ? cout << "ENGINE: ON " << endl : cout << "ENGINE: OF " << endl;
		
		
	}
	virtual void incraiseSpeed() = 0;
	virtual void decraiseSpeed() = 0;
};

class Car: public Vehicle {
public:
	Car(double car_price, string car_brand) :Vehicle(car_price, car_brand) {
		cout << "CAR CONSTRUCTURE WORKED" << endl;
	}
	void incraiseSpeed() {
		if (getIsWork()) {
			int temp_speed = getSpeed();
			if (temp_speed <= 120) {
				setSpeed(temp_speed + 30);
				int temp_gear = getGearNumber();
				if (temp_gear < 6) {
					setGearNumber(temp_gear + 1);
				}
			}
		}
		else {
			cout << "PLEASE START ENGINE " << endl;
		}
	}
	void decraiseSpeed() {
		if (getIsWork()) {
			int temp_speed = getSpeed();
			if (temp_speed >= 30) {
				setSpeed(temp_speed - 30);
				int temp_gear = getGearNumber();
				if (temp_gear >= 2) {
					setGearNumber(temp_gear - 1);
				}
			}
		}
		else {
			cout << "PLEASE START ENGINE " << endl;
		}
	}
	void display() {
		cout << "--------------CAR INFORMATION------------" << endl;
		Vehicle::display();
	}
};

class MotorCycle: public Vehicle {
public:
	MotorCycle(double motor_price, string motor_brand) :Vehicle(motor_price, motor_brand) {
		cout << "MOTORCYCLE CONSTRUCTURE WORKED " << endl;
	}
	void incraiseSpeed() {
		if (getIsWork()) {
			int temp_speed = getSpeed();
			if (temp_speed <= 110) {
				setSpeed(temp_speed + 20);
				int temp_gear = getGearNumber();
				if (temp_gear < 6) {
					setGearNumber(temp_gear + 1);
				}
			}
		}
		else {
			cout << "PLEASE START ENGINE " << endl;
		}
	}
	void decraiseSpeed() {
		if (getIsWork()) {
			int temp_speed = getSpeed();
			if (temp_speed >= 20) {
				setSpeed(temp_speed - 20);
				int temp_gear = getGearNumber();
				if (temp_gear >= 2) {
					setGearNumber(temp_gear - 1);
				}
			}
		}
		else {
			cout << "PLEASE START ENGINE " << endl;
		}
	}
	void display() {
		cout << "--------------MOTORCYCLE INFORMATION------------" << endl;
		Vehicle::display();
	}
};
