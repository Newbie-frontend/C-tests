#include <stdio.h>
#include <string.h>

typedef struct ogrenci
{
    char ad[20];
    char soyad[20];
    float mOrtalama;
    float ales;
    float uds;
    float tPuan;
} ogrenci;

void puanHesapla(ogrenci *);

int main()
{
    FILE *fp, *fp2;
    ogrenci st[5] = {"", "", 0, 0, 0}, b;
    fp = fopen("ogrenci.txt", "r");
    fp2 = fopen("kazanan.txt", "w");
    // no need to know how many they are.
    // if we want to store all of them at once we may need to know the count

    while (!feof(fp))
    {
        fscanf(fp, "%s %s %f %f %f", b.ad, b.soyad, &b.mOrtalama, &b.ales, &b.uds);
        puanHesapla(&b);
        for (int j = 0; j < 5; j++)
        {
            if (b.tPuan > st[j].tPuan)
            {
                for (int i = 3; i >= j; i--)
                {
                    st[i + 1] = st[i];
                }
                st[j] = b;
                break;
            }
        }
    }
    for (size_t i = 0; i < 5; i++)
    {
        fprintf(fp2, "%s %s %.2f %.2f %.2f %.2f\n",
                st[i].ad, st[i].soyad, st[i].mOrtalama,
                st[i].ales, st[i].uds, st[i].tPuan);
    }

    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}

void puanHesapla(ogrenci *a)
{
    a->tPuan = a->mOrtalama * 12.5 + a->ales / 4 + a->uds / 4;
}