#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor : public Funcionario{

public:
    Consultor(int matricula,std::string nome, float salario);
    float getSalario();
    float getSalario(float p);

};
#endif // CONSULTOR_H
