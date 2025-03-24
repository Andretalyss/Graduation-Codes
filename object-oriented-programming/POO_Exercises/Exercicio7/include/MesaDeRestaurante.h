#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#define MAX 10

class MesaDeRestaurante
{
    protected:
        int indice;
        Pedido pedidos[MAX];

    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido d);
        void zeraPedidos();
        float calculaTotal();
        void print();

};

#endif // MESADERESTAURANTE_H
