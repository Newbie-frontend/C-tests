#include <stdio.h>
#include <stdlib.h>

void printMsg()
{
    printf("Hello World!\n");
}
void fun()
{
    printf("This is another Hello world!\n");
}

int sum(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    printf("%p\n", printMsg);
    void (*p)();
    p = printMsg;
    p();
    p = fun;
    p();

    int (*s)(int, int);
    s = sum;
    int result = s(10 , 30);
    printf("The sum is : %d\n", result);

    float (*ptr)(int[], float); // if there was a function like this 

    return 0;
}
