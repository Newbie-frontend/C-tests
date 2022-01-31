#include <stdio.h>
#include <math.h>

float noktakaydir(int, int, float *, float *);

int main()
{
    float x = 2.5, y = 2.5, msf;
    int yatay = 5, dusey = 4;
    float *newX, *newY;
    newX = &x;
    newY = &y;
    msf = noktakaydir(yatay, dusey, newX, newY);
    printf("%0.2f, %0.2f, %0.2f", x, y, msf);
}
float noktakaydir(int yat, int dus, float *newX, float *newY)
{
    float msf;
    *newX += yat;
    *newY += dus;
    msf = sqrt(pow(abs(yat), 2) + pow(abs(dus), 2));
    return msf;
}