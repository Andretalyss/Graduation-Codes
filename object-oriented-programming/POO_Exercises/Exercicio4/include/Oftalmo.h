#ifndef OFTALMO_H
#define OFTALMO_H
#include "Medico.h"

class Oftalmo : public Medico
{
    public:
        Oftalmo(std::string nome, double alt, double peso);
        void realiza_atendimentos();
};

#endif // OFTALMO_H
