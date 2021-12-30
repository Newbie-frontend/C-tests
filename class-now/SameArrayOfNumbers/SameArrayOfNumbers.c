#include <stdio.h>
#include <math.h>

int main()
{
    int count;
    printf("Enter how many numbers are in each array: ");
    scanf("%d", &count);
    int firstNums[count];
    int secondNums[count];

    for (int i = 0; i < count; i++)
    {
        printf("Enter %d. number of first array of numbers : ", i + 1);
        scanf("%d", &firstNums[i]);
    }
    for (int i = 0; i < count; i++)
    {
        printf("Enter %d. number of Second array of numbers : ", i + 1);
        scanf("%d", &secondNums[i]);
    }
    printf("----------------------------------------------\n");
    int same[count-1];
    int z = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (firstNums[i] == secondNums[j])
            {
                same[z] = firstNums[i];
                z++;
                break;
            }
        }
    }
    for (int i = 0; i < z-1; i++)
    {
        for (int j = i + 1; j < z; j++)
        {
            if (same[i] == same[j])
            {
                for (int k = j; k < z; k++)
                {
                    same[k] = same[k + 1];
                }
                --j;
                --z;
            }
        }
    }
    for (int i = 0; i < z; i++)
    {
        printf("%d  ", same[i]);
    }
    printf("\n");

    return 0;
}
