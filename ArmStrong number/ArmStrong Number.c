#include <stdio.h>
#include <math.h>

int count;
int lowNumber;
int highNumber;

int digitCounter(int n)
{
    for (count = 0; 1 <= n; count++)
    {
        n = n / 10;
    }
    return count;
}
int isArmstrong(int everyNumber, int count){
    int a = everyNumber;
    int b , sum = 0;
    for (int i = 0 ; i < count ; i++ ){
    b = a%10 ;
    a = a/10;
    sum += pow (b , count); 
    }
    if (sum == everyNumber)
        return 1;
    else
        return 0;
}

int main()
{
    printf("Enter range's smallest number : ");
    scanf("%d", &lowNumber);
    printf("Enter range's biggest number : ");
    scanf("%d", &highNumber);
    
    for(int i = lowNumber; i <= highNumber; i++){
        int h = i;
        if ( isArmstrong(h , digitCounter(h))){
            printf("%d\n", h);
        }   
    }
    
    return 0;
}
