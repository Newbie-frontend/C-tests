#include <stdio.h>
#include <math.h>

typedef struct cember
{
    double merkezx;
    double merkezy;
    double yaricap;
} cember;

int tegetYap(cember *bir, cember *iki)
{
    if (bir->yaricap > iki->yaricap)
    {
        iki->merkezx = bir->merkezx;
        iki->merkezy = bir->yaricap + iki->yaricap + bir->merkezy;  
    }
    else
    {
        bir->merkezx = iki->merkezx;
        bir->merkezy = iki->yaricap + bir->yaricap + iki->merkezy;  
    }
    
}

int main(int argc, char const *argv[])
{
    cember a, b;
    printf("Birincinin bilgilerini giriniz (x, y, r) : ");
    scanf("%lf %lf %lf", &a.merkezx, &a.merkezy, &a.yaricap);
    printf("ikincinin bilgilerini giriniz (x, y, r)  : ");
    scanf("%lf %lf %lf", &b.merkezx, &b.merkezy, &b.yaricap);

    printf("----------------------------------------\n");
    tegetYap(&a, &b);
    printf("Kucuk olan teget yapildiktan sonra : \n");
    printf("Birinci cemrberin bilgileri : %0.1lf %0.1lf %0.1lf \n", a.merkezx, a.merkezy, a.yaricap);
    printf("ikinci cemberin bilgirleri  : %0.1lf %0.1lf %0.1lf \n", b.merkezx, b.merkezy, b.yaricap);

    return 0;
}
