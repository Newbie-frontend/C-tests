#include <iostream>
using namespace std;

class Deneme
{
private:
    int sayi;

public:
    Deneme(int);
    ~Deneme();
};

void f();
Deneme e(0);

int main()
{
    Deneme a(1);
    f();
    Deneme b(2);
    cout << "Program Bitti" << endl;

    return 0;
}

void f()
{
    Deneme c(3);
    static Deneme d(4);
}
Deneme::Deneme(int k)
{
    sayi = k;
    cout << sayi << " degerini alan nesnenin yapicisi calisti" << endl;
}

Deneme::~Deneme()
{
    cout << sayi << " degerini tutan nesnenin yikicisi calisti" << endl;
N}
