
#include <stdio.h>

int main()
{
	unsigned int num;

	printf("ONLUK     \tSEKIZLIK  \tONALTILIK\n");
	for (int i = 0; i <= 15; i++)
    {
        printf("%d\t\t", i);
        printf("%o\t\t", i);
	    printf("%X\n", i);
    }

	return 0;
}
