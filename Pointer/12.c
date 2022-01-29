#include <stdio.h>

void cevir(int num, int *a, int *b, int *c, int *d)
{
    *a = num / 1000;
    *b = (num %1000)/100;
    *c = (num %100)/10;
    *d = num %10;
}

int main()
{
    int olcu = -1;
    int metre, dm, cm, mm;
    while (olcu < 0)
    {
        printf("Milimetre cinsinden toplam uzunlugu giriniz : ");
        scanf("%d", &olcu);
    }
    cevir(olcu, &metre, &dm, &cm, &mm);
    printf("-----------------------------\n");
    printf("Olcunu cevirmis hali \n");
    printf("Metre : %d \nDm : %d \nCm : %d \nMm : %d \n", metre, dm, cm, mm);

    return 0;
}