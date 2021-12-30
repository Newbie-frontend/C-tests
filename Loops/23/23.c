#include <stdio.h>

int main () {
    int num, count, total = 0, met = 0;
    while (1)
    {
        printf("Kac adet sayi giriceksiniz : \n");
        scanf("%d", &count);
        if (count > 0)
            break;
        else
            printf("Hata!! \nAdet sifir ya da negatif olamaz\n");
    }
    printf("%d adet sayi giriniz :", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        if (num%13 == 0 || num%8 == 0){
            total +=num;
            met++;
        }
    }
    printf("----------------------------------------------\n");
    printf("Kurala uyan toplamda %d adet sayi girdiniz\n", met);
    printf ("Toplamlari = %d\n", total);

    return 0;
}
