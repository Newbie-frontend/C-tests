#include <stdio.h>
int x = 5;
int main()
{
    static int x = 15;
    if (x == 15)
    {
        x += 2;
    }
    x+=2;

    return 0;
}
printf("%d", x);