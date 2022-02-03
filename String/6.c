#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Dizgiyi giriniz : ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
    str[0] = toupper(str[0]);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            str[i + 1] = toupper(str[i + 1]);

    printf("Sonuc dizgi : %s \n", str);
    return 0;
}
