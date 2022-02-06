#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int morse2bahr(char *, char *, char *);

int main()
{
    char string1[200], string2[200], string3[200];
    int sonuc;
    printf("Morse kodunu giriniz : ");
    scanf("%[^\n]", string1);
    printf("Bahr kodunu giriniz  : ");
    scanf(" %[^\n]", string3);
    sonuc = morse2bahr(string1, string2, string3);
    printf("--------------------------- \n");
    printf("Sonuc = %d", sonuc);
    return 0;
}

int morse2bahr(char *str1, char *str2, char *str3)
{
    char da[3] = "da";
    char di[3] = "di";
    char bos[2] = " ";
    if (str1[0] == '-') 
        strcpy(str2, da);
    else if (str1[0] == '.')
        strcpy(str2, di);
    else if (str1[0] == ' ')
        strcpy(str2, bos);
    for (int i = 1; str1[i] != '\0'; i++)
    {
        if (str1[i] == '-')
            strcat(str2, da);
        else if (str1[i] == '.')
            strcat(str2, di);
        else if (str1[i] == ' ')
            strcat(str2, bos);
    }
    for (int i = 0; i < strlen(str3); i++)
    {
        if (str2[i] != str3[i])
            return 0;
        if (i == strlen(str3) - 1)
            return 1;
    }
    
}