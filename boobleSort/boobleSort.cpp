#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    srand(time(0));
    int boyut=10;
    int* dizi = new int[boyut];


    for (int i = 0; i <boyut; i++) {
        dizi[i] = rand() % 12025;
        cout << dizi[i]<<endl;
    }
    cout << sizeof(dizi[4]);
    for (int i = 0; i < boyut; i++) {
        for (int j = boyut-1; j >=0; j--) {
            if (dizi[j] < dizi[j - 1]) {
                int temp[2]; temp[0] = 0;temp[1]=0;
                temp[0] = dizi[j - 1];
                temp[1] = dizi[j];
                dizi[j - 1] = temp[1];
                dizi[j] = temp[0];

            }
        }
    }
    cout << endl;
    for (int i = 0; i < boyut; i++) {
        cout << dizi[i] << "\t";
    }
}

