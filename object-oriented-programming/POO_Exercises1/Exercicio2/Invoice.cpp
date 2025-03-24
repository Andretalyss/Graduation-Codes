#include "Invoice.h"

Invoice::Invoice()
{
    numero = 0;
    description = "Sem descricao";
    preco = 0;
    qtd = 0;
}

Invoice::Invoice(int n, std::string des, float p, int q) : Invoice()
{
    setNum(n);
    setDes(des);
    setPreco(p);
    setQtd(q);
}

int Invoice::getNum()
{
    return numero;
}
std::string Invoice::getDes()
{
    return description;
}

float Invoice::getPreco()
{
    return preco;
}
int Invoice::getQtd()
{
    return qtd;
}

void Invoice::setNum(int n)
{
    if(n < 0){
        numero = 0;
    }else{
        numero = n;
    }}
void Invoice::setDes(std::string des)
{
    if(des == ""){
        description = "Sem descricao";
    }else{
        description = des;
    }
}
void Invoice::setPreco(float p)
{
    if(p < 0.0){
    preco = 0;
}else{
    preco = p;
}
}

void Invoice::setQtd(int q)
{
    if(qtd < 0){
        qtd = 0;
    }else{
        qtd = q;
    }
}

float Invoice::getInvoiceAmount()
{
    preco = preco * qtd;

    return preco;
}
