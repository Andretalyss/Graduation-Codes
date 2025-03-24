#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#define MAX 20

class MesaDeRestaurante {
    private:
        Pedido pedidos[MAX];
        int pos;

    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        void print();
        double calculaTotal();

};

#endif // MESADERESTAURANTE_H
