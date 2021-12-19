#include <stdio.h>

int main() {
    char buyuk, kucuk;//Harflari gostermek icin 2 sayi belirtiyoruz
    printf("ASCII KOD\tB.KARAKTER\tK.KARAKTER\n");
    for (int i = 65; i <= 84; i++)
    {
        buyuk = i;
        kucuk = i + 32;// Kucuk harflar 32 sayi buyuklerden daha buyuk
        printf("%d\t\t%c\t\t%c\n", i, buyuk, kucuk);//Guzellestirmek icin tab kullaniyoruz
    }

    printf("\n");

    return 0;
}
