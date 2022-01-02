// File handling
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("Characters.txt", "a");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
        fputc(ch, fp);
    
    fclose(fp);
    printf("Success\n");
    return 0;
}