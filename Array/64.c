#include <stdio.h>

int main()
{
    int array[4][3] = {{2, 1, 0}, {1, 4, 3}, {5, 3, 0}, {8, 8, 3}};
    for (size_t z = 1; z < 12; z++)
    {
        for (size_t i = 0; i < 4; i++)
        {
            for (size_t j = 0; j < 3; j++)
            {
                int temp;
                if (j < 2 && array[i][j + 1] < array[i][j])
                {
                    temp = array[i][j + 1];
                    array[i][j + 1] = array[i][j];
                    array[i][j] = temp;
                }
                else if (array[i + 1][0] < array[i][j])
                {
                    temp = array[i + 1][0];
                    array[i + 1][0] = array[i][j];
                    array[i][j] = temp;
                }
            }
        }
    }
    return 0;
}
