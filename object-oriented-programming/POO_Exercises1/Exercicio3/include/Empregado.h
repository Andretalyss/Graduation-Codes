#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>

class Empregado
{
    private:
        std::string nome;
        std::string sobrenome;
        double salario;

    public:
        Empregado(std::string n, std::string s, double sal);
        std::string getNome();
        std::string getSobrenome();
        double getSalario();
        void setNome(std::string n);
        void setSobrenome(std::string s);
        void setSalario(double sal);
        void Aumento();
};

#endif // EMPREGADO_H
