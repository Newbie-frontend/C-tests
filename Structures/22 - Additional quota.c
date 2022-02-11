#include <stdio.h>
#include <string.h>

typedef struct sube
{
    char isim[20];
    int kontenjan;
    int ogrenciSayisi;
} sube;

void subeUret(sube *a, sube *b)
{
    if (a->ogrenciSayisi > a->kontenjan)
    {
        b->ogrenciSayisi = a->ogrenciSayisi - a->kontenjan;
        strcpy(b->isim, "EK");
        b->kontenjan = a->kontenjan;
        a->ogrenciSayisi = a->kontenjan;
    }
    // else
    // {
    //     strcpy(b->isim, " ");
    //     b->ogrenciSayisi = 0;
    //     b->kontenjan = 0;
    // }
}

int main()
{
    sube a, b = { "-", 0, 0};
    printf("Subenin isim, kontenjan ve ogrenci sayisini giriniz : ");
    scanf("%s %d %d", a.isim, &a.kontenjan, &a.ogrenciSayisi);

    subeUret(&a, &b);
    printf("--------------------------------\n");
    printf("Bolundukten sonraki hali : ");
    printf("%s %d %d \n", a.isim, a.kontenjan, a.ogrenciSayisi);
    printf("Yeni sube bilgileri : ");
    printf("%s %d %d \n", b.isim, b.kontenjan, b.ogrenciSayisi);
    return 0;
}
