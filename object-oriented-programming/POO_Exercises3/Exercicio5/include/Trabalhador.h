#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>

class Trabalhador
{

protected:
    std::string nome;
    float salario;

public:
    Trabalhador(std::string n);
    virtual float calcularSalarioSemanal(int h);
    std::string getNome();
    float getSalario();

};

#endif // TRABALHADOR_H
