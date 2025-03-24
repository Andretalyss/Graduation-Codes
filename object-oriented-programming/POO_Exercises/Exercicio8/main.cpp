#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    fstream file;
    string aux, aux2;

    cout << "Escreva algo: ";
    getline(cin,aux2);


    //ESCREVENDO NO ARQUIVO;
    file.open("text.txt", ios::out);
    if(!file.is_open()){
        cout << "Não abriu" << endl;
        return 0;
    }
    file << aux2;
    file.close();

    //LENDO DO ARQUIVO;
    file.open("text.txt", ios::in);
    if(!file.is_open()){
        cout << "Não abriu" << endl;
        return 0;
    }
    getline(file,aux);
    cout << aux << endl;
    file.close();


    //COPIANDO PARA OUTRO ARQUIVO;
    ofstream file2;
    file2.open("text_bkp.txt", ios::trunc);
    if(!file2.is_open()){
        cout << "Não abriu o segundo arquivo" << endl;
        return 0;
    }
    file2 << aux;
    file2.close();

    return 0;
}
