#include <stdio.h>
#include <string.h>

void sesliSil(char *);

int main(int argc, char const *argv[])
{
    FILE *fp;
    FILE *fp2;
    char *add;
    char address[20];
    char newaddress[20];
    char dizi[500];
    char *forWrite;
    printf("Dosya adini giriniz : ");
    scanf("%[^\n]", address);
    add = strtok(address, ".");
    strcpy(newaddress, add);
    strcat(newaddress, ".ssz");
    strcat(add, ".txt");
    printf("--------------------------------\n");
    fp = fopen(address, "r");
    fp2 = fopen(newaddress, "w");

    forWrite = fgets(dizi, 500, fp);
    
    while (forWrite != NULL)
    {
        sesliSil(dizi);
        fputs(dizi, fp2);
        forWrite = fgets(dizi, 500, fp);
    }

    printf("%s nin sessiz harfleri %s ye kopyalandi \n", address, newaddress);
    fclose(fp);
    fclose(fp2);
    return 0;
}

void sesliSil(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
        {
            for (int j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
            i--;
        }
    }
}