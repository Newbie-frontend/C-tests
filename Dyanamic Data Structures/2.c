#include <stdio.h>
#include <stdlib.h>

typedef struct dugum
{
    char ad[20];
    int yas;
    int kilo;
    float boy;
    struct dugum *ptr;
} dugum;

void listeyaz(dugum *p, FILE *filep2)
{
    if (p == NULL)
    {
        printf("Liste bos. \n");
        fprintf(filep2, "Liste bos. \n");
    }

    else
    {
        printf("Ad               Yas        Kilo       Boy \n");
        printf("--------------------------------------------\n");
        fprintf(filep2, "Ad               Yas        Kilo       Boy \n");
        fprintf(filep2, "--------------------------------------------\n");
        while (p != NULL)
        {
            printf("%s\t %10d %10d %12.2f \n", p->ad, p->yas, p->kilo, p->boy);
            fprintf(filep2, "%s\t %10d %10d %12.2f\n", p->ad, p->yas, p->kilo, p->boy);
            p = p->ptr;
        }
    }
}

int main()
{
    dugum *basptr = NULL;
    FILE *filep;
    FILE *filep2;
    int secim, yas, s, a;
    dugum *yeniptr;
    dugum *onceptr;
    dugum *sonraptr;

    filep = fopen("oyuncu.dat", "r");
    filep2 = fopen("index.dat", "w");
    while (!feof(filep))
    {
        yeniptr = malloc(sizeof(dugum));
        if (yeniptr != NULL)
        {
            fscanf(filep, "%s %d %d %f", yeniptr->ad, &yeniptr->yas, &yeniptr->kilo, &yeniptr->boy);
            yeniptr->ptr = NULL;

            onceptr = NULL;
            sonraptr = basptr;
            while (sonraptr != NULL && yeniptr->boy > sonraptr->boy)
            {
                onceptr = sonraptr;
                sonraptr = sonraptr->ptr;
            }
            if (onceptr == NULL)
            {
                yeniptr->ptr = basptr;
                basptr = yeniptr;
            }
            else
            {
                onceptr->ptr = yeniptr;
                yeniptr->ptr = sonraptr;
            }
        }
        else
            printf("Hafiza yok");
    }
    listeyaz(basptr, filep2);

    fclose(filep);
    fclose(filep2);
    return 0;
}