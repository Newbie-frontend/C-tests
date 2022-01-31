#include <stdio.h>
#include <math.h>

void otele(float *, float *, float *, float *, float, float, float, float);

int main()
{
    float aX1 = 2, aY1 = 4, aX2 = 4, aY2 = 2;
    float bX1 = 6, bY1 = 10, bX2 = 10, bY2 = 6;
    otele(&aX1, &aY1, &aX2, &aY2, bX1, bY1, bX2, bY2);
    printf("aX1= %.1f, aY1= %.1f, aX2= %.1f, aY2= %.1f", aX1, aY1, aX2, aY2);
    return 0;
}
void otele(float *aX1, float *aY1, float *aX2, float *aY2, float bX1, float bY1, float bX2, float bY2)
{
    float x, y, dx, dy;
    x = (bX1 + bX2) / 2;
    y = (bY1 + bY2) / 2;
    dx = (*aX2) - (*aX1);
    dy = (*aY1) - (*aY2);
    *aX1 = x - dx / 2;
    *aX2 = x + dx / 2;
    *aY1 = y + dy / 2;
    *aY2 = y - dy / 2;
}