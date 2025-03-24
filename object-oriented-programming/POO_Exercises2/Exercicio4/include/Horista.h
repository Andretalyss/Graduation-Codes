#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario
{
    protected:
        float sal_horas;
        float horas_trab;

    public:
        Horista(float s, float h);
        //SETS FUNCTIONS
        void set_name(std::string n);
        void set_mat(int m);
        //GETS FUNCTIONS
        std::string get_name();
        int get_mat();

        //METHOD OF FUNCIONARIO
        float calcula_salario();
};

#endif // HORISTA_H
