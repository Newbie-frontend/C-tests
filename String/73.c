#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void uzunTarihKopyala(char *, char *);

int main()
{
    char uzunT[100];
    char kisaT[100];
    printf("Uzun tarih dizgisini giriniz (gy ayAdi yyyy) : ");
    scanf("%[^\n]", uzunT); // 29 Mart 2016
    printf("------------------------------------\n");
    uzunTarihKopyala(uzunT, kisaT);
    printf("Tarihin kisa hali : %s \n", kisaT);
    return 0;
}

void uzunTarihKopyala(char *US, char *KS)
{
    char month[12][3] = {"01", "02", "03", "04", "05", "06",
                         "07", "08", "09", "10", "11", "12"};
    char mName[12][10] = {"Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran",
                         "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"};
    char *p;
    p = strtok(US, " ");
    strcpy(KS, p);
    strcat(KS, "/");
    p = strtok(NULL, " ");
    for (size_t i = 0; i < 12; i++)
        if (strcmp(p, mName[i]) == 0)
        {
            strcat(KS, month[i]);
            strcat(KS, "/");
            break;
        }
    p = strtok(NULL, " ");
    strcat(KS, p);
}
