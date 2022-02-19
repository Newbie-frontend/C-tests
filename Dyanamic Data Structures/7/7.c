#include <stdio.h>
#include <stdlib.h>

typedef struct fdugum
{
    int sayi;
    struct dugum *ptr;
} fdugum;

void dairesel(fdugum **p)
{
    fdugum *temp;
    if (*p != NULL)
    {
        temp = *p;
        while (temp->ptr != NULL)
            temp = temp->ptr;
        temp->ptr = *p;
    }
}

void ekle(fdugum **p, int num)
{
    fdugum *yeniptr;
    yeniptr = malloc(sizeof(fdugum));
    if (yeniptr == NULL)
        printf("RAM bellek dolu.");
    else
    {
        yeniptr->sayi = num;
        yeniptr->ptr = *p;
        fdugum *temp;
        if (*p != NULL)
        {
            temp = *p;
            while (temp->ptr != *p)
                temp = temp->ptr;
            temp->ptr = yeniptr;
        }
    }
}
