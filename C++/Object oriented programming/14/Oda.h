#ifndef OTEL_H
#define OTEL_H
class Oda
{
private:
    int odaNo;
    double gecelikFiyat;
    int kat;
    int tur;

public:
    Oda(int, double, int, int = 2);
    void goster(int);
    void ayarla(int, double, int, int);
    int toplamUcret(int);
};

#endif