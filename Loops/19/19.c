#include <stdio.h>

int main () {
    int Age, count;
    float total = 0;
    printf("Ailedeki birey sayisi kac ?\n");
    scanf("%d", &count);
    printf("%d kisinin yaslarini giriniz :\n", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &Age);
        if (Age <= 0  || Age > 100){
            printf("Yas 1 ile 100 arasi olmasi gerek. Yeniden giriniz.\n");
            i--;
        }
        else if (Age >= 1 && Age <= 10)
            total += 1;
        else if (Age >= 11 && Age <= 17)
            total += 1.5;
        else if (Age >= 18 && Age <= 26)
            total += 4.75;
        else if (Age >= 27 && Age <= 50)
            total += 7;
        else
            total +=5.25;
    }
    printf ("Odenecek toplam ucret %.2f TL", total);

    return 0;
}
