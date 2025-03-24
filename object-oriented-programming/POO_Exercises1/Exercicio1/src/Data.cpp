#include "Data.h"

Data::Data(int d, int m, int a)
{
    setDia(d);
    setMes(m);
    setAno(a);
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

void Data::setDia(int d)
{
    if(d >= 0 || dia <= 31)
        dia = d;
        else
        dia = 1;
}

void Data::setMes(int m)
{
    if(m>=0 || m <=12)
        mes = m;
        else
        mes = 1;
}

void Data::setAno(int a)
{
    if(ano >= 1970)
        ano = a;
        else
        ano = 1;
}

void Data::AvancarDia()
{
    dia++;

    if(mes==2){
        if(dia > 29){
            dia = 1;
            mes++;
            }}

    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        if(dia > 31 && mes==12){
            dia = 1;
            mes = 1;
            ano++;
        }else if(dia > 31 && mes < 12){
            dia = 1;
            mes++;
        }}

   if(mes==4 || mes==6 || mes==9 || mes==11){
        if(dia > 30){
            dia = 1;
            mes++;
        }}

}
