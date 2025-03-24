#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    indice = 0;
}


void MesaDeRestaurante::adicionaAoPedido(Pedido d)
{
    for (int i=0; i<MAX ; i++) {
        if (pedidos[i].getDescricao() == d.getDescricao()) {
            pedidos[i].setQuant( pedidos[i].getQuant() + d.getQuant() );
            return;
        }
    }

    pedidos[indice] = d;
    indice++;
}

void MesaDeRestaurante::zeraPedidos() {
    for (int i=0; i<MAX ; i++)
        pedidos[i].setQuant(0);
}

float MesaDeRestaurante::calculaTotal() {
    float total = 0;
    for (int i=0; i<MAX; i++)
        total += pedidos[i].getPreco() * pedidos[i].getQuant();

    return total;
}

void MesaDeRestaurante::print() {
    for (int i=0 ; i<MAX; i++)
        if (pedidos[i].getQuant()>0)
            pedidos[i].print();
}
