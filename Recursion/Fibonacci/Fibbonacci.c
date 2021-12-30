#include <stdio.h>

double getFibbTerm (int t) {
    if ( t == 1 || t == 2 )
        return 1;
    return getFibbTerm(t-1) + getFibbTerm(t-2);
}

int main() {
    printf("Enter how many Fibonacci number you want to see : ");
    int n;
    scanf("%d", &n);
    int t;
    for (t = 1 ; t <= n; t++)
        printf("%f\n", getFibbTerm(t));


    double first = 1, second = 1, third;
    printf("\n   1 \n   1");
    for (int i = 0; i < n-2; i++)
    {
        third = first + second;
        printf("\n   %f", third);
        first = second;
        second = third;
    }

    return 0;
}
