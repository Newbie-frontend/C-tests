#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int j = 0;
int araSondan(char *, int, char);

int main()
{
    char dizi[8] = {'a', 'n', 'k', 'a', 'r', 'a', 'l', 'i'};
    printf("%d \n", araSondan(dizi, 8, 'a'));
    printf("%d \n", araSondan(dizi, 8, 'a'));
    printf("%d \n", araSondan(dizi, 8, 'a'));
    printf("%d \n", araSondan(dizi, 8, 'a'));
    return 0;
}

int araSondan(char *str, int a, char c)
{
    if ((a - j) <= 0)
        return -1;
    for (size_t i = a - j - 1; i >= 0; i--)
    {
        if (str[i] == c)
        {
            // str[i] = '\0'; // ya global degisken belirlemek gerekir yada fonksiyondan almasi gerekir
            j = a - i; // hangi elemandan baslamasini soylememiz gerekir
            return i; 
        }
        else if (str[0] != c)
            return -1;
    }
}
