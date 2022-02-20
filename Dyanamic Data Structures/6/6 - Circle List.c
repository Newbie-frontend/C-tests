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
