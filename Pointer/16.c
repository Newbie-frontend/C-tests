#include <stdio.h>

void aracKoltukSayisiBul(int sayi, int *a, int *b)
{
    *a = (sayi / 46) + 1;
    *b = (*a)*46 - sayi;
}

int main()
{
    int yolcu = -1;
    int otobus, bos;
    while (yolcu < 0)
    {
        printf("Tura kac kisi katilacak? : ");
        scanf("%d", &yolcu);
    }
    aracKoltukSayisiBul(yolcu, &otobus, &bos);
    printf("-----------------------------\n");
    printf("Bu tur icin %d adet otobuse ihtiyac var. \n", otobus);
    printf("Turdaki bos koltuk sayisi : %d \n", bos);

    return 0;
}