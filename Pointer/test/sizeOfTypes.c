#include <stdio.h>

int main() {
    int a; 
    long b;
    char c;
    float d;
    double e;
    int dizi[5];
    long *ptr;

    printf("Sideof(int) = %d \n", sizeof(int));//shows size as bytes
    printf("Sideof(long) = %d \n", sizeof(long));
    printf("Sideof(char) = %d \n", sizeof(char));
    printf("Sideof(float) = %d \n", sizeof(float));
    printf("Sideof(double) = %d \n", sizeof(double));
    printf("Sideof a = %d \n", sizeof a);
    printf("Sideof b = %d \n", sizeof b);
    printf("Sideof c = %d \n", sizeof c);
    printf("Sideof d = %d \n", sizeof d);
    printf("Sideof e = %d \n", sizeof e);
    printf("Sideof(dizi) = %d \n", sizeof dizi);
    printf("Sideof(ptr) = %d \n", sizeof ptr);
    return 0;
}