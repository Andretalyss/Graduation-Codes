#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H
#include <iostream>

class FigurasGeometricas
{
    protected:
        std::string name;

    public:
        FigurasGeometricas();
        void set_name(std::string name);
        std::string get_name();
        virtual double calcule_area() = 0;
};

#endif // FIGURASGEOMETRICAS_H
