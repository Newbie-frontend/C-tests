#include <stdio.h>
#include <math.h>

typedef struct ddortgen
{
    double solUstX;
    double solUstY;
    double sagAltX;
    double sagAltY;
} ddortgen;

void merkezAl(ddortgen *a)
{
    double dx, dy;
    dx = fabs(a->sagAltX - a->solUstX);
    dy = fabs(a->sagAltY - a->solUstY);
    a->sagAltX = dx / 2;
    a->solUstX = (dx / 2) * -1;
    a->sagAltY = (dy / 2) * -1;
    a->solUstY = dy / 2;
}

int main(int argc, char const *argv[])
{
    ddortgen a;
    printf("Dortgenin bilgilerini giriniz \n");
    printf("(sol ust x, sol ust y, sag alt x, sag alt y) : ");
    scanf("%lf %lf %lf %lf", &a.solUstX, &a.solUstY, &a.sagAltX, &a.sagAltY);

    merkezAl(&a);
    printf("-------------------------------\n");
    printf("Agirlik merkezi origin olduktan sonraki degerleri \n");
    printf("*sol ust x, y ve sag alt x, y) : %0.1lf, %0.1lf ve %0.1lf, %0.1lf", a.solUstX, a.solUstY, a.sagAltX, a.sagAltY);
    return 0;
}
