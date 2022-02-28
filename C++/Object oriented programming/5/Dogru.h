#ifndef DOGRU_H
#define DOGRU_H

class Dogru
{
private:
    double x1;
    double y1;
    double x2;
    double y2;

public:
    Dogru(double a = 1, double b = 2, double c = 3, double d = 4);
    void yaz();
    double egim();
    void kaydir(char, double);
};
#endif