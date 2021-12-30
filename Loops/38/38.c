
#include <stdio.h>

int main() {
    int num, cross = 1, add = 0, total = 0, a, count = 0;
    printf("\n1 ile 1000 arasindaki mukemmel sayilar \n");
    printf("-----------------------------------------\n");

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if ( i%j == 0 )
                total += j;
        }
        if (total == i)
            printf("%d, ", i);
        total = 0;
    }
    printf("\n");


    return 0;
}
