#include <stdio.h>
#include <stdlib.h>

typedef struct dugum
{
    char ad[10];
    int ara1;
    int ara2;
    int final;
    float ortalama;
    struct dugum *ptr;
} dugum;

int main()
{
    FILE *fp, *fp2;
    dugum *basptr = NULL;
    fp = fopen("ogrenci.dat", "r");
    fp2 = fopen("ters.dat", "w");
    if (fp == NULL || fp2 == NULL)
    {
        printf("File bulunmadi.\n");
        return 1;
    }
    //get it from the file to stack list
    while (!feof(fp))
    {
        dugum *temp;
        temp = malloc(sizeof(dugum));
        if (temp == NULL)
            printf("Bellekte yer yok.\n");
        else
        {
            fscanf(fp, "%s %d %d %d %f", temp->ad, &temp->ara1, &temp->ara2, &temp->final, &temp->ortalama);
            temp->ptr = NULL;
            if (basptr == NULL)
                basptr = temp;
            else
            {
                temp->ptr = basptr;
                basptr = temp;
            }
        }
    }
    //write it in file 
    printf("Ogrenciler ters sirada : \n");
    printf("-------------------------\n");
    if (basptr == NULL)
        fprintf(fp2, "Liste bos. \n");
    else
        while (basptr != NULL)
        {
            fprintf(fp2, "%s %d %d %d %.2f\n", basptr->ad, basptr->ara1, basptr->ara2, basptr->final, basptr->ortalama);
            printf("%s %d %d %d %.2f\n", basptr->ad, basptr->ara1, basptr->ara2, basptr->final, basptr->ortalama);
            basptr = basptr->ptr;
        }

    fclose(fp);
    fclose(fp2);
    return 0;
}