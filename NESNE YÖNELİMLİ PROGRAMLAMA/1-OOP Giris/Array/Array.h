#include <iostream>
using namespace std;

class Array {
	int* data, size, capacity;
	int findIndex(int number, int b = 0);
public:
	Array(int user_capacity = 5);
	~Array();
	Array(const Array& copyArray);
	int getSize() const {
		return size;
	}
	int getCapacity() const {
		return capacity;
	}
	void AddItem(int number);
	void PrintItem();
	void RemoveIndexItems(int index);
	void RemoveItem(int number);
	void FindElemt(int number, int b = 0);
};
Array::Array(int user_capacity) {
	capacity = user_capacity;
	size = 0;
	data = new int[capacity];
	cout << "\nArray is created by capacity" << endl;
}
Array::~Array() {
	delete[] data;
	cout << "Array destroyed" << endl;
}
Array::Array(const Array& copyArray) {
	capacity = copyArray.capacity;
	size = copyArray.size;
	data = new int[capacity];
	for (int i = 0; i < size; i++) {
		data[i] = copyArray.data[i];
	}
	cout << "copy constructed created" << endl;
}

void Array::AddItem(int number) {

	if (size == capacity) {
		int* temp_data = new int[capacity * 2];
		for (int i = 0; i < size; i++) {
			temp_data[i] = data[i]; //ilk önce gerçek data dizimizi geçici data dizisine kaydediyoruz 
		}
		delete[] data;		     //ilk önce ilk data bilgileri için bellekte ayr?lan yer temizleniyor 
		data = temp_data;       //ilk ba?ta kopyalad???m?z geçici datay? gerçek dataya e?itliyoruz
		capacity *= 2;
	}
	data[size] = number;
	size++;
}
void Array::PrintItem() {
	if (size != 0) {
		for (int i = 0; i < size; i++) {
			cout << data[i] << "-";
		}
	}
	cout << "\n" << "capacity: " << capacity << "\tsize: " << size << endl;

}
void Array::RemoveIndexItems(int index) {

	if (index < 0 || index >= size) {
		cout << "ERROR!! \t please enter a real index value" << endl;
		return;
	}
	int removeitem = data[index];
	for (int i = index; i< size; i++) {
		data[i] = data[i + 1];
	}
	size =size- 1;
	cout << "destroyed item: " << removeitem <<"\tindex: "<<index<< endl;
}

//void RemoveItem(int number);


void Array::RemoveItem(int number) {
	int counter = 0;
	for (int i = 0; i <= size; i++) {
		if (data[i] == number) {
			for (int j = i; j < size; j++) {
					data[j] = data[j + 1];
			}
				counter += 1;
				i -= 1;  // i her defasýnda 0 lanmalý çünkü index kaydýrmasýnda eleaman kaçýrmamak için
			}
		
		}
		cout << "item " << number << "  are deleted " << counter << " times" << endl;
		size -= counter;
	}

// int findIndex(int number, int b = 0);

int Array::findIndex(int number, int index) {

	for (int i = index; i < size; i++) {
		if (data[i] == number) 
			return i;			
	}
	return -1;
}

void Array::FindElemt(int number, int index) {

	int result = findIndex(number,index);
	if (result != -1) {
		cout << number << " was founded at " << result << endl;
	}
	else
		cout << "number didn't found" << endl;

}
