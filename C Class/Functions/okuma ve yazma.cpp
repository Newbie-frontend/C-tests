#include <iostream>
#include <conio.h>
using namespace std;

template <typename T>
void oku( T a[], int n){
    for (int  i = 0; i < n; i++)
    {
        printf("birinci veriyi giriniz");
        cin>>a[i];
    }
    cout<<"\ndevam icin bir tusa basiniz\n";
    getch();

}
template <typename T>
void yaz (T a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"\n\n Dizinin "<< i+1<<" . elemani: "<<a[i];
    }
    cout<<"\ndevam icin bir tusa basiniz\n";
    getch();

}
int main(){
    int a[5];
    char b[5];
    double c[5];
    oku(a, 5);
    yaz(a, 5);
    return 0;
}
