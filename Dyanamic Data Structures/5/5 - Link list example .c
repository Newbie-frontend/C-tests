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
    float para;
    char isim[20];
    printf("PROGRAMDAN CIKMAK ICIN GIRIDI OLARAK 0 0 GIRINIZ\n");
    while (1)
    {
        printf("Marka, tutar giriniz : ");
        scanf("%s %f", isim, &para);
        if (strcmp(isim, "0") == 0 && para == 0)
            break;
        ekle(&basptr, isim, para);
    }
    yazdir(basptr);

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
