#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void buyukTamsayiTopla(char *, char *, char *);

int main()
{
    char s1[] = "9999999999999999999999999999999999999999";
    char s2[] = "111";
    char s3[] = "00000000000000000000000000000000000000000";
    buyukTamsayiTopla(s1, s2, s3);
    printf("%s \n", s3);
    printf("%s \n", s2);
    printf("%s", s1);
    return 0;
}

void buyukTamsayiTopla(char str[41], char str2[4], char str3[42])
{
    // Anlamadimki !!!! Sayisal yapmazsak nasil toplariz ki ! Cok Zor 
    // for (int i = strlen(str2) - 1; i >= 0; i++)
    // {
    //     if (str[strlen(str) - 1 - i] + str2[2 - i] - 48 < 58)
    //         str[strlen(str) - 1 - i] = str[strlen(str) - 1 - i] + str2[2 - i] - 48;
    //     if ((str[strlen(str) - 1 - i] + str2[2 - i] - 48) > 57)
    //     {
    //         str[strlen(str) - 1 - i] = '0';
    //         str[strlen(str) - 1 - i - 1] += 1;
        // }
        // for (int i = 0; i <= 38; i++)
        // {
        // }

        // if ((str[i] - 48) < 9)
        // {
        //     str3[40] = '0';
        //     str[i - 1] += 1;
    // }
    // }
    
}
