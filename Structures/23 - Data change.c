#include <stdio.h>
#include <string.h>

struct kapasite
{
    char cins[3];
    float miktar;
};
typedef struct kapasite Kapasite;

void yukariDonustur(Kapasite *);

int main()
{
    Kapasite a;

    printf("Kapasite miktar ve cinsini giriniz : ");
    scanf("%f %s", &a.miktar, a.cins);
    yukariDonustur(&a);
    printf("Bir uste donusmus hali : ");
    printf("%0.2f %s", a.miktar, a.cins);

    return 0;
}

void yukariDonustur(Kapasite *a)
{
    if (strcmp(a->cins, "tb") != 0)
        a->miktar /= 1024;
    if (strcmp(a->cins, "kb") == 0)
        strcpy(a->cins, "mb");
    else if (strcmp(a->cins, "mb") == 0)
        strcpy(a->cins, "gb");
    else if (strcmp(a->cins, "gb") == 0)
        strcpy(a->cins, "tb");
}
