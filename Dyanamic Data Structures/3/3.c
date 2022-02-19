#include <stdio.h>
#include <stdlib.h>

typedef struct fdugum
{
    int sayi;
    struct dugum *ptr;
} fdugum;

int sondanSil(fdugum **p) // Start
{
    int sayi;
    fdugum *geciciptr;

    if (*p != NULL)
    {
        sayi = (*p)->sayi;
        geciciptr = *p;
        *p = (*p)->ptr;
        free(geciciptr);
    }
    return sayi;
}

float sondanSil2(fdugum **p) // End
{
    float sayi;
    fdugum *onceptr, *silptr;
    onceptr = *p;
    silptr = (*p)->ptr;

    while (silptr->ptr != NULL)
    {
        onceptr = silptr;
        silptr = silptr->ptr;
    }
    sayi = silptr->sayi;
    onceptr->ptr = NULL;
    return sayi;
}
