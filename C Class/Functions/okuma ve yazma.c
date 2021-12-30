#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

template <typename T>
void oku( T a[], int n){
    for (int  i = 0; i < n; i++)
    {
        printf("birinci veriyi giriniz");
        cin<<a[i];
        

    }
    cout<<"\ndevam icin bir tusa basiniz\n";
    getch();

}