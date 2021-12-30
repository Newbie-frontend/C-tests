#include <stdio.h>
#include <math.h>

float kuvvet(long double agirlik1, long double agirlik2, float uzaklik)
{
    float f;
    f = 6.673 * agirlik1 * agirlik2 / (pow(uzaklik, 2) *  pow(10, 11));
    return f;
}

int main()
{
    int a, b;
    float c;
    printf("Degerleri giriniz : ");
    scanf("%ld %ld %f", &a, &b, &c);
    printf("Cekim : %f \n", kuvvet(a, b, c));
}
