#include <stdio.h>

int main() {
    int num, count = 0, temp = 0;
    for (int i = 1; i <= 1000; i++)
    {

        for (int j = 1; j <= i; j++) {
            if (i%j == 0)
                count++;
        }
        if (count > temp)
        {
            temp = count;
            num = i;
        }
        count = 0;
    }
    printf("\nBoleni en cok olan sayi %d ( Bolen sayisi %d) \n", num, temp);

    return 0;
}
