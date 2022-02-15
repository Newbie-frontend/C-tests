#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    FILE *fp2;
    char *add;
    char address[20];
    char newaddress[20];
    char dizi[500];
    char *forWrite;
    printf("Kopyasi alinacak dosyayi giriniz : ");
    scanf("%[^\n]", address);
    add = strtok(address, ".");
    strcpy(newaddress, add);
    strcat(newaddress, ".YED");
    strcat(add, ".c");
    fp = fopen(address, "r");
    fp2 = fopen(newaddress, "w");

    forWrite = fgets(dizi, 500, fp);
    while (forWrite != NULL)
    {
        fputs(dizi, fp2);
        forWrite = fgets(dizi, 500, fp);
    }

    fclose(fp);
    fclose(fp2);
    return 0;
}