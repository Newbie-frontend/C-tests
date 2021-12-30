#include <stdio.h>
#include <math.h>

int main() {
    int count;
    printf("Enter how many numbers you have : ");
    scanf("%d", &count);
    int number[count-1];
    printf("Enter numbers : ");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < number[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}
