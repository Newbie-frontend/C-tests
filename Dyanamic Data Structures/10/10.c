#include <stdio.h>
#include <stdlib.h>

typedef struct dugum
{
    char ad[20];
    long telefon;
    struct dugum *rPtr;
    struct dugum *lPtr;
} dugum;

int monu();
void kuyrukyaz(dugum *);
char agacaekle(dugum **, char *, long);
void kuyruktansil(dugum **);

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
            scanf("%ld", tele);
            s = agacaekle(&kokptr, ad, tele);
            if (s != 0)
                printf("Eleman basarili bir sekilde eklendi \n");
            else
                printf("Ekleme basarisiz \n");
            break;
        case 2:
            kuyruktansil(&kokptr);
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
void kuyrukyaz(dugum *p)
{
    if (p == NULL)
        printf("Kuyruk bos. \n");
    else
    {
        while (p != NULL)
        {
            printf("%c --> ", p->harf);
            p = p->ptr;
        }
        printf("NULL\n\n");
    }
}

char agacaekle(dugum **b, char *ad, long tele)
{
    dugum *yeniptr;
    yeniptr = malloc(sizeof(dugum));

    if (yeniptr != NULL)
    {
        yeniptr->harf = harf;
        yeniptr->ptr = NULL;

        if (*b == NULL)
            *b = yeniptr;
        else
            (*s)->ptr = yeniptr;
        *s = yeniptr;
        return harf;
    }
    else
        return '\0';
}

void kuyruktansil(dugum **b)
{
    if (*b != NULL)
    {
        dugum *geciciptr;
        geciciptr = *b;
        *b = (*b)->ptr;
        if (*b == NULL)
            *s = NULL;
        free(geciciptr);
        printf("Bastaki eleman silindi\n");
    }
    else
        printf("Kuyrukta eleman yok\n");
}