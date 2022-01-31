#include <stdio.h>
#include <math.h>

void aradakiAcilariBul(int, int, float *, float *);

int main()
{
    int saat = 3, dakika = 1;
    float kucukAci, buyukAci;
    aradakiAcilariBul(saat, dakika, &kucukAci, &buyukAci);
    printf("kucuk aci = %0.2f \nBuyuk aci = %0.2f", kucukAci, buyukAci);
    return 0;
}
void aradakiAcilariBul(int akrep, int yelkovan, float *kucukAci, float *buyukAci)
{
    float zaviyeAkrep = akrep * 30 + yelkovan * 0.5;
    float zaviyeYelkovan = yelkovan * 6;
    float aci = fabs(zaviyeAkrep - zaviyeYelkovan);
    if (aci > 180)
    {
        *buyukAci = aci;
        *kucukAci = 360 - aci;
    }
    else
    {
        *kucukAci = aci;
        *buyukAci = 360 - aci;
    }
}