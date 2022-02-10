#include <stdio.h>

typedef struct zaman
{
    int saniye;
    int dakika;
    int saat;
} zaman;

int main(int argc, char const *argv[])
{
    zaman date;
    int second;
    printf("Zamani giriniz : ");
    scanf("%d:%d:%d", &date.saat, &date.dakika, &date.saniye);
    printf("Eklenen miktari giriniz : ");
    scanf("%d", &second);
    date.saniye += second;
    if (date.saniye > 59)
    {
        date.dakika += date.saniye / 60;
        date.saniye %= 60;
    }
    if (date.dakika > 59)
    {
        date.saat += date.dakika / 60;
        date.dakika %= 60;
    }
    if (date.saat > 23)
        date.saat %= 24;
    
    if (date.saat < 10)
        printf("0%d:", date.saat);
    else
        printf("%d:", date.saat);
    if (date.dakika < 10)
        printf("0%d:", date.dakika);
    else
        printf("%d:", date.dakika);
    if (date.saniye < 10)
        printf("0%d", date.saniye);
    else
        printf("%d", date.saniye);


    return 0;
}
