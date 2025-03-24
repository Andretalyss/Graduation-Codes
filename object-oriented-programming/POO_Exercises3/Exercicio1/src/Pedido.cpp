#include "Pedido.h"

Pedido::Pedido(){

        //default
}

void Pedido::setNumero(int numero)
{
    this->numero = numero;

}

void Pedido::setQuant(int quant)
{
    this->quant = quant;

}

void Pedido::setPreco(double preco)
{
    this->preco = preco;

}

void Pedido::setDescri(string descri)
{
    this->descri = descri;

}

int Pedido::getNumero()
{
    return numero;

}

int Pedido::getQuant()
{
    return quant;

}

double Pedido::getPreco()
{
    return preco;

}

string Pedido::getDescricao()
{
    return descri;

}
