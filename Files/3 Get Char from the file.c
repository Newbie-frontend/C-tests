// File handling
#include <stdio.h>
#define SIZE 80

int main()
{
    FILE *fp;
    fp = fopen("Characters.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }
    //prime reading technique
    char ch;
    ch = fgetc(fp);

    while (!feof(fp))
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }

    fclose(fp);
    return 0;
}