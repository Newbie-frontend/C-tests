#include <stdio.h>

int side(int *, int);
int x;
int main()
{
    int y = 1;
    x = 0;
    printf("%d \n", side(&x, y));
    printf("%d \n", side(&y, x));
    return 0;
}
int side(int *a, int b)
{
    *a = *a + b;
    b = x + 1;
    return (*a + b);
}
