#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Turkish");

    char temp[25]={};
    int ders_sayisi,i;
    float Final[15],vize[15],dersort;
    float kredi[15],harfnotu[15];




    printf("ders sayinizi giriniz: ");
    scanf("%d",&ders_sayisi);
    printf("\n------------------------------------------------------------------------------------------------------------------------");


         for(i=0;i<ders_sayisi;i++){
    printf("\n%d.  dersin adini giriniz: ",i+1);
    scanf("%s",temp);
    printf("\n%s    dersinizin vize notu: ",temp);
    scanf("%f",&vize[i]);
    printf("%s    dersinizin final notu: ",temp);
    scanf("%f",&Final[i]);
    printf("%s    dersinizin kredisi: ",temp);
    scanf("%f",&kredi[i]);
    dersort=Final[i]+vize[i];
    printf("%s    dersinin ortalamasý: %.3f\n",temp,dersort/2);
    printf("\n------------------------------------------------------------------------------------------------------------------------");
    if(dersort/2>=90)
        harfnotu[i]=4;
    if(dersort/2<90 && dersort/2>=80)
        harfnotu[i]=3.5;
    if(dersort/2<80 && dersort/2>=75)
        harfnotu[i]=3;
    if(dersort/2<75 && dersort/2>=70)
        harfnotu[i]=2.5;
    if(dersort/2<=69 && dersort/2>=60)
        harfnotu[i]=2;
    if(dersort/2<=59 && dersort/2>=50)
        harfnotu[i]=1.5;
    if(dersort/2<=49 && dersort/2>=40)
        harfnotu[i]=1;
    if(dersort/2<=39 && dersort/2>=30)
        harfnotu[i]=0.5;
    if(dersort/2<=29 )
        harfnotu[i]=0;
    }

    float sayac=0,ortalama=0,sayac1=0;
    for(i=0;i<ders_sayisi;i++){
       ortalama=kredi[i]*harfnotu[i];
       sayac=sayac+ortalama;
       sayac1=sayac1+kredi[i];

    }
    printf("\n\n  donem sonu ortalamanýz:%.3f\n",sayac/sayac1);
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");

    return system("PAUSE");

}


















