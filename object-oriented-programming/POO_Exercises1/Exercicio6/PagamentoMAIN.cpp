#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    Pagamento p1 = Pagamento();
    Pagamento p2 = Pagamento();
    ControleDePagamentos c = ControleDePagamentos();

    p1.setNome("Andre");
    p1.setValor(4500);
    p2.setNome("Marcelo");
    p2.setValor(6300);

    cout << "Funcionario: " << p1.getNome() << " | Valor do Pagamento: R$ " << p1.getValor() << endl << endl;
    cout << "Funcionario: " << p2.getNome() << " | Valor do Pagamento: R$ " << p2.getValor() << endl << endl;

    c.setPagamentos(p1, 1);
    c.setPagamentos(p2, 2);

    cout << "Total de Pagamentos: R$ " << c.CalculaTotaldePagamentos() << endl << endl;

    int aux = c.ExistePagamentoParaFuncionario(p1.getNome());
    if(aux == 1){
        cout << "Existe pagamento para o funcionario" << endl;
    }else if(aux == 0){
        cout << "Nao existe pagamento para o funcionario" << endl;
    }


    return 0;
}
