#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 100, y = 200;
    printf("\nx = %d, y = %d \n", x, y);
    swap(&x, &y);
    printf("\nx = %d, y = %d \n", x, y);

    return 0;
}