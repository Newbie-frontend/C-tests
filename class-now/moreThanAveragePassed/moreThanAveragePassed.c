#include <stdio.h>
#include <math.h>

int main() {
    int count;
    printf("Enter how many numbers you have : ");
    scanf("%d", &count);
    int s[count-1];
    int sum = 0;

    for (int i = 0; i < count; i++ )
    {
        printf("Enter a number : ");
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < count; i++)
    {
        sum += s[i];
    }
    int average = sum / count;
    printf("\nPassed numbers : ");
    for (int i = 0; i < count; i++)
    {
        if (s[i] >= average)
        {
            printf("%d  ", s[i]);
        }

    }
    printf("\n");


    return 0;
}
