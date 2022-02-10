#include <stdio.h>

typedef struct tarih
{
    int gun;
    int ay;
    int yil;
} tarih;

void buyukOlaniBul(tarih a1, tarih a2, tarih *a3)
{
    if (a1.yil > a2.yil)
        *a3 = a1;
    else if (a1.yil < a2.yil)
        *a3 = a2;
    else if (a1.ay > a2.ay)
        *a3 = a1;
    else if (a1.ay < a2.ay)
        *a3 = a2;
    else if (a1.gun > a2.gun)
        *a3 = a1;
    else if (a1.gun < a2.gun)
        *a3 = a2;
        
}

int main(int argc, char const *argv[])
{
    // define and get variables
    tarih a1, a2, a3;
    printf("1. tarihi giriniz : ");
    scanf("%d %d %d", &a1.yil, &a1.ay, &a1.gun);
    printf("2. tarihi giriniz : ");
    scanf("%d %d %d", &a2.yil, &a2.ay, &a2.gun);

    // for finding the more recent one
    buyukOlaniBul(a1, a2, &a3);

    // to show the time in true format
    printf("Girilen iki tarihten daha ileri olan ");
    if (a3.yil < 10)
        printf("0%d/", a3.yil);
    else
        printf("%d/", a3.yil);
    if (a3.ay < 10)
        printf("0%d/", a3.ay);
    else
        printf("%d/", a3.ay);
    if (a3.gun < 10)
        printf("0%d", a3.gun);
    else
        printf("%d", a3.gun);
    printf(" dir");

    return 0;
}
