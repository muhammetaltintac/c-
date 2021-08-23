#include "NationalSays.h"

int main()
{
    national* ntn[] = { new TurkishNations("almila"), new TurkishNations("mustafa"), new TurkishNations("hakan"), new DeutchessNation("ellen"), new TurkishNations("semanur"),new DeutchessNation("muller") };
    int x = sizeof(ntn) / sizeof(ntn[0]);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i != j) {
                ntn[i]->says(*ntn[j]);
            }
        }
        cout << endl;
    }


}


