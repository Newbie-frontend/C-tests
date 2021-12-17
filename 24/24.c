#include <stdio.h>


int main()
{
    int count, num, a, total;
    for(int i = 1000; i <= 9999; i++){
        int num = i;
        for (int j = 0; j < 4; j++)
        {
            a = num%10;
            num /= 10;
            total += pow(a, a);
        }
        if (i == total)
            printf("\nBeklenen Sayi : %d\n", i);
        total = 0;
    }

    return 0;
}
