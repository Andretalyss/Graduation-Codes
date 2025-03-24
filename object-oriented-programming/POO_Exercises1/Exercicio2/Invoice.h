#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>


class Invoice
{
private:
   int numero;
   std::string description;
   float preco;
   int qtd;

public:
    Invoice();
    Invoice(int n, std::string des, float p, int q);
    int getNum();
    std::string getDes();
    float getPreco();
    int getQtd();
    void setNum(int n);
    void setDes(std::string des);
    void setPreco(float p);
    void setQtd(int q);
    float getInvoiceAmount();
};

#endif // INVOICE_H
