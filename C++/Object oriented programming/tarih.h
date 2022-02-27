// interface
#ifndef TARIH_H
#define TARIH_H

class Tarih
{
private:
    int gun;
    int ay;
    int yil;

public:
    Tarih(int g = 1, int a = 1, int y = 2018);
    //constructor function
    //default value is 1/1/2018
    //if we sent no arguments, default value will be used
    // Tarih(char s[]);
    // constructor function's overloading
    void ayarla(int g, int a, int y);
    void yaz();
};
#endif
