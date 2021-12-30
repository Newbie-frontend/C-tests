
#include <stdio.h>

int main()
{
    int first, second, a, num1, num2, count = 0, OBEB, OKEK;
    do
    {
        printf("OKEK bulunacak sayilari giriniz : ");
        scanf("%d %d", &first, &second);
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
            OBEB = second;
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
    OKEK = (num1 * num2) / OBEB;
    printf("----------------------------------------\n");
    printf("OKEK(%d, %d) = %d \n", num1, num2, OKEK);


    return 0;
}
