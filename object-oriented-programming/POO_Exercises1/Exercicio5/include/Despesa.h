#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

class Despesa
{
    private:
        double valor;
        std::string tipodegasto;

    public:
        Despesa();
        double getValor();
        std::string getGasto();
        void setValor(double v);
        void setGasto(std::string tipo);
};

#endif // DESPESA_H
