
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    int a2, b2, num2, num;
    printf("sayilar : \n");
    for (int i = 10; i < 100; i++)
    {
        num = i;
        a = num%10;
        b = num/10;
        for (int j = 10; j <= 50; j++)
        {
            num2 = j;
            a2 = num2%10;
            b2 = num2/10;
            if (num2 != num)
            {
                if ((a/a2 == (float)num/num2 && b == b2) || (a/b2 == (float)num/num2 && b == a2) || (b/a2 == (float)num/num2 && a == b2) || (b/b2 == (float)num/num2 && a == a2))
                {
                    printf("   (%d - %d) \n", i, j);
                }

            }

        }

    }


    return 0;
}
