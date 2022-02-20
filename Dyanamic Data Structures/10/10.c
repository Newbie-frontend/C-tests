#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct dugum
{
    char ad[20];
    long telefon;
    struct dugum *rPtr;
    struct dugum *lPtr;
} dugum;

int monu();
void siraliyaz(dugum *);
char agacaekle(dugum **, char *, long);
long arama(dugum *, char *);

int main()
{
    dugum *kokptr = NULL;
    dugum *sonptr = NULL;
    int secim, s;
    char ad[20];
    long tele;
    while ((secim = monu()) != 3)
        switch (secim)
        {
        case 0:
            printf("Eklenecek adi giriniz : ");
            scanf("%s", ad);
            printf("Eklenecek telefonu giriniz : ");
            scanf("%ld", &tele);
            s = agacaekle(&kokptr, ad, tele);
            if (s != 0)
                printf("Eleman basarili bir sekilde eklendi \n");
            else
                printf("Ekleme basarisiz \n");
            break;
        case 1:
            siraliyaz(kokptr);
            printf("\n");
            break;
        case 2:
            printf("Bulunacak Elemanin adini giriniz : ");
            scanf("%s", ad);
            tele = arama(kokptr, ad);
            if (tele == 0)
                printf("istenen eleman bulunamadi \n");
            else
                printf("%sin numarasi %ld\n", ad, tele);
            break;
        }

    return 0;
}

int monu()
{
    int secim;
    printf("---------------MONU----------------\n");
    printf("0- Agaca yeni eleman ekleme\n");
    printf("1- Agactaki elemanlari yazdirma\n");
    printf("2- Ada gore telefon numarasi bulma\n");
    printf("3- Cikis\n");
    printf("Seciminiz (0-3)? : ");
    scanf("%d", &secim);
    return secim;
}
void siraliyaz(dugum *p)
{
    if (p != NULL)
    {
        siraliyaz(p->lPtr);
        printf("%s, ", p->ad);
        siraliyaz(p->rPtr);
    }
}

char agacaekle(dugum **p, char *isim, long tele)
{
    if (*p == NULL)
    {
        *p = malloc(sizeof(dugum));
        if (*p != NULL)
        {
            strcpy((*p)->ad, isim);
            (*p)->telefon = tele;
            (*p)->rPtr = NULL;
            (*p)->lPtr = NULL;
        }
        else
            printf("RAM dolu");
    }
    else
    {
        if (*isim > *((*p)->ad)) // butun ilk harfleri buyuk yada kucuk sayalim
            agacaekle(&((*p)->rPtr), isim, tele);
        else if (*isim < *((*p)->ad))
            agacaekle(&((*p)->lPtr), isim, tele);
        else if (strcmp(isim, (*p)->ad) == 0)
            printf("Ayni ismi girdiniz.\n");
        else
            agacaekle(&((*p)->lPtr), isim, tele);
    }
}

long arama(dugum *p, char *isim) // really fast searching technique
{
    // Base Cases: root is null or key is present at root
    if (p == NULL || (strcmp(p->ad, isim) == 0))
        return p->telefon;

    // Key is greater than root's key
    if (*(p->ad) < *isim)
        return arama(p->rPtr, isim);

    // Key is smaller than root's key
    return arama(p->lPtr, isim);
}