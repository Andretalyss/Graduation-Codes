#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"

class RestauranteCaseiro {
    private:
        MesaDeRestaurante mesas[MAX];
        int indMesa;

    public:
        RestauranteCaseiro();
        void adicionaPedido(Pedido p, int indMesa);
        double calculaTotalRestaurante();

};

#endif // RESTAURANTECASEIRO_H
