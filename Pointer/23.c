#include <stdio.h>

void bulBozuklukSayisi(double para, int *a, int *b, int *c, int *d, int *e)
{
    *a = (int)para;
    *b = (int)((para - (*a)) / 0.5);
    *c = (int)((para - (*a) - (*b) * 0.5) / 0.25);
    *d = (int)((para - (*a) - (*b) * 0.5 - (*c) * 0.25) / 0.10);
    *e = (int)((para - (*a) - (*b) * 0.5 - (*c) * 0.25 - (*d) * 0.10) / 0.05);
}

int main()
{
    double para = -1;
    int lira, elli, yirmibes, on, bes;
    while (para < 0)
    {
        printf("Para miktarini giriniz : ");
        scanf("%lf", &para);
    }
    bulBozuklukSayisi(para, &lira, &elli, &yirmibes, &on, &bes);
    printf("-----------------------------\n");
    printf("%d adet 1TL \n", lira);
    printf("%d adet 50Krs \n", elli);
    printf("%d adet 25Krs \n", yirmibes);
    printf("%d adet 10Krs \n", on);
    printf("%d adet 5Krs \n", bes);

    return 0;
}