#include "matrix.h"

int main()
{
    Matrix matrix;
    for (int i = 0; i <matrix.getRowNumber(); i++) {
        for (int j = 0; j < matrix.getColumnNumber(); j++) {
            matrix.setValue(i, j, i * j);
        }
    }
    matrix.display();
    Matrix matrix2;
    matrix2 = matrix;
    matrix2.display();
}
