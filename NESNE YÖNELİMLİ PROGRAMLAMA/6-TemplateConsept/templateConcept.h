#include <iostream>
using namespace std;

template <class type>
class number {
private:
	type data;
	template <class type>
	friend ostream& operator <<( ostream&, const number<type>&);
	template <class type>
	friend istream& operator >>( istream&, number<type>&);
public:
	number(type unknowingNumber=0) {
		data = unknowingNumber;
	}
	type getData() { return data; };
	type operator +(const number&);
	void operator +=(const number&);
	void operator +=(type num);
};

template <class type>
type number<type>::operator+(const number& oth) {
	return data + oth.data;
}
template <class type>
void number<type>::operator+=(const number& oth) {
	data += oth.data;
	
}
template <class type>
void number<type>::operator+=(type num) {
	data += num;
	
}
template <class type>
ostream& operator<<( ostream& object, const number<type>& oth) {
	object << oth.data<<endl;
	return object;
}
template <class type>
istream& operator >>( istream& object, number<type>& oth) {
	object >> oth.data;
	return object;
}