#include <stdio.h>

int kosegenTopla(int x[][3])
{
    int toplam = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i == j)
                toplam += x[i][j];
    return toplam;
}
int tersTopla(int x[][3])
{
    int toplam = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i + j == 2)
                toplam += x[i][j];
    return toplam;
}

main()
{
    int x[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Kosegenin Toplami : %d \n", kosegenTopla(x));
    printf("Ters Kosegenin Toplami : %d", tersTopla(x));
}

//     *(*(a +1) + 2) = *(a[1]+2) = a[1][2]