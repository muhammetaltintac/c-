#include <iostream>
#include <string>
using namespace std;

class bankAccount {
public:
	bankAccount(string name, string surname, float balance = 0, string phone_number = "");
	bankAccount(const bankAccount& oth);
	~bankAccount();
	bool controlNameSurname(string nameorsurname);
	bool controlPhoneNumber(string phoneNumber);
	void operator +(float);
	void operator -(float);
	void sendMoney(bankAccount& othAccount, float Amount);
	void setPersonalName(string name);
	void setPersonalSurname(string surname);
	void setPersonalPhone(string phone);
	void setPersonalBalance(float balance = 0);
	float getPersonalBalance() const { return accountBalance; }
	string getPersonalName() const { return personalName; }
	string getPersonalSurname() const { return personalSurname; }
	string getPersonalPhone() const { return personalPhone; }
private:
	friend ostream& operator <<(ostream&, const bankAccount&);
	float accountBalance;
	string personalName, personalSurname, personalPhone;
};
bool bankAccount::controlNameSurname(string nameorsurname) {
	for (unsigned i = 0; i < nameorsurname.length(); i++) {
		if (!((nameorsurname.at(i) >= 'A' && nameorsurname.at(i) <= 'Z') || (nameorsurname.at(i) >= 'a' && nameorsurname.at(i) <= 'z'))) {
			return false;
		}
	}
	return true;
}
bool bankAccount::controlPhoneNumber(string phoneNumber) {
	if (phoneNumber.empty()) {
		return true;
	}
	if (phoneNumber.length() != 11) {
		return false;
	}
	for (unsigned i = 0; i < phoneNumber.length(); i++) {
		if (!(phoneNumber.at(i) >= '0' && phoneNumber.at(i) <= '9'))
			return false;
	}
	return true;
}
void bankAccount::setPersonalName(string name) {
	while (!controlNameSurname(name)) {
		cout << "INVALID NAME-->> PLEASE ENTER YOUR NAME: ";
		getline(cin, name);
	}
	personalName = name;
}
void bankAccount::setPersonalSurname(string surname) {
	while (!controlNameSurname(surname)) {
		cout << "INVALID SURNAME-->> PLEASE ENTER YOUR SURNAME: ";
		getline(cin, surname);
	}
	personalSurname = surname;
}
void bankAccount::setPersonalPhone(string phone) {
	while (!controlPhoneNumber(phone)) {
		cout << "INVALID PHONE-->> PLEASE ENTER YOUR PHONE: ";
		getline(cin, phone);
	}
	personalPhone = phone;
}
void bankAccount::setPersonalBalance(float Balance) {
	if (Balance >= 0)
		accountBalance = Balance;
	else
		accountBalance = 0;
}
bankAccount::bankAccount(string name,string surname,float balance,string phone_number) {
	setPersonalName(name);
	setPersonalSurname(surname);
	setPersonalPhone(phone_number);
	setPersonalBalance(balance);
	cout << "BANK ACCOUNT CREATED " << endl;
}
bankAccount::bankAccount(const bankAccount& oth) {
	personalName = oth.personalName;
	personalSurname = oth.personalSurname;
	personalPhone = oth.personalPhone;
	accountBalance = oth.accountBalance;
	cout << "COPY CONSTRUCTURE WAS COPIED AT TARGET" << endl;
}
bankAccount::~bankAccount() {
	cout << "BANK ACCOUNT WAS DELETED" << endl;
}
void bankAccount::operator+(float money) {	
			while (!(money > 0)) {
				cout << "PLEASE ENTER BALANCE BIGGIR THAN 0 " << endl;
				cin >> money;
			}
			accountBalance += money;		
}
void bankAccount::operator-(float amount) {	
			while (!(accountBalance >  amount)) {
				cout << "PLEASE YOU ENTER LOW BALANCE THAN YOUR ACCOUNT BALANCE"<<endl;
				cin >> amount;
			}
			accountBalance -= amount;
}
ostream& operator <<(ostream& object, const bankAccount& oth) {
	object << "-------------------------------------------" << endl
		<< "NAME" << oth.personalName << endl
		<< "SURNAME" << oth.personalSurname << endl
		<< "PHONE: " << oth.personalPhone << endl
		<< "BALANCE: " << oth.accountBalance << endl;
	return object;
}
/*void bankAccount::displayProfile() {
	cout << "-------------------------------" << endl;
	cout << "NAME: " << personalName <<  "\n" << "SURNAME: " << personalSurname << endl;
	if (!personalPhone.empty())
		cout << "PHONE: NONE " << endl;
	else
		cout<<"PHONE: " << personalPhone << endl;
	cout << "BALANCE: " << accountBalance<<endl;
}*/
void bankAccount::sendMoney(bankAccount& othAccount, float Amount) {
	while((Amount<0 || Amount> accountBalance)){
		cout << "PLEASE ENTER A REAL VALID" << endl;
		cin >> Amount;
	}
	accountBalance -= Amount;
	othAccount.accountBalance = othAccount.accountBalance + Amount;


}