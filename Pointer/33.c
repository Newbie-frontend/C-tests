#include <stdio.h>
#include <math.h>

void hangiUcuDahaYakin(float, float, float, float, float *, float *);

int main()
{
    float x1 = 0, y1 = 4, x2 = 3, y2 = 0;
    float x, y;
    hangiUcuDahaYakin(x1, y1, x2, y2, &x, &y);
    printf("Orijine daha yakin olan x=%0.1f, y=%0.1f", x, y);
    return 0;
}
void hangiUcuDahaYakin(float a, float b, float c, float d, float *x, float *y)
{
    float first, second;
    first = sqrt(pow(a, 2) + pow(b, 2));
    second = sqrt(pow(c, 2) + pow(d, 2));
    if (first < second)
    {
        *x = a;
        *y = b;
    }
    else
    {
        *x = c;
        *y = d;
    }
}