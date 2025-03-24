#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

class Funcionario{

protected:
    int matricula;
    std::string nome;
    float salario;

public:
    Funcionario(int m, std::string n, float s);
    int getMatricula();
    std::string getNome();
    virtual float getSalario();

};
#endif // FUNCIONARIO_H
