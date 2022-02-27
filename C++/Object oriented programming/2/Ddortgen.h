#ifndef DDORTGEN_H
#define DDORTGEN_H

class DDortgen
{
private:
    double en;
    double boy;

public:
    DDortgen(double a = 1, double b = 1);
    ~DDortgen();
    double getEn();
    void setEn(double);
    double getBoy();
    void setBoy(double);
    double cevre();
    double alan();
};
#endif