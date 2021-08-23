#include "templateConcept.h"
// fonction tamplate
/*template <class type>   
								//bu araya herhangi bir şey girmemeli ya boş olmalı yada direk bitişik olmalı
type max(type a, type b) {
	type c;
	a > b ? c = a : c = b;
	return c;
}
*/

int main()
{
	/*
	cout<<max(3, 2)<<endl;
	cout<<max('a', 'b')<<endl;
	cout<<max(7.2, 9.5);
	*/
	number<int> numberInt(5);
	number<float> numberFloat(7.4);
	number<double> numberDouble(8.2);
	cout << numberInt;
	cout << numberFloat;
	cout << numberDouble;
	cout << "-------------------------------\n";
	number<int> numberInt2(8);
	number<float> numberFloat2(4.489);
	number<double> numberDouble2(1.562);
	cout << numberInt + numberInt2 << endl;
	cout << numberFloat + numberFloat2 << endl;
	cout << numberDouble + numberDouble2<<endl;
	cout << "-------------------------------\n";
	number<int> numberInt3(15);
	number<float> numberFloat3(87.4);
	number<double> numberDouble3(81.212);
	numberInt += numberInt3;
	numberFloat += numberFloat3;
	numberDouble += numberDouble3;
	cout << numberInt.getData() << endl;
	cout << numberFloat.getData() << endl;
	cout << numberDouble.getData() << endl;
	cout << "-------------------------------\n";
	numberInt += 3;
	numberFloat += 3.3;
	numberDouble +=3.456;
	cout << numberInt.getData() << endl;
	cout << numberFloat.getData() << endl;
	cout << numberDouble.getData() << endl;
	number<int> numberInt4;
	number<float> numberfloat4;
	number<double> numberDouble4;

	cout << "enter a value"<<endl;
	cin >> numberInt4>>numberfloat4>>numberDouble4;
	cout << numberInt4;
	cout << numberfloat4;
	cout << numberDouble4;
	cout << "-------------------------------\n";

	
}
