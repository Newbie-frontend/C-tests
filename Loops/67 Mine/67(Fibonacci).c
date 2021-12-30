#include <stdio.h>

int main() {
    int toplam , birinciSayi, ikinciSayi, sayi, i;// degisgenleri belirlemek
    birinciSayi = 1; ikinciSayi = 1; toplam = 0;
    printf("\nFibonacci sayilarini kaca kadar gormek istiyorsunuz ? Sayiyi giriniz : ");
    scanf("%d", &sayi);//bir sayi aliriz
    //serinin ilk 2 elemanini yazdiririz
    printf("\nFibonacci sayilari %d'e/a kadar : %d  %d  ",sayi , birinciSayi, ikinciSayi);
    while (1 == 1)//dongu ile diger sayilari bulup yazdiririz
    {
    toplam = birinciSayi + ikinciSayi;
    if (toplam> sayi)//seriyi hangi sayiya kadar gormek istedigimizi aldigimiz sayila kontrol ederiz
        break;
    printf("%d  ", toplam);
    birinciSayi = ikinciSayi;
    ikinciSayi = toplam;
    }
    printf("\n");

    return 0;
}
