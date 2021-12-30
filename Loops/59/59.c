#include <stdio.h>

int main() {
    float tBugun, T, K;
    T = 10000; K = 10000;
    for (int i = 1; i <= 100; i++)
    {
        tBugun = T;
        T = (1 + 0.01)*T - 0.00001*T*K;
        K = (1 - 0.005)*K + 0.00001*0.01*tBugun*K;
        printf("%d. gunun kurt sayisi %0.0f ve tavsan sayisi %0.0f \n", i, K, T);
    }


    return 0;
}
