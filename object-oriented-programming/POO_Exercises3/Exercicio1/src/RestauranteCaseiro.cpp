#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{

}

void RestauranteCaseiro::adicionaPedido(Pedido p, int indMesa)
{

        mesas[indMesa].adicionaAoPedido(p);

}

double RestauranteCaseiro::calculaTotalRestaurante()
{
        double total = 0;

        for(int i=0; i<MAX; i++) {
            if(mesas[i].calculaTotal() > 0){
            total += mesas[i].calculaTotal();
            //std::cout << mesas[i].calculaTotal() << endl;;
        }
}

        return total;
}
