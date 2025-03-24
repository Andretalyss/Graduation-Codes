#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"

class Cirurgiao : public Medico
{
    public:
        Cirurgiao(std::string nome, double alt, double peso);
        void realiza_atendimentos();
};

#endif // CIRURGIAO_H
