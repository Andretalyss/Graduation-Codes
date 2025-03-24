#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario
{
    protected:
        float salario;

    public:
        Assalariado(float s);
        void set_name(std::string n);
        void set_mat(int h);
        std::string get_name();
        int get_mat();
        float calcula_salario();
};

#endif // ASSALARIADO_H
