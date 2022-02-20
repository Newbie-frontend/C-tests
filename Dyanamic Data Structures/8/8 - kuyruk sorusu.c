#include <stdio.h>
#include <stdlib.h>

typedef struct dugum
{
    char harf;
    struct dugum *ptr;
} dugum;

int monu();
void kuyrukyaz(dugum *);
char kuyrukekle(dugum **, dugum **, int);
void kuyruktansil(dugum **, dugum **);

int main()
{
    dugum *basptr = NULL;
    dugum *sonptr = NULL;
    int secim, a;
    char harf, s;
    while ((secim = monu()) != 3)
        switch (secim)
        {
        case 0:
            kuyrukyaz(basptr);
            break;
        case 1:
            printf("Eklenecek harfi giriniz : ");
            scanf(" %c", &harf);
            s = kuyrukekle(&basptr, &sonptr, harf);
            if (s != 0)
                printf("Eleman basarili bir sekilde eklendi \n");
            else
                printf("Ekleme basarisiz \n");
            break;
        case 2:
            kuyruktansil(&basptr, &sonptr);
            break;
        }

    return 0;
}

int monu()
{
    int secim;
    printf("---------------MONU----------------\n");
    printf("0- Kuyruktaki elemanlari yazdirma\n");
    printf("1- Kuyruga yeni eleman ekleme\n");
    printf("2- Kuyruktan eleman cikarma\n");
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

char kuyrukekle(dugum **b, dugum **s, int harf)
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

void kuyruktansil(dugum **b, dugum **s)
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