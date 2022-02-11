#include <stdio.h>
#include <math.h>

typedef struct cember
{
    double merkezx;
    double merkezy;
    double yaricap;
} cember;

int tegetMi(cember bir, cember iki)
{
    double d;
    d = sqrt(pow(bir.merkezx - iki.merkezx, 2) + pow(bir.merkezy - iki.merkezy, 2));
    if (d == bir.yaricap + iki.yaricap)
        return 1;
    else   
        return 0;
}

int main(int argc, char const *argv[])
{
    cember a, b;
    printf("Birincinin bilgilerini giriniz (x, y, r) : ");
    scanf("%lf %lf %lf", &a.merkezx, &a.merkezy, &a.yaricap);
    printf("ikincinin bilgilerini giriniz (x, y, r)  : ");
    scanf("%lf %lf %lf", &b.merkezx, &b.merkezy, &b.yaricap);

    printf("----------------------------------------\n");
    if(tegetMi(a, b))
        printf("Cemberler birbirlerine tegettir.");
    else
        printf("Cemberler teget degiller.");

    return 0;
}
