#include <stdio.h>

typedef struct zaman 
{
    int saniye;
    int dakika;
    int saat;
} zaman;

void zamansirala(zaman *a1, zaman *a2)
{
    zaman temp;
    if(a1->saat > a2->saat){
        temp = *a1;
        *a1 = *a2;
        *a2 = temp;
    }
    else if (a1->saat == a2->saat && a1->dakika > a2->dakika)
    {
        temp = *a1;
        *a1 = *a2;
        *a2 = temp;
    }
    else if (a1->saat == a2->saat && a1->dakika == a2->dakika && a1->saniye > a2->saniye)
    {
        temp = *a1;
        *a1 = *a2;
        *a2 = temp;
    }
}
void printFunction(zaman a1){
    if (a1.saat < 10)
        printf("0%d:", a1.saat);
    else
        printf("%d:", a1.saat);
    if (a1.dakika < 10)
        printf("0%d:", a1.dakika);
    else
        printf("%d:", a1.dakika);
    if (a1.saniye < 10)
        printf("0%d", a1.saniye);
    else
        printf("%d", a1.saniye);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    //define and get variables
    zaman a1, a2;
    printf("Birinci zamani giriniz : ");
    scanf("%d:%d:%d", &a1.saat, &a1.dakika, &a1.saniye); // 23:30:20
    printf("ikinci zamani giriniz : ");
    scanf("%d:%d:%d", &a2.saat, &a2.dakika, &a2.saniye); // 01:00:40

    // for adding 2 times
    zamansirala(&a1, &a2);
    
    // to show the time in true format
    printf("Kucuk Olan Zaman (a1) : ");
    printFunction(a1);
    printf("Buyuk Olan Zaman (a2) : ");
    printFunction(a2);


    return 0;
}
