#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario
{
    protected:
        float salario;

    public:
        Assalariado(float s);
        //SETS FUNCTIONS
        void set_name(std::string n);
        void set_mat(int h);
        //GETS FUNCTIONS
        std::string get_name();
        int get_mat();

        //METHOD OF FUNCIONARIO
        float calcula_salario();
};

#endif // ASSALARIADO_H
