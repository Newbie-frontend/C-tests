#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void seslisessizsay(char *, int *, int *);

int main()
{
    char sample[100];
    int sesli, sessiz;
    printf("Cumleyi giriniz :");
    scanf("%[^\n]", sample);
    seslisessizsay(sample, &sesli, &sessiz);
    printf("--------------------------\n");
    printf("Girilen cumlede %d sesli, %d sessiz harf bulunmaktadir", sesli, sessiz);

    return 0;
}

void seslisessizsay(char *str, int *sesli, int *sessiz)
{
    *sesli = 0;
    *sessiz = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
            (*sesli)++;
        else if ((str[i] > 65 && str[i] < 69) ||
                 (str[i] > 69 && str[i] < 73) ||
                 (str[i] > 73 && str[i] < 79) ||
                 (str[i] > 79 && str[i] < 85) ||
                 (str[i] > 85 && str[i] < 91) ||
                 (str[i] > 65 + 32 && str[i] < 69 + 32) ||
                 (str[i] > 69 + 32 && str[i] < 73 + 32) ||
                 (str[i] > 73 + 32 && str[i] < 79 + 32) ||
                 (str[i] > 79 + 32 && str[i] < 85 + 32) ||
                 (str[i] > 85 + 32 && str[i] < 91 + 32)) //again WTF
            (*sessiz)++;
    }
}