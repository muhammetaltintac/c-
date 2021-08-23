#include <iostream>
using namespace std;


class Shapes {
private:
	double shapeArea;
	double shapeCircumFerence;
public:
	double getShapeArea()  const { return shapeArea; };
	double getShapeCircumFerence() const { return shapeCircumFerence; };
	void setShapeArea(double shape_area ) { shapeArea = shape_area; };
	void setShapeCircumFerence(double f=1 ) { shapeCircumFerence = f; };
	virtual void calculateArea() = 0;
	virtual void calculatePerimeter() = 0;
	virtual void display() = 0;

};
class Circle : public Shapes{
private:
	double radius;
public:
	double pi = 3.14159265;

	Circle(double radiuss=1 ) {
		if (radiuss > 0)
			radius = radiuss;
		else
			radius = 1;
	}
	void calculateArea() {

		double  cir_area = pi * (radius * radius);
		setShapeArea(cir_area);
	}
	void calculatePerimeter() {

		double cir_fer = 2 * pi * radius;
		setShapeCircumFerence(cir_fer);
	}
	void display() {
		cout << "CIRCLE CIRCIUMFERENCE: " << getShapeCircumFerence()<<endl;
		cout << "CIRCLE AREA: " << getShapeArea()<<endl;
	}
}; 
class Rectangle : public Shapes {
private:
	double high;
	double widgh;
public:
	Rectangle(double hig=1 , double wid=1 ) {
		high = hig;
		widgh = wid;
		if (hig > 0) {
			high = hig;
		}
		else if (wid > 0) {
			widgh = wid;
		}
		else {
			high = 1;
			widgh = 1;
		}
	}
	void calculateArea() {
		double area = high * widgh;
		setShapeArea(area);
		cout << area << endl;
		cout<<getShapeArea();
		
	}
	void calculatePerimeter() {
		double rec_fer = 2 * high + 2 * widgh;
		setShapeCircumFerence(rec_fer);
	
	}
	void display() {
		cout << "RECTANGLE CIRCIUMFERENCE: " << getShapeCircumFerence()<<endl;
		cout << "RECTANGLE AREA: " << getShapeArea()<<endl;
	}

};