#include <stdio.h>

void eleme(int *, int);

int main()
{
    int dizi[9] = {1, 120, 4, 6, 12, 25, 6, 6, 120};
    int i;      // bunlar nicin ???!!!
    int aranan; // bunlar nicin ???!!!

    eleme(dizi, 9);
    for (int i = 0; i < 9; i++)
        printf("%d, \n", dizi[i]);

    return 0;
}
void eleme(int *arr, int i)
{
    for (int i = 0; i < 9; i++)
    {
        int temp = *(arr + i);
        int count = 0;
        for (int j = 0; j < 9; j++)
            if (*(arr + i) == *(arr + j))
                count++;
        if (count == 1)
            *(arr + i) = -1;
    }
}