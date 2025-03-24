#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>

class Medico
{
    protected:
        std::string nome;
        std::string espec;
        double alt;
        double peso;

    public:
        Medico();
        virtual void realiza_atendimentos() = 0;
        std::string get_espec();
        std::string get_name();
        double get_alt();
        double get_peso();

};

#endif // MEDICO_H
