#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct ogrenci
{
    long no;
    int a;
} ogrenci;

int main()
{
    FILE *fp;
    ogrenci x[150];
    fp = fopen("ogrenci.dat", "r");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    // int k;
    // for (size_t i = 0; i < 150; i++) // to create Data for the practice
    // {
    //     if (i % 3 == 0)
    //         k = 53;
    //     else
    //         k = i / 2;
    //     fprintf(fp, "%ld %d\n", 98212900 + i, k);
    // }

    for (size_t i = 0; i < 150; i++)
        fscanf(fp, "%ld %d", &x[i].no, &x[i].a);

    int tempCount = 0;
    int amount = 0;
    int count = 0;
    for (size_t j = 0; j <= 100; j++) // check all the numbers between 0 to 100 
    {
        for (size_t i = 0; i < 150; i++) // compare all elements with that number
            if (x[i].a == j)
                tempCount++;
        if (tempCount > count)
        {
            count = tempCount;
            amount = j;
        }
        tempCount = 0;
    }

    printf("Bu sinifda, yigilmanin oldugu not %d dur. (%d tane)\n", amount, count);
    printf("Bu notu alan ogrencilerin\n");
    printf("NUMARASI :\tNOTU :\n");
    printf("----------\t------\n");
    for (size_t i = 0; i < 150; i++)
        if (x[i].a == amount)
            printf("%ld\t\t%d\n", x[i].no, x[i].a);
        
    

    fclose(fp);
    return 0;
}
