#include <stdio.h>

long getFibbTerm (int t) {
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
        printf("%ld\n", getFibbTerm(t));
    return 0;
}
