#include "Ginecologista.h"

Ginecologista::Ginecologista(std::string nome, double alt, double peso)
{
    this->nome = nome;
    this->alt = alt;
    this->peso = peso;
    espec = "Ginecologista - Especialista em fertilidade";
}

void Ginecologista::realiza_atendimentos()
{
    std::cout << "Realizando exames agendados previamente\n" << std::endl;

}
