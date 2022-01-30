#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void icindeNoktaBul(int, int, int, int *, int *);

int main()
{
    srand(time(NULL));
    int mx = 2, my = 5, r = 6;
    int x, y;
    icindeNoktaBul(mx, my, r, &x, &y);
    printf("(x, y) = (%d, %d) \n", x, y);
    return 0;
}
void icindeNoktaBul(int a, int b, int c, int *x, int *y)
{
    while (1)
    {
        *x = a + pow((-1), rand() % c) * (rand() % c);
        *y = b + pow((-1), rand() % c) * (rand() % c);
        if (c > sqrt(pow((*x - a), 2) + pow((*y - b), 2)))
            break;
    }
}