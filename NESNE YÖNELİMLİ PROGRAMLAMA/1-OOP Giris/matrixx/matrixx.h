#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

class Matrix {
private:
	int row, column;
	int** matrix;
public:
	Matrix(int r = 5, int c = 5);
	~Matrix();
	Matrix(const Matrix& oth);
	int getRowNumber() const { return row; };
	int getColumnNumber() const { return column; }
	void setValue(int r, int c, int value);
	void rondomSet();
	void identityMatrixSet();
	void display();
	void addMatrix(Matrix& othMatrix);
};
Matrix::Matrix(int r, int c) {
	if (r > 0 && c > 0) {
		row = r;
		column = c;
	}
	else {
		row = 5;
		column = 5;
	}
	matrix = new int* [row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[column];
	}
	cout << "MATRIX CREATED" << endl;
}
Matrix::~Matrix() {
	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	cout << "MATRIX DERSTROYED" << endl;
}
Matrix::Matrix(const Matrix& oth) {
	row = oth.row;
	column = oth.column;
	matrix = new int* [row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[column];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			matrix[i][j] = oth.matrix[i][j];
		}
	}
}
void Matrix::setValue(int r, int c, int value) {

	matrix[r][c] = value;
}
void Matrix::display() {
	cout << "MATRIX" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

/*void Matrix::rondomSet(){
	srand(time(NULL));
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			matrix[i][j] = rand() % 10;
		}
	}

}*/
void Matrix::rondomSet() {
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
}
void Matrix::identityMatrixSet() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (i == j)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
		}
	}
}
void Matrix::addMatrix(Matrix& othMatrix) {
	Matrix result(row,column);
	
		for (int i = 0; i < result.row; i++) {
			for (int j = 0; j < result.column; j++) {
				result.matrix[i][j] = matrix[i][j] + othMatrix.matrix[i][j];
			}
		}
		result.display();
	
}