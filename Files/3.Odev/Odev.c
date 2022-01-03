#include <stdio.h>
#include <stdlib.h>

int enbuyuk(int a[], int n)
{
    int temp;
    int count;
    temp = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > temp)
        {
            temp = a[i];
            count = i;
        }
    }
    return count + 1;
}

int enkucuk(int a[], int n)
{
    int temp;
    int count;
    temp = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < temp)
        {
            temp = a[i];
            count = i;
        }
    }
    return count + 1;
}

int main()
{
    FILE *fp;
    FILE *fp2;
    char puan[100];
    char sonuc[100];
    printf("puanlarin tutudugu dosyanin adini giriniz : ");
    scanf("%s", puan);
    printf("Sonuclar hangi dosyaya kayedilsin : ");
    scanf("%s", sonuc);
    fp = fopen(puan, "r");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }
    fp2 = fopen(sonuc, "w");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }
    int table[8][10];
    int aileToplami[10];
    int peynirToplami[8];
    int enAzAile;
    int enCokPeynir;

    for (int i = 0; i < 8; i++)
    {
        int total = 0;
        for (int j = 0; j < 10; j++)
        {
            fscanf(fp, "%d ", &table[i][j]);
            total += table[i][j];
        }
        peynirToplami[i] = total;
    }
    enCokPeynir = enbuyuk(peynirToplami, 8);
    for (int i = 0; i < 10; i++)
    {
        int total = 0;
        for (int j = 0; j < 8; j++)
        {
            total += table[j][i];
        }
        aileToplami[i] = total;
    }
    enAzAile = enkucuk(aileToplami, 10);

    fprintf(fp2, "En cok begenilen urun no : %d\n", enCokPeynir);
    fprintf(fp2, "Enaz begenen aile no : %d", enAzAile);
    printf("---------------------------------------------------\n");
    printf("sonuc.txt dosyasi basarili bir sekilde olusturuldu\n");

    fclose(fp);
    fclose(fp2);
    return 0;
}