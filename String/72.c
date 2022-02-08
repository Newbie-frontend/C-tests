#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void uzunTarihKopyala(char *, char *);

int main()
{
    char kisaT[100];
    char uzunT[100];
    printf("Kisa tarih dizgisini giriniz (gg/aa/yyyy) : ");
    scanf("%[^\n]", kisaT); // 29/03/2016
    printf("------------------------------------\n");
    uzunTarihKopyala(kisaT, uzunT);
    printf("Tarihin uzun hali : %s \n", uzunT);
    return 0;
}

void uzunTarihKopyala(char *KS, char *US)
{
    char month[12][3] = {"01", "02", "03", "04", "05", "06",
                         "07", "08", "09", "10", "11", "12"};
    char mName[12][10] = {"Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran",
                         "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"};
    char *p;
    p = strtok(KS, "/");
    strcpy(US, p);
    strcat(US, " ");
    p = strtok(NULL, "/");
    for (size_t i = 0; i < 12; i++)
        if (strcmp(p, month[i]) == 0)
        {
            strcat(US, mName[i]);
            strcat(US, " ");
            break;
        }
    p = strtok(NULL, "/");
    strcat(US, p);
}
