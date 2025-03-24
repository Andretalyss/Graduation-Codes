#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#define MAX 30

class RestauranteCaseiro
{
    protected:
        MesaDeRestaurante mesas[MAX];

    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int indMesa, Pedido p);
        float calculaTotalRestaurante();
        void print();

};

#endif // RESTAURANTECASEIRO_H
