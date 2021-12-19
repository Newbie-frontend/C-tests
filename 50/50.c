
#include <stdio.h>

int main()
{
    int first, second, a, num1, num2, count = 0;
    do
    {
        printf("birinci sayiyi giriniz : ");
        scanf("%d", &first);
        printf("ikinci sayiyi giriniz : ");
        scanf("%d", &second);
        if (first < 0 || second < 0)
            printf("yanlis!!! lutfen sayilarin her ikisini de pozitif olarak giriniz\n");
    } while (first < 0 || second < 0);
    num1 = first;
    num2 = second;
    while (1)
    {

        if (second > first)
        {
            a = first;
            first = second;
            second = a;
        }
        int temp;
        temp = first - second;
        if (temp == 0)
        {
            printf("----------------------------------------------\n");
            printf("OBEB(%d, %d) = %d \n", num1, num2, second);
            printf("OBEB cikarma zinciri = %d \n", count);
            break;
        }
        else if (temp < second)
        {
            first = second;
            second = temp;
        }
        else first = temp;
        count++;
    }

    return 0;
}
