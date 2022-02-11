#include <stdio.h>
#include <math.h>

typedef struct ddortgen
{
    double solUstX;
    double solUstY;
    double sagAltX;
    double sagAltY;
} ddortgen;

void dondur90(ddortgen *a)
{
    ddortgen temp;
    temp = *a;
    temp.solUstX = a->solUstY * (-1);
    temp.solUstY = a->solUstX * (-1);
    temp.sagAltX = a->sagAltY * (-1);
    temp.sagAltY = a->sagAltX * (-1);
    *a = temp;
}

int main(int argc, char const *argv[])
{
    ddortgen a;
    printf("Dortgenin bilgilerini giriniz \n");
    printf("(sol ust x, sol ust y, sag alt x, sag alt y) : ");
    scanf("%lf %lf %lf %lf", &a.solUstX, &a.solUstY, &a.sagAltX, &a.sagAltY);

    dondur90(&a);
    printf("-------------------------------\n");
    printf("Agirlik merkezinin etrafinda saat yonunde 90 derece dondukten sonraki degerleri \n");
    printf("*sol ust x, y ve sag alt x, y) : %0.1lf, %0.1lf ve %0.1lf, %0.1lf", a.solUstX, a.solUstY, a.sagAltX, a.sagAltY);
    return 0;
}
