#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <string.h>
using namespace std;












int main()
{
    srand(time(NULL));
    int uzunluk=10, aralik, * dizi1, * dizi2, sayi;
    int a = uzunluk;
    dizi1 = new int[uzunluk];
    dizi2 = new int[uzunluk];
    for (int i = 0; i < uzunluk; i++) {
        dizi1[i] = i;
    }

    cout << endl;
    for (int j = 0; j < a; j++) {
        sayi = rand() % uzunluk;
        dizi2[j] = dizi1[sayi];
        cout << dizi2[j] << "-";
        for (int k = sayi; k < uzunluk; k++) {
            dizi1[k] = dizi1[k + 1];

        }
        uzunluk -= 1;
    }
    char dizi[10][15];
    int i = 0, aa = dizi2[0], b = dizi2[1], c = dizi2[2], d = dizi2[3], e = dizi2[4], f = dizi2[5], g = dizi2[6], h = dizi2[7], j = dizi2[8], k = dizi2[9], l = dizi2[10];

   
    string x;

    cout << "---------SIIR MENUSU-----------\n\n";
    cout << "OTAMATIK SIIR ICIN 1'E BASINIZ.";
    cout << "\nMANUEL SIIR ICIN 2'E BASINIZ\n\n";
    cout << "SIIR MENUSU SECIMI: ";
    cin >> x;
    cout << x;
    
   // cout<< sizeof(x) << sizeof(char);
  
    while (!(x[0] == '1'  || x[0] == '2' )){
       
            cout << "LUTFEN GECERLI BIR IFADE GIRINIZ: ";
            cin >> x;
              
        
    }

    cout << endl;
    switch (x[0])
    {
    case '1':

        for (i = 0; i < 10; i++)
        {
            cout << "LUTFEN SIIRINIZ ICIN "<<i+1<<". KELIMEYI GIRINIZ: ";
            cin >> dizi[i];
        }
        cout << endl;

        cout << dizi[aa] << " " << dizi[b] << " " << dizi[c] << " " << dizi[d] << endl;
        cout << dizi[b] << " " << dizi[e] << " " << dizi[f] << " " << dizi[g] << endl;
        cout << dizi[c] << " " << dizi[f] << " " << dizi[h] << " " << dizi[j] << endl;
        cout << dizi[d] << " " << dizi[g] << " " << dizi[j] << " " << dizi[k] << endl;

        break;


    case '2':

        for (i = 0; i < 10; i++)
        {
            cout << "LUTFEN SIIRINIZ ICIN " << i + 1 << ". KELIMEYI GIRINIZ: ";
            cin >> dizi[i];
        }
        cout << "\n\n";
        cout << dizi[0] << " " << dizi[1] << " " << dizi[2] << " " << dizi[3] << endl;
        cout << dizi[1] << " " << dizi[4] << " " << dizi[5] << " " << dizi[6] << endl;
        cout << dizi[2] << " " << dizi[5] << " " << dizi[7] << " " << dizi[8] << endl;
        cout << dizi[3] << " " << dizi[6] << " " << dizi[8] << " " << dizi[9] << endl;
        break;

    }


    return 0;
}
