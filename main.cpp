#include "Conta.h"
#include "IConta.h"
#include "ContaEspecial.h"
#include <iostream>
#include <string>

using namespace std;
void ApresentaMenu();

int main(){
    double quantia;
    Conta conta("Maria", 4000, 1162, 1300);


    cout << "\n\n\tConta corrente\n" << endl;
    cout << "Saldo: " << conta.getSaldo() << endl;
    cout << "Digite a quantidade para saque : ";
    cin >> quantia;
    try{
        conta.sacar(quantia);
    }
    catch(std::runtime_error &n){
        cout << n.what() << endl;
    }
    return 0;
}
