#include <iostream>

using namespace std;

int main (){

    string veiculo = "Carro";
    string *pv; //ponteiro armazena o endereço de memória de outra variável //tem que ser do mesmo tipo da variável que ele vai apontar

    pv = &veiculo;  //ponteiro pv recebe o endereço da variável veículo

    cout << pv <<"\n" << &veiculo;

    //No endereço apontado por *pv adicione o valor Moto
    *pv = "Moto";

     cout <<"\n" << veiculo <<"\n"<< *pv;

    return 0;
}
