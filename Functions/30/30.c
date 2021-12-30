#include <stdio.h>

int asal(int a)
{
    int count = 0;
    for (int j = 1; j <= a; j++)
    {
        if (a % j == 0)
            count++;
    }
    if (count == 2)
        return 1;
    else
        return 0;
}

int asaliBul(int a, char b)
{
    int i = a;
    while (asal(i) == 0)
    {
        if (b == 'b')
            i++;
        else if (b == 'k')
            i--;
    }
    return i;
}

int main()
{
    printf(" \n%d", asaliBul(15, 'b'));
    printf(" \n%d \n", asaliBul(11, 'k'));

    return 0;
}
