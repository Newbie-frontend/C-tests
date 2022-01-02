// File handling
#include <stdio.h>
#define SIZE 80

int main() {
    FILE *fp;
    fp = fopen("Names.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }
    char name[SIZE];
    int salary;

    while (1)
    {
        fscanf(fp, "%[^,],%d", name, &salary);
        printf("%s gets %d$ per hour.\n", name, salary);

        if (feof(fp))
            break;
    }
    
    fclose(fp);
    return 0;
    
}