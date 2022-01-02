#include <stdio.h>

void sirala(double *ap, double *bp, double *cp)
{
    double temp;
    if (*bp < *ap && *bp < *cp)
    {
        temp = *ap;
        *ap = *bp;
        *bp = temp;
        if (*cp < *bp)
        {
            temp = *bp;
            *bp = *cp;
            *cp = temp;
        }    
    }
    else if (*cp < *ap && *cp < *bp)
    {
        temp = *ap;
        *ap = *cp;
        *cp = temp;
        if (*cp < *bp)
        {
            temp = *bp;
            *bp = *cp;
            *cp = temp;
        }
    }
    else if (*ap < *bp && *ap < *cp)
    {
        if (*cp < *bp)
        {
            temp = *bp;
            *bp = *cp;
            *cp = temp;
        }
    } 
}

int main()
{
    double a = 3.14, b = 2.1, c = 4.56;
    sirala(&a, &b, &c);
    printf("sirali : \n%f, %f, %f", a, b, c);

    return 0;
}