
#include <stdio.h>

int main() {
    int count = 0, secondOne = 1, firstOne;

    for (int i = 99; i >= 10; i--)
    {
        for (int j = 1; j <= 99; j++)
        {
            if (i%j == 0)
                count++;
        }
        if (count == 2){
            firstOne = i;
            if (firstOne == secondOne - 2)
            {
                printf("\nAradiginiz sayilar = %d ve %d\n", firstOne, secondOne);
                break;
            }
            else
                secondOne = i;
        }
        count = 0;
    }
    return 0;
}
