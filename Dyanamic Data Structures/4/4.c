#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dugum
{
    char ad[10];
    float tutar;
    struct dugum *ptr;
} dugum;

void yazdir(dugum *);
void ekle(dugum **, char *, float);

int main()
{
    dugum *basptr = NULL;
    FILE *filep;
    float para;
    char isim[10];
    filep = fopen("siparis.dat", "r");

    while (!feof(filep))
    {
        fscanf(filep, "%s %f", isim, &para);
        ekle(&basptr, isim, para);
    }
    yazdir(basptr);

    fclose(filep);
    return 0;
}

void ekle(dugum **p, char *isim, float para)
{
    dugum *yeniptr;
    dugum *temp;
    yeniptr = malloc(sizeof(dugum));
    if (yeniptr == NULL)
        printf("RAM is full!");
    else
    {
        yeniptr->tutar = para;
        yeniptr->ptr = NULL;
        strcpy(yeniptr->ad, isim);
        if (*p == NULL)
            *p = yeniptr;
        else
        {
            temp = *p;
            while (strcmp(temp->ad, yeniptr->ad) && temp->ptr != NULL)
                temp = temp->ptr;
            if (strcmp(temp->ad, yeniptr->ad) != 0)
                temp->ptr = yeniptr;
            else
                temp->tutar = temp->tutar + yeniptr->tutar;
        }
    }
}

void yazdir(dugum *p)
{
    FILE *filep2;
    filep2 = fopen("toplam.dat", "w");
    if (p == NULL)
        fprintf(filep2, "Liste bos. \n");
    else
        while (p != NULL)
        {
            fprintf(filep2, "%s  %.2f\n", p->ad, p->tutar);
            p = p->ptr;
        }
    fclose(filep2);
}
