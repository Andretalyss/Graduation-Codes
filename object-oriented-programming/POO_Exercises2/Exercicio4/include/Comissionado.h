#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado : public Funcionario
{
    protected:
        float vendas_sem;
        float percentual;

    public:
        Comissionado(float v, float p);
        //SETS FUNCTIONS
        void set_name(std::string n);
        void set_mat(int m);
        //GETS FUNCTIONS
        std::string get_name();
        int get_mat();

        //METHOD OF FUNCIONARIO
        float calcula_salario();

};

#endif // COMISSIONADO_H
