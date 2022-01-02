#include <stdio.h>

int main()
{
    int a[5] = {20, 30, 0, 4, 5};
    int *aptr = a;
    int i;

    printf("\n%p\n", a);
    printf("\n%p\n", aptr + 1);
    printf("\n%p\n", (void *)*(aptr + 1));
    printf("\n%p\n", aptr);
    printf("\n%p\n", (void *)*aptr);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("a[%d] = %d \n", i, a[i]);
    printf("\n\n");
    for (i = 0; i < 5; i++)
        printf("*(a+%d) = %d \n", i, *(a + i));
    printf("\n\n");
    for (i = 0; i < 5; i++)
        printf("*(aptr+%d) = %d \n", i, *(aptr + i));
    printf("\n\n");
    for (i = 0; i < 5; i++)
        printf("aptr[%d] = %d \n", i, aptr[i]);

    return 0;
}