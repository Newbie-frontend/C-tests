#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    FILE *fp, *fp2;
    int num, kod;
    int a1, b1, a2, b2, a3, b3;
    int c, c1, c2, c3;
    fp = fopen("girisler.txt", "r");
    fp2 = fopen("gecersiz.txt", "w");
    if (fp == NULL || fp2 == NULL)
    {
        printf("Dosyalarda sikinti var!");
        return 1;
    }
    while (!feof(fp))
    {
        fscanf(fp, "%d-%d", &num, &kod);
        b3 = num % 10;
        a3 = (num / 10) % 10;
        b2 = (num / 100) % 10;
        a2 = (num / 1000) % 10;
        b1 = (num / 10000) % 10;
        a1 = (num / 100000);
        c1 = a1 + b1;
        c2 = fabs(a2 - b2);
        c3 = a3 * b3;
        c = c1 + c2 + c3;
        if (c % 10 != kod)
            fprintf(fp2, "%d-%d\n", num, kod);
        
    }

    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}
