#include <stdio.h>
#include <string.h>

int main()
{
    char s[256];
    char *p;
    int count = 0;
    puts("Cumlenizi giriniz: ");
    scanf("%[^\n]", s);
    size_t a = strlen(s);
    for (int i = 0; i < a; i++)
        if (s[i] == 'a' || s[i] == 'A')
            count++;

    printf("Girdiginiz cumle icerisinde %d adet a ya A vardir.", count);

    return 0;
}
