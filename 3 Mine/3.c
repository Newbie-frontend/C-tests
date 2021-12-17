#include <stdio.h>

int main() {
    char buyuk, kucuk;
    printf("ASCII KOD\tB.KARAKTER\tK.KARAKTER\n");
    for (int i = 65; i <= 84; i++)
    {
        buyuk = i;
        kucuk = i + 32;
        printf("%d\t\t%c\t\t%c\n", i, buyuk, kucuk);
    }

    printf("\n");

    return 0;
}
