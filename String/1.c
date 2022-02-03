#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[256];
    char *p;
    int count = 0;
    puts("Cumlenizi giriniz: ");
    fgets(s, 256, stdin);
    p = strtok(s, " ");
    while (p != NULL)
    {
        count++;
        p = strtok(NULL, " ");
    }
    printf("Girdiginiz cumle %d kelimeden olusmaktadir.", count);

    return 0;
}
