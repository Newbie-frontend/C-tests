#include <stdio.h>

int main(){
    float s = 1;
    for (int i = 1; i < 10; i++)
    {
        s = 1 + 1/s;
    }
    printf("\n10. terim : %f\n", s);
    return 0;
}
