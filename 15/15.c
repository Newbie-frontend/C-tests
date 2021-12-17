
#include <stdio.h>
#include <math.h>

int main() {
    int count = 0;
    double SR;
    printf("1 ile 20 arasindaki asal sayilar \n");
    printf("------------------------------------\n");
    for (int i = 1; i <= 20; i++)
    {
        SR = sqrt(i);
        for (int j = 1; j <= SR; j++)
        {
            if (i%j == 0)
                count++;
        }
        if (count == 1)
            printf("%d  ", i);
        count = 0;
    }
    return 0;
}
