#include "matrixx.h"

int main()
{
    srand(time(NULL));
    Matrix matrix;
  
    for (int i = 0; i < matrix.getRowNumber(); i++) {
        for (int j = 0; j < matrix.getColumnNumber(); j++) {
            matrix.setValue(i, j, i * j);
        }
    }
    matrix.display();
    Matrix matrix2,matrix3;
    matrix2 = matrix;
    matrix2.display();
    matrix.rondomSet();
    matrix.display();
    matrix.identityMatrixSet();
    matrix.display();
    matrix.addMatrix(matrix2);
    matrix.rondomSet();
    matrix.display();
    matrix3.rondomSet();
    matrix3.display();
    matrix.addMatrix(matrix3);
    matrix3.rondomSet();
    matrix3.display();
    matrix3.rondomSet();
    matrix3.display();
    matrix3.rondomSet();
    matrix3.display();
    matrix3.rondomSet();
    matrix3.display();
    matrix3.rondomSet();
    matrix3.display();


    system("pause");
    return 0;
}
