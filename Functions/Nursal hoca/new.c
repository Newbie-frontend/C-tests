#include <stdio.h>

int k(int n)
{
    int toplam = 1;
    for (int i = 1; i <= n; i++)
    {
        toplam *= i;
    }
    return toplam;
}

int main()
{
    int r, n;
    float p, c;

    printf("N ve r i giriniz :");
    scanf("%d %d", &n, &r);
    c = k(n) / (k(n - r) * k(r));
    printf("Kombinasyon : %f\n", c);
    p = k(n) / (k(n - r) );
    printf("Promosiyon : %f\n", p);
}
