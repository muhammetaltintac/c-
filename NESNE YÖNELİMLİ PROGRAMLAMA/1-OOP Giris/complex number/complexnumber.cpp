#include "complexnumber.h"
#include <iostream>
using namespace std;
complexnumber::complexnumber(int r, int i) {
	//cout << "CONSTRUCTOR CREATED" << endl;
	reel = r;
	image = i;
}
complexnumber::~complexnumber() {
	//cout << "DESTRUCTOR CREATED" << endl;
}
complexnumber::complexnumber(const complexnumber& oth) {
	//cout << "COMPLEX NUMBER COPÝED TO TARGET" << endl;
	reel = oth.reel;
	image = oth.image;
}
int complexnumber::getReel() {
	return reel;
}
int complexnumber::getImage() {
	return image;
}
void complexnumber::setValue(int r,int i) {
	reel = r;
	image = i;

}

void complexnumber::displayComplexNumber() {
	//while (image == 0)

	image >= 0 ? cout <<"\t\n\n\n" <<reel << "  +  " << image<<"i\n\n\n"<<endl : cout << "\t\n\n\n"<<reel <<"  -  " << image*(-1)<<"i\n\n\n"<<endl;
}
complexnumber complexnumber::addComplex(const complexnumber& oth) {
	complexnumber result;
	result.reel = reel + oth.reel;
	result.image = image + oth.image;
	return result;
}
// add operator overloading
complexnumber complexnumber::operator +(const complexnumber& oth) {
	complexnumber result;
	result.reel = reel + oth.reel;
	result.image = image + oth.image;
	return result;
}
complexnumber complexnumber::substructComplex(const complexnumber& oth) {
	complexnumber result;
	result.reel = reel - oth.reel;
	result.image = image - oth.image;
	return result;
}
// substruct overloading
complexnumber complexnumber::operator-(complexnumber& oth) {
	complexnumber result;
	result.reel = reel - oth.reel;
	result.image = image - oth.image;
	return result;
}

complexnumber complexnumber::multiplyConstant(int constant) {
	complexnumber result;
	result.reel = reel * constant;
	result.image = image * constant;
	return result;
}
// constant multiply overloading
complexnumber complexnumber::operator*(int constant) {
	complexnumber result;
	result.reel = reel * constant;
	result.image = image * constant;
	return result;
}

complexnumber complexnumber::multiplyComplex(const complexnumber& oth) {
	complexnumber result;
	result.reel = reel * oth.reel + image*oth.image*(-1);
	result.image = reel*oth.image+image*oth.reel;
	return result;
}
// multiply overloading
complexnumber complexnumber::operator*(const complexnumber& oth) {
	complexnumber result;
	result.reel = reel * oth.reel + image * oth.image * (-1);
	result.image = reel * oth.image + image * oth.reel;
	return result;
}
ostream& operator <<(ostream& object, const complexnumber& oth) {
	if (oth.image >= 0) {
		object<< "\t\n" << oth.reel << "  +  " << oth.image << "i\n" << endl;
		return object;
	}
	else {
		object<< "\t\n" << oth.reel << "  -  " <<oth.image * (-1) << "i\n" << endl;
		return object;
	}
}
istream& operator >>(istream& object, complexnumber& oth) {
	object >> oth.reel >> oth.image;
	return object;
}

