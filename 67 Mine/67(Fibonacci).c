#include <stdio.h>

int main() {
    int toplam , birinciSayi, ikinciSayi, sayi, i;
    birinciSayi = 1; ikinciSayi = 1; toplam = 0;
    printf("\nFibonacci sayilarini kaca kadar gormek istiyorsunuz ? Sayiyi giriniz : ");
    scanf("%d", &sayi);
    printf("\nFibonacci sayilari %d'e/a kadar : %d  %d  ",sayi , birinciSayi, ikinciSayi);
    while (1 == 1)
    {
    toplam = birinciSayi + ikinciSayi;
    if (toplam> sayi)
        break;
    printf("%d  ", toplam);
    birinciSayi = ikinciSayi;
    ikinciSayi = toplam;
    }
    printf("\n");

    return 0;
}
