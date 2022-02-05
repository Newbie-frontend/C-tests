#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void strstrip(char *, int);

int main()
{
    char sample1[] = "This is a 1. test";
    char sample2[] = "This is a 2. test";
    char sample3[] = "This is a 3. test";

    strstrip(sample1, 1);
    printf("%s\n", sample1);
    strstrip(sample2, 2);
    printf("%s\n", sample2);
    strstrip(sample3, 3);
    printf("%s\n", sample3);

    return 0;
}

void strstrip(char *str, int num)
{
    if (num == 1)
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

    else if (num == 2)
        for (int i = 0; str[i] != '\0'; i++)
        {
            // if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            //       str[i] == 'o' || str[i] == 'u' || str[i] == ' ' ||
            //       str[i] == '.' || (str[i] > 47 && str[i] < 58))) // Works in this case
            if ((str[i] > 65 && str[i] < 69) ||
                (str[i] > 69 && str[i] < 73) ||
                (str[i] > 73 && str[i] < 79) ||
                (str[i] > 79 && str[i] < 85) ||
                (str[i] > 85 && str[i] < 91) ||
                (str[i] > 65 + 32 && str[i] < 69 + 32) ||
                (str[i] > 69 + 32 && str[i] < 73 + 32) ||
                (str[i] > 73 + 32 && str[i] < 79 + 32) ||
                (str[i] > 79 + 32 && str[i] < 85 + 32) ||
                (str[i] > 85 + 32 && str[i] < 91 + 32)) // WTF :)
            {
                for (int j = i; str[j] != '\0'; j++)
                    str[j] = str[j + 1];
                i--;
            }
        }

    else if (num == 3)
        for (int i = 0; str[i] != '\0'; i++)
            if (str[i] > 47 && str[i] < 58)
            {
                for (int j = i; str[j] != '\0'; j++)
                    str[j] = str[j + 1];
                i--;
            }
}