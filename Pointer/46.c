#include <stdio.h>

void torpilYap(int *, int, int, int);

int main()
{
    int dizi[9] = {1, 3, 4, 6, 12, 25, 56, 110, 120};

    torpilYap(dizi, 9, 8, 2);
    for (int i = 0; i < 9; i++)
        printf("%d, ", dizi[i]);

    return 0;
}
void torpilYap(int *arr, int size, int first, int second)
{
    int temp;
    temp = *(arr + first - 1);
    for (int i = first - 1; i < size; i++)
        *(arr + i) = *(arr + i + 1);
    for (int i = size - 1; i > second - 1; i--)
        *(arr + i) = *(arr + i - 1);
    *(arr + second - 1) = temp;
}