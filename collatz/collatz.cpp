#include <iostream>
using namespace std;

int main()
{
    int n, x;
    n = 50;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        x = i + 1;
        printf("x = %d", x);
        while (x >= 5)
        {
            if (x % 2 == 0)
            {
                x /= 2;
            }
            else
            {
                x = 3 * x + 1;
            }
            printf(", %d", x);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}