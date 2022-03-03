#ifndef TAMKESIR_H
#define TAMKESIR_H
class TamKesir
{
private:
    int tam;
    int pay;
    int payda;

public:
    TamKesir(int, int, int = 0);
    void yaz();
    void bilesikYaz();
    TamKesir bolme(TamKesir);
    bool buyukMu(TamKesir);
};
#endif