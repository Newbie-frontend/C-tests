#include <stdio.h>

void buyukBul(int, int, int, int, int *, int *);

int main()
{
    int pay1 = 2, payda1 = 5, pay2 = 1, payda2 = 3;
    int buyukPay, buyukPayda;
    buyukBul(pay1, payda1, pay2, payda2, &buyukPay, &buyukPayda);
    printf("Buyuk = %d / %d", buyukPay, buyukPayda);
}
void buyukBul(int a, int b, int c, int d, int *pay, int *payda)
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
    int kmm = b * d / bmm;
    if ((a * kmm / b) > (c * kmm / d))
    {
        *pay = a;
        *payda = b;
    }
    else
    {
        *pay = c;
        *payda = d;
    }
}