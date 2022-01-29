#include <stdio.h>

void haftaGunSaatBul(int num, int *a, int *b, int *c)
{
    *a = num / (7 * 24);
    *b = (num - (*a) * (7 * 24)) / 24;
    *c = num - (*a) * (7 * 24) - (*b) * 24;
}

int main()
{
    int num = -1;
    int hafta, gun, saat;
    while (num < 0)
    {
        printf("Sureyi giriniz (Saat) : ");
        scanf("%d", &num);
    }
    haftaGunSaatBul(num, &hafta, &gun, &saat);
    printf("-----------------------------\n");
    printf("Girilen sure : %d Hafta, %d Gun, %d Saat eder", hafta, gun, saat);

    return 0;
}