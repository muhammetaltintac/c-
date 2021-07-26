#include "Shapes.h"
int main()
{
	Shapes* shps[] = { new Circle(4.5), new Rectangle(4.4,6.8),new Circle(1.7), new Rectangle(3.3,7.4) };
	int boyut = sizeof(shps) / sizeof(shps[0]);
	for (int i = 0; i < boyut; i++) {
		shps[i]->calculateArea();
		shps[i]->calculatePerimeter();
		shps[i]->display();
		cout << endl;
	}
	Rectangle rec(1.1, 2.2);
	rec.display();
	rec.calculateArea();
}

