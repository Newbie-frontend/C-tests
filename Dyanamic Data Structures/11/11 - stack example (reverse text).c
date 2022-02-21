#include <stdio.h>
#include <stdlib.h>

typedef struct dugum
{
    char karakter;
    struct dugum *ptr;
} dugum;

int main()
{
    dugum *basptr = NULL;
    char text[51]; 
    // instead of this we could have take elements by getc function in loop so 
    // the number of letters would be infinite 
    printf("Metni yaziniz (En fazla 50 karakter!): \n");
    scanf("%[^\n]", text);
    text[50] = '\0';

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        dugum *each;
        each = malloc(sizeof(dugum));
        if (each == NULL)
            printf("RAM dolu");
        else
        {
            each->karakter = text[i];
            each->ptr = NULL;
            if (basptr == NULL)
                basptr = each;
            else
            {
                each->ptr = basptr;
                basptr = each;
            }
        }
    }
    // ekrana yazdirma
    while (basptr != NULL)
    {
        printf("%c", basptr->karakter);
        basptr = basptr->ptr;
    }

    return 0;
}