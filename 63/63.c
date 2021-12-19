#include <stdio.h>
#include <math.h>

float Greater(float a, float b, float c, float d)
{
    if (a > b && a > c && a > d)
        return a;
    else if (b > a && b > c && b > d)
        return b;
    else if (c > a && c > b && c > d)
        return c;
    else
        return d;
}

int main()
{
    int code, kez;
    float num, renault = 0, mazda = 0, honda = 0, ford = 0, renaultCount = 0, mazdaCount = 0, hondaCount = 0, fordCount = 0;
    printf("PROGRAMDAN CIKMAK ICIN MARKA OLARAK 111 GIRINIZ \n");
    for (; 1;)
    {
        printf("Marka, tutar giriniz: ");
        scanf("%d %f", code, num);
        if (code != 1 || code != 2 || code != 3 || code != 4 || code != 111)
        {
            printf("Kodu Dogru girin!");
            continue;
        }
        else if (code == 111)
            break;
        else if (code == 1)
        {
            renault += num;
            renaultCount++;
        }
        else if (code == 2)
        {
            mazda += num;
            mazdaCount++;
        }
        else if (code == 3)
        {
            honda += num;
            hondaCount++;
        }
        else if (code == 4)
        {
            ford += num;
            fordCount++;
        }
    }
    kez = Greater(fordCount, mazdaCount, renaultCount, hondaCount);
    valume = Greater(ford, honda, )
        printf("PROGRAM SONA ERDI");
    printf("OZET BILGILER");
    printf("En cok gelen arac makasi %s (%d kez)", , kez);
    printf("en cok satis yapilan marka %s (%d TL)");

    return 0;
}
