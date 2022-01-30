#include <stdio.h>

void sadelestir(int a, int b, int c, int d, int *pay, int *payda)
{
    int kucuk;
    if (b > d)
        kucuk = d;
    else
        kucuk = b;

    int bmm;
    for (int i = kucuk; i >= 1; i--)
    {
        if (b % i == 0 && d % i == 0)
        {
            bmm = i;
            break;
        }
    }
    *payda = b * d / bmm;
    *pay = a * d / bmm + c * b / bmm;
}

int main()
{
    int bn, bm, in, im;
    int pay, payda;
    printf("Birinci ifadenin payini ve paydasini giriniz : ");
    scanf("%d %d", &bn, &bm);
    printf("Ikinci ifadenin payini ve paydasini giriniz : ");
    scanf("%d %d", &in, &im);
    sadelestir(bn, bm, in, im, &pay, &payda);
    printf("--------------------------------------\n");
    printf("  %d       %d       %d   \n", bn, in, pay);
    printf("----- + ----- = ------ \n");
    printf("  %d       %d       %d   \n", bm, im, payda);
    return 0;
}
