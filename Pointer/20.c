#include <stdio.h>

void ilerideOlaniBul(double bOrtalama, int bGiris, int bDogan, double iOrtalama, int iGiris, int iDogan, double *Ortalama, int *Giris, int *Dogan)
{
    int temp;
    if (bOrtalama > iOrtalama)
        temp = 1;
    else if (bOrtalama < iOrtalama)
        temp = 2;
    else
    {
        if (bGiris > iGiris)
            temp = 1;
        else if (bGiris < iGiris)
            temp = 2;
        else
        {
            if (bDogan > iDogan)
                temp = 1;
            else if (bDogan < iDogan)
                temp = 2;
            else
                temp = 1;
        }
    }
    if (temp == 1)
    {
        *Ortalama = bOrtalama;
        *Giris = bGiris;
        *Dogan = bDogan;
    }
    else if (temp == 2)
    {
        *Ortalama = iOrtalama;
        *Giris = iGiris;
        *Dogan = iDogan;
    }
}

int main()
{
    double bOrtalama, iOrtalama, Ortalama;
    int bGiris, bDogan;
    int iGiris, iDogan;
    int Giris, Dogan;

    printf("Birinci tarihi giriniz : ");
    scanf("%lf %d %d", &bOrtalama, &bGiris, &bDogan);
    printf("Ikinci tarihi giriniz : ");
    scanf("%lf %d %d", &iOrtalama, &iGiris, &iDogan);

    ilerideOlaniBul(bOrtalama, bGiris, bDogan, iOrtalama, iGiris, iDogan, &Ortalama, &Giris, &Dogan);
    printf("-----------------------------\n");
    printf("Daha basarili olan, \n");
    printf("ortalamasi %0.2lf, giris yili %d ve %d yilinda dogandir. \n", Ortalama, Giris, Dogan);

    return 0;
}