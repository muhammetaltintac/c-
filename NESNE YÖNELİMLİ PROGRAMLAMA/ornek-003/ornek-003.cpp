#include "ornek-003.h"


int main()
{
    /* Array  ornek1(7);
     Array ornek2(ornek1);

    cout<<"size:" <<ornek1.getSize()<<endl;
    cout<<"capacity: "<<ornek1.getCapacity()<<endl;

    cout << "size:" << ornek2.getSize() << endl;
    cout << "capacity: " << ornek2.getCapacity() << endl;*/

    Array mainArray;
    mainArray.AddItem(1);
    mainArray.AddItem(2);
    mainArray.AddItem(9);
    mainArray.AddItem(2);
    mainArray.AddItem(6);
    mainArray.AddItem(2);
    mainArray.AddItem(5);
    mainArray.AddItem(3);
    mainArray.AddItem(4);
    mainArray.AddItem(2);
    mainArray.AddItem(4);
    mainArray.AddItem(4);
    mainArray.AddItem(5);
    mainArray.AddItem(5);
    mainArray.AddItem(7);
    mainArray.AddItem(8);
    mainArray.AddItem(9);
    mainArray.AddItem(9);
    mainArray.AddItem(9);
    mainArray.AddItem(10);
    mainArray.PrintItem();
    cout << "\n";
   mainArray.RemoveIndexItems(5);
    mainArray.PrintItem();
    cout << "\n";
    mainArray.RemoveItem(9);
    mainArray.RemoveItem(5);
    mainArray.RemoveItem(2);
    mainArray.RemoveItem(4);
    mainArray.PrintItem();
    mainArray.FindElemt(7);
    mainArray.FindElemt(84);

    return 0;


}
