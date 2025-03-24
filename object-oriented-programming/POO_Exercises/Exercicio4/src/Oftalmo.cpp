#include "Oftalmo.h"

Oftalmo::Oftalmo(std::string nome, double alt, double peso)
{
    this->nome = nome;
    this->alt = alt;
    this->peso = peso;
    espec = "Oftalmologista - Especialista em córnea";
}

void Oftalmo::realiza_atendimentos()
{
    std::cout << "Disponível para atendímentos com hora marcada\n" << std::endl;
}
