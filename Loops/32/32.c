
#include <stdio.h>

int main() {
    int num, smallest, second;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d. sayi = ", i);
        scanf("%d", &num);
        if (i == 1)
            smallest = num;
        else if (i == 2 && num < smallest)
        {
            second = smallest;
            smallest = num;
        }
        else if (i == 2 && num > smallest)
            second = num;
        else if (num < smallest)
        {
            second = smallest;
            smallest = num;
        }
        else if (num < second)
            second = num;
    }
    printf("----------------------------------------\n");
    printf("En kucuk deger = %d\n", smallest);
    printf("Ikinci en kucuk deger = %d\n", second);


    return 0;
}
