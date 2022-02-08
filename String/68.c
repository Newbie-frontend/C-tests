#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int tekrarEdenKacTane(char *str);

int main()
{
    char s[] = "Bilgisayar";

    printf("   %d \n", tekrarEdenKacTane(s));
    return 0;
}

int tekrarEdenKacTane(char *str) // str[i] == ASCII ==> t++ ==> t > 1 ==> count++ 
{                                // baska bir yontemi de bu
    int count = 0;               // buda is yapar ama :-) 
    char temp[strlen(str)];
    char *p;
    strcpy(temp, str);
    for (size_t i = 0; temp[i] != '\0'; i++)
    {
        if (temp[i] == ' ')
            continue;

        int t = 0;
        p = strchr(temp, temp[i]);
        while (p != NULL)
        {
            p = (char *)strchr(p + 1, temp[i]);
            if (p != NULL)
            {
                *p = ' ';
                t++;
            }
        }
        if (t >= 1)
            count++;
    }
    return count;
}