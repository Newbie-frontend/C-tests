#include <stdio.h>

void toplamPara(int a, int b, int c, int d, int *lira, int *kurus)
{
    int toplam = (a * 50 + b * 25 + c * 10 + d * 5);
    *lira = toplam / 100;
    *kurus = toplam - (*lira) * 100;
}

int main()
{
    int elli, yirmiBes, on, bes;
    int lira, kurus;

    printf("50Krs miktarini giriniz : ");
    scanf("%d", &elli);
    printf("25Krs miktarini giriniz : ");
    scanf("%d", &yirmiBes);
    printf("10Krs miktarini giriniz : ");
    scanf("%d", &on);
    printf("5Krs miktarini giriniz : ");
    scanf("%d", &bes);

    toplamPara(elli, yirmiBes, on, bes, &lira, &kurus);
    printf("-----------------------------\n");
    printf("Toplam parasal deger %d Lira %d kurustur \n", lira, kurus);

    return 0;
}