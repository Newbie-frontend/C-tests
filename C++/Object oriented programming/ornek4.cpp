// driver
#include "tarih.h"
#include "tarih.cpp"

int main() {
    Tarih a;
    Tarih b(18);
    Tarih c(18, 5);
    Tarih d(18, 5, 2005);
    // Tarih e("19/05/2005");

    a.yaz();
    b.yaz();
    c.yaz();
    d.yaz();
    return 0;
}