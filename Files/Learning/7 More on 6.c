// File handling
#include <stdio.h>
#define SIZE 80

int main()
{
    FILE *fp;
    FILE *fpr;
    fp = fopen("EditedNames.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }

    fpr = fopen("reports2.txt", "w");
    if (fpr == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }

    char name[SIZE];
    int salary;
    double rate;
    double houseRent;
    double netSalary;

    while (1)
    {
        fscanf(fp, "%[^,],%d,%lf", name, &salary, &rate);
        houseRent = salary * rate;
        netSalary = salary - houseRent;
        fprintf(fpr, "%s\t  %d\t  %0.2lf\t  %0.2lf\t  %0.2lf", name, salary, rate, houseRent, netSalary);

        if (feof(fp))
            break;
    }

    fclose(fp);
    return 0;
}