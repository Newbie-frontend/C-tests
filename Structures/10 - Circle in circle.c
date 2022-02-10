#include <stdio.h>
#include <math.h>

typedef struct cember
{
    int x;
    int y;
    double yaricap;
} cember;

void yutaniBul(cember *bir, cember *iki, cember *uc)
{
    double d;
    d = sqrt(pow(bir->x - iki->x, 2) + pow(bir->y - iki->y, 2));
    if (bir->yaricap < iki->yaricap && d + bir->yaricap < iki->yaricap)
        *uc = *iki;
    else if (bir->yaricap > iki->yaricap && d + iki->yaricap < bir->yaricap)
        *uc = *bir;
}

int main(int argc, char const *argv[])
{
    cember a = {10, 8, 4.0}, b = {15, 10, 13.0}, c;

    yutaniBul(&a, &b, &c); // yazdirmak istememis
    return 0;
}
