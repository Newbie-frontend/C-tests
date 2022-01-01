
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int n;
    printf("Enter how many numbers you want : ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int)); //malloc
    // p = (int *)calloc(n, sizeof(int)); //calloc //always resets the space. all the values will be 0
    if (p == NULL)
    {
        printf("Unable to allocate memory\nExiting the program \n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Next number : ");
        scanf("%d", p + i);
    }
    printf("Content of the array : ");
    for (int i = 0; i < n; i++)
        printf("%4d", *(p + i));

    int new_no = n+3;
    p = (int *)realloc(p, new_no * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\nExiting the program \n");
        exit(1);
    }

    *(p+n)= 10;
    *(p+n+1)= 20;
    *(p+n+2)= 30;

    printf("\nNew content of the array : ");
    for (int i = 0; i < new_no; i++)
        printf("%4d", *(p + i));

    free(p);



    return 0;
}