#include <stdio.h>
#include <string.h>
#include <time.h> // To calculate CPU calculation time
#include <stdlib.h>

typedef struct Data
{
    int IM;
    int JM;
    int iteration;
    int counter;
    int **a;
}data;

/* function declaration */
// void printBook(struct Data *book);

int main()
{

    struct Data data; /* Declare Book1 of type Book */

    // ---------------> Execution Time

    clock_t start = clock();

    // ---------------> Execution Time

    // data.IM = 500;
    // data.JM = data.IM;
    // data.iteration = data.IM * 2;
    // data.counter = 0;
    // data.a = (int **)malloc(data.IM * sizeof(int *));
    // for (int i = 0; i < data.IM; i++)
    //     data.a[i] = (int *)malloc(data.JM * sizeof(int));
    // for (int itr = 0; itr < data.iteration; itr++)
    // {
    //     for (int i = 0; i < data.IM; i++)
    //     {
    //         for (int j = 0; j < data.JM; j++)
    //         {
    //             data.a[i][j] = data.counter++;
    //             // printf("%d, ", data.a[i][j]);
    //         }
    //     }
    // }

    int IM = 700;
    int JM = IM;
    int iteration = IM * 2;
    int counter = 0;
    int a[IM][JM];
    for (int itr = 0; itr < iteration; itr++)
    {
        for (int i = 0; i < IM; i++)
        {
            for (int j = 0; j < JM; j++)
            {
                a[i][j] = counter++;
                // printf("%d, ", a[i][j]);
            }
        }
    }

    // ---------------> Execution Time

    clock_t end = clock();
    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    int minute = elapsed / 60;
    if (elapsed < 60)
    {
        printf("\nTime measured: %.3f seconds.\n\a", elapsed);
    }
    else if (elapsed < 3600)
    {
        elapsed = elapsed - minute * 60;
        printf("\nTime measured: %d minutes & %.3f seconds.\n\a", minute, elapsed);
    }
    else
    {
        int hour = elapsed / 3600;
        minute = (elapsed - hour * 3600) / 60;
        elapsed = elapsed - hour * 3600 - minute * 60;
        printf("\nTime measured: %d hour(s) & %d minutes & %.3f seconds.\n\a", hour, minute, elapsed);
    }

    // ---------------> Execution Time

    return 0;
}

// void printBook(struct Data *book)
// {
//     // strcpy(book->title, "Amoo Hasan!");
//     printf("Book title : %s\n", book->title);
//     printf("Book author : %s\n", book->author);
//     printf("Book subject : %s\n", book->subject);
//     printf("Book book_id : %d\n", book->book_id);
// }
