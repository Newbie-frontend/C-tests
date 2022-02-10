#include <stdio.h>

typedef struct zaman 
{
    int saniye;
    int dakika;
    int saat;
} zaman;

void zamantopla(zaman *s1, zaman *s2)
{
    s1->saniye += s2->saniye;
    if (s1->saniye > 59)
    {
        s1->dakika += s1->saniye / 60;
        s1->saniye %= 60;
    }
    s1->dakika += s2->dakika;
    if (s1->dakika > 59)
    {
        s1->saat += s1->dakika / 60;
        s1->dakika %= 60;
    }
    s1->saat += s2->saat;
    if (s1->saat > 23)
        s1->saat %= 24;
}

int main(int argc, char const *argv[])
{
    //define and get variables
    zaman s1, s2;
    printf("Birinci zamani giriniz : ");
    scanf("%d:%d:%d", &s1.saat, &s1.dakika, &s1.saniye); // 23:30:20
    printf("ikinci zamani giriniz : ");
    scanf("%d:%d:%d", &s2.saat, &s2.dakika, &s2.saniye); // 01:00:40

    // for adding 2 times
    zamantopla(&s1, &s2);
    
    // to show the time in true format
    if (s1.saat < 10)
        printf("0%d:", s1.saat);
    else
        printf("%d:", s1.saat);
    if (s1.dakika < 10)
        printf("0%d:", s1.dakika);
    else
        printf("%d:", s1.dakika);
    if (s1.saniye < 10)
        printf("0%d", s1.saniye);
    else
        printf("%d", s1.saniye);

    return 0;
}
