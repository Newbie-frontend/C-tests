#include <stdio.h>

typedef struct ogrenci
{
    char no[20];
    double ort;
    int tKredi;
    int gYili;
} ogrenci;

ogrenci basariliBul(ogrenci a, ogrenci b)
{
    if (a.ort > b.ort)
        return a;
    else if (a.ort < b.ort)
        return b;
    else if (a.tKredi < b.tKredi)
        return a;
    else if (a.tKredi > b.tKredi)
        return b;
    else if (a.gYili > b.gYili)
        return a;
    else if (a.gYili < b.gYili)
        return b;
    else
        return a; // We could have used random 
}

int main(int argc, char const *argv[])
{
    ogrenci a, b, c;
    printf("Birincinin no, ortalama, kredi toplami ve giris yili: ");
    scanf("%s %lf %d %d", &a.no, &a.ort, &a.tKredi, &a.gYili);
    printf("ikincinin no, ortalama, kredi toplami ve giris yili: ");
    scanf("%s %lf %d %d", &a.no, &a.ort, &a.tKredi, &a.gYili);

    c = basariliBul(a, b);
    printf("Daha basarili olan, %s numarali \n", c.no);
    printf("(Ortalama : %lf, kredi toplami : %d, yili : %d", c.ort, c.tKredi, c.gYili);

    return 0;
}
