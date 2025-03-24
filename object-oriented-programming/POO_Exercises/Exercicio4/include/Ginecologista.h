#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"

class Ginecologista : public Medico
{
    public:
        Ginecologista(std::string nome, double alt, double peso);
        void realiza_atendimentos();
};

#endif // GINECOLOGISTA_H
