#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, a, b, total = 0, count = 1;
    while (1)
    {
        printf("Iki adet sifirdan buyuk tamsayi giriniz : ");
        scanf("%d %d", &num1, &num2);
        if (num1 > 0 && num2 > 0)
            break;
        else
            printf("Hata!! Sayilar sifirdan buyuk olmali \n");
    }
    a = num1;
    b = num2;
    while (1)
    {
        if (a % 2 == 1)
            total += b;
        if (a == 1)
            break;
        a /= 2;
        b *= 2;
        count++;
    }
    printf("-----------------------------\n");
    printf("Carpim kulesi ile hesaplanan sonuc = %d \n", total);
    printf("kule yuksekligi = %d\n", count);

    return 0;
}
