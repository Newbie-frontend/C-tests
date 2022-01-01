#include <stdio.h>

void dowork(int a, int b, int c, int *p, int *q)
{
    *p = a + b + c;
    if (a > b && a > c)
        *q = a;
    else if (b > a && b > c)
        *q = b;
    else
        *q = c;
}

int main()
{
    int x = 10, y = 50, z = 15, sum, max;
    dowork(x,y,z,&sum, &max);
    printf("Sum of numbers : %d\nMax number : %d", sum, max);

    return 0;
}