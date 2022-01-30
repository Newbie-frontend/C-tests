#include <stdio.h>

void sadelestir(int a, int b, int *pay, int *payda)
{
    *pay = a;
    *payda = b;
    int kucuk;
    if (a > b)
        kucuk = b;
    else
        kucuk = a;

    int bmm;
    for (int i = kucuk; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            bmm = i;
            break;
        }
    }
    *pay /= bmm;
    *payda /= bmm;
}

int main()
{
    int n, m;
    int pay, payda;
    printf("Pay ve payda giriniz : ");
    scanf("%d %d", &n, &m);
    sadelestir(n, m, &pay, &payda);
    printf("--------------------------------------\n");
    printf("Onceki degeri : %d / %d \n", n, m);
    printf("Sadelestirilmis : %d / %d \n", pay, payda);
    return 0;
}
