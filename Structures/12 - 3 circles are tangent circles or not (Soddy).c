#include <stdio.h>
#include <math.h>

typedef struct cember
{
    double x;
    double y;
    double r;
} cember;

int isSoddy(cember *c)
{
    int count = 0;
    double d;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = i + 1; j < 3; j++)
        {
            d = sqrt(pow(c[i].x - c[j].x, 2) + pow(c[i].y - c[j].y, 2));
            if (d == c[i].r + c[j].r)
                count++;
        }
    }
    if (count == 3)
        return 1;
    else 
        return 0;
}

int main(int argc, char const *argv[])
{
    cember circle[3];
    for (size_t i = 0; i < 3; i++)
    {
        printf("%d. Cemberin koordinatlarini ve yaricapini giriniz (x, y, r): ", i + 1);
        scanf("%lf %lf %lf", &circle[i].x, &circle[i].y, &circle[i].r);
    }

    int n = isSoddy(circle);
    printf("----------------------------------------\n");
    if (n == 1)
        printf("Bu cemberler soddy cemberleridir.");
    else if (n == 0)
        printf("Soddy cemberleri degiller.");
    return 0;
}
