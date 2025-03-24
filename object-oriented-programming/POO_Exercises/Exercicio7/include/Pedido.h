#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    protected:
        int num;
        std::string descricao;
        int quant;
        float preco;

    public:
        Pedido();
        Pedido(int n, std::string d, int q, float p);
        std::string getDescricao();
        float getPreco();
        int getQuant();
        void setQuant(int q);
        void print();

};

#endif // PEDIDO_H
