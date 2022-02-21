#include <stdio.h>
#include <stdlib.h>

typedef struct fdugum
{
    int sayi;
    struct dugum *ptr;
} fdugum;

void silN(fdugum **p, int n) // Checked in 1.c with case 4
{
    fdugum *temp;
    fdugum *tempBefore;
    if (*p != NULL)
    {
        temp = *p;
        tempBefore = NULL;
        for (int i = 0; temp->ptr != NULL && i < n - 1; i++)
        {
            tempBefore = temp;
            temp = temp->ptr;
        }
        tempBefore->ptr = temp->ptr;
    }
}
