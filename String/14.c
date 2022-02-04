#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int otele;
    char str[200];
    // char str2[200];

    printf("Metni giriniz : \n");
    scanf(" %[^.].", str); // noktadan sonra birsey varsa otelemeyi almaz 
    // fgets(str, 200, stdin);
    printf("Oteleme miktarini giriniz : ");
    scanf("%d", &otele);
    printf("------------------------------------- \n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]) && str[i] + otele <= 122)
            str[i] += otele;
        else if (islower(str[i]) && str[i] + otele > 122)
            str[i] = str[i] + otele - 26;
        else if (isupper(str[i]) && str[i] + otele <= 90 )
            str[i] += otele;
        else if (isupper(str[i]) && str[i] + otele > 90)
            str[i] = str[i] + otele - 26;
    }
    strcat(str, ".");
    printf("Sifreli cumle : \n%s \n", str);
    return 0;
}
