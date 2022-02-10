#include <stdio.h>
#include <math.h>

typedef struct cember
{
    double merkezx;
    double merkezy;
    double yaricap;
} cember;

void tegetYap(cember ilk, cember *son, char eksen)
{
    if (eksen == 'x')
    {
        *son = ilk;
        if (ilk.merkezy < 0)
            son->merkezy = ilk.yaricap * (-1);
        else if (ilk.merkezy > 0)
            son->merkezy = ilk.yaricap;
    }
    else if (eksen == 'y')
    {
        *son = ilk;
        if (ilk.merkezx < 0)
            son->merkezx = ilk.yaricap * (-1);
        else if (ilk.merkezx > 0)
            son->merkezx = ilk.yaricap;
    }
}

int main(int argc, char const *argv[])
{
    cember ilk, son;
    char ekesn;
    printf("Cember hangi eksen teget yapilacak ? : ");
    scanf("%c", &ekesn);
    printf("Cemberin bilgilerini giriniz (x, y, r)  : ");
    scanf("%lf %lf %lf", &ilk.merkezx, &ilk.merkezy, &ilk.yaricap);

    tegetYap(ilk, &son, ekesn);
    printf("----------------------------------------\n");
    printf("Cemberin yeni merkezx = %.1lf, merkezy = %0.1lf, yaricap = %0.1lf", son.merkezx, son.merkezy, son.yaricap);
    return 0;
}
