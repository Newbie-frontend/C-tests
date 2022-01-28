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
void new (double a[], int count)
{
    for (int j = 0; j < count; j++)
    {
        int temp;
        for (int i = j + 1; i < count; i++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    double array[10] = {1, 10, 3, 8, 5, 6, 7, 9, 4, 2};
    int cou = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 0)
        {
            break;
        }
        cou++;
    }
    
    double a = 3.14, b = 2.1, c = 4.56;
    sirala(&a, &b, &c);
    new (array, 10);
    printf("sirali : \n%f, %f, %f\n", a, b, c);
    for (int i = 0; i < 10; i++)
    {
        printf("%lf ", array[i]);
    }

    return 0;
}