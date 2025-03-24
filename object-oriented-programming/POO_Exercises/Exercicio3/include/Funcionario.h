#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

class Funcionario
{
    //CLASSE ABSTRATA
    protected:
        std::string nome;
        int matricula;

    public:
        virtual float calcula_salario() = 0;
        virtual void set_name(std::string n) = 0;
        virtual void set_mat(int m) = 0;
        virtual std::string get_name() = 0;
        virtual int get_mat() = 0;
};

#endif // FUNCIONARIO_H
