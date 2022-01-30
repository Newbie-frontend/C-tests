#include <stdio.h>

void premutasyonKombinasyon(int, int, double *, double *);
int faktoriyel(int);

int main()
{
    int n = 3, r = 2;
    double p, c;
    /* p:Permutasyon, c:Kombinasyon */
    premutasyonKombinasyon(n, r, &p, &c);
    printf("premutasyon = %.1f \nKombinasyon = %.1f\n", p, c);
    return 0;
}
void premutasyonKombinasyon(int n, int r, double *p, double *c)
{

    *p = faktoriyel(n)/faktoriyel(n-r);
    *c = *p / faktoriyel(r);
}
int faktoriyel(int a)
{
    int total = 1;
    for (int i = 1; i <= a; i++)
        total *= i;
    return total;
}