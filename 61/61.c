#include <stdio.h>
#include <math.h>
int main() {
    int high, low, H=0, N=0, L=0, L2=0, N2=0, H2=0;
    printf("Tansiyon olcum programina hos geldiniz\n");
    printf("(Durdurmak icin herhangi bir degri sifir giriniz)\n");
    printf("-----------------------------------------------------\n");
    while (1)
    {
        printf("Tansiyon degrlerini giriniz (Buyuk ve Kucuk) : ");
        scanf("%d %d", &high, &low);
        if (high == 0 || low == 0)
            break;
        else if (high > 140){
            printf("  Buyuk yuksek, ");
            H++;
        }
        else if (high >= 120){
            printf("  Buyuk normal, ");
            N++;
        }
        else{
            printf("  Buyuk dusuk, ");
            L++;
        }
        if (low > 90){
            printf("Kucuk yuksek \n");
            H2++;
        }
        else if (low >= 70){
            printf("Kucuk normal \n");
            N2++;
        }
        else{
            printf("Kucuk dusuk \n");
            L2++;
        }
    }
    printf("-----------------------------------------------------\n");
    printf("Program sona erdi \n");
    printf("Buyuk ( Normal = %d , yuksek = %d , dusuk = %d adet) \n", N, H, L);
    printf("kucuk ( Normal = %d , yuksek = %d , dusuk = %d adet) \n", N2, H2, L2);
    printf("        tansiyon degeri girilmistir.          \n");

    return 0;
}
