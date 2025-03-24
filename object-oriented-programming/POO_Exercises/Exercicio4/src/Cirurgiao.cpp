#include "Cirurgiao.h"

Cirurgiao::Cirurgiao(std::string nome, double alt, double peso)
{
    this->nome = nome;
    this->alt = alt;
    this->peso = peso;
    espec = "Cirurgião - Especialista em Cirurgia Geral";
}

void Cirurgiao::realiza_atendimentos()
{
    std::cout << "Realizando cirurgias e plantões de segunda à quarta\n" << std::endl;
}
