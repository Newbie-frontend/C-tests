#include <stdio.h>
#include <stdlib.h>

int compareTo(const void *first, const void *second)
{
    int *a = (int *)first;
    int *b = (int *)second;

    if (*a > *b)
        return 1;
    else if (*a < *b)
        return -1;
    else
        return 0;
}

int main()
{
    int x[] = {1000, 200, 400, -10, 12, 800, 29, -17, 15, 110};
    int num = 10;

    qsort(x, num, sizeof(int), compareTo);
    for (size_t i = 0; i < num; i++)
        printf("%d\t", x[i]);
    

    return 0;
}
