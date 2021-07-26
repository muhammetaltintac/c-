#ifndef COMPLEXNUMBER_1
#define COMPLEXNUMBER_1
#include <iostream>
using namespace std;


class complexnumber
{
private:

	friend ostream& operator <<(ostream&, const complexnumber&);
	friend istream& operator >>(istream& , complexnumber&);
	int reel;
	int image;
public:
	complexnumber operator +(const complexnumber& oth);
	complexnumber operator * (const complexnumber& oth);
	complexnumber operator  -(complexnumber& oth);
	complexnumber operator *(int);
	complexnumber(int r=0, int i=0);
	~complexnumber();
	complexnumber(const complexnumber& oth);
	int getReel();
	int getimage();
	void setValue(int r,int i);

	complexnumber addComplex(const complexnumber& oth);
	complexnumber multiplyComplex(const complexnumber& oth);
	complexnumber substructComplex(const complexnumber& oth);
	complexnumber multiplyConstant(int constant);
	void displayComplexNumber();
};


#endif
