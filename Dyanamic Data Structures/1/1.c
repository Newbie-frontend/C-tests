#include <stdio.h>
#include <stdlib.h>

typedef struct dugum
{
    int yas;
    struct dugum *ptr;
} dugum;

int monu();
void listeyaz(dugum *);
int listesay(dugum *);
int ekle(dugum **, int);

int main()
{
    dugum *basptr = NULL;
    int secim, yas, s, a;
    while ((secim = monu()) != 3)
        switch (secim)
        {
        case 0:
            listeyaz(basptr);
            break;
        case 1:
            printf("Eklenecek yasi giriniz : ");
            scanf("%d", &yas);
            s = ekle(&basptr, yas);
            if (s != 0)
                printf("Eleman basarili bir sekilde eklendi \n");
            else
                printf("Ekleme basarisiz \n");
            break;
        case 2:
            a = listesay(basptr);
            printf("Listedeki dugum sayisi %d dir.\n", a);
            break;
        }

    return 0;
}

int monu()
{
    int secim;
    printf("---------------MONU----------------\n");
    printf("0- Listedeki elemanlari yazdirma\n");
    printf("1- Listeye yeni eleman ekleme\n");
    printf("2- Listedeki eleman sayisi\n");
    printf("3- Cikis\n");
    printf("Seciminiz (0-3)? : ");
    scanf("%d", &secim);
    return secim;
}
void listeyaz(dugum *p)
{
    if (p == NULL)
        printf("Liste bos. \n");
    else
    {
        printf("liste : \n");
        while (p != NULL)
        {
            printf("%d --> ", p->yas);
            p = p->ptr;
        }
        printf("NULL\n\n");
    }
}

int ekle(dugum **p, int yas)
{
    dugum *yeniptr;
    dugum *onceptr;
    dugum *sonraptr;

    yeniptr = malloc(sizeof(dugum));

    if (yeniptr != NULL)
    {
        yeniptr->yas = yas;
        yeniptr->ptr = NULL;

        onceptr = NULL;
        sonraptr = *p;
        while (sonraptr != NULL && yas > sonraptr->yas)
        {
            onceptr = sonraptr;
            sonraptr = sonraptr->ptr;
        }
        if (onceptr == NULL)
        {
            yeniptr->ptr = *p;
            *p = yeniptr;
            return yas;
        }
        else
        {
            onceptr->ptr = yeniptr;
            yeniptr->ptr = sonraptr;
            return yas;
        }
    }
    else
        return 0;
}

int listesay(dugum *p)
{
    int a = 0;
    if (p == NULL)
        return 0;
    else
    {
        while (p != NULL)
        {
            a++;
            p = p->ptr;
        }
        return a;
    }
}
