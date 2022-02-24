// A program to get the numbers and return the average and sum

#include <iostream>
#include <iomanip> // for setw and serprecision functions
using namespace std;

int main()
{
    char check;
    double sayi, sum = 0, average;
    int count = 0;
    cout << "BILGI GIRIS" << endl
         << "--------------------------------------------" << endl;
    do
    {
        cout << "Sayi = ";
        cin >> sayi;
        count++;
        sum += sayi;
        cout << "Devam etmek istiyor musunuz ? (e/h) ";
        cin >> check;
    } while (check == 'e' || check == 'E');
    average = sum / count;
    cout << "--------------------------------------------" << endl
         << "Girilen " << count << " adet sayinin :" << endl
         << "Toplami = \t" << setw(8) << setprecision(4) << sum << endl
         << "Ortalamasi = \t" << setw(8) << setprecision(4) << average << endl;

    return 0;
}
