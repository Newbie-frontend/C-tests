
#include <stdio.h>

int main() {
    int num, a, total = 0;
    printf("\nSayilar ");
    for (int i = 1000; i <= 9999; i++)
    {
        num = i;
        for (int j = 0; j < 2; j++)
        {
            a = num%100;
            num /= 100;
            total += a;
        }
        if (total*total == i)
            printf("%d, ", i);
        total = 0;
    }
    printf("\n");

    return 0;
}
