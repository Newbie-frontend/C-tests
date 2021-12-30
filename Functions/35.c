#include <stdio.h>

int alanbul(int a, int b, int c, int d)
{
    int alan2;
    int dizi[2][2] = {{a, b}, {c, d}};

    alan2 = (dizi[1][0] - dizi[0][0]) * (dizi[1][1] - dizi[0][1]);

    if (alan2 < 0)
    {
        alan2 = alan2 * (-1);
    }
    return alan2;
}
int main()
{
    int c;

    c = alanbul(-2, 3, 2, -2);
    printf("\nAlan : %d\n", c);
}