#include <iostream>

using namespace std;

int main (){

    string veiculo = "Carro";
    string *pv; //ponteiro armazena o endere�o de mem�ria de outra vari�vel //tem que ser do mesmo tipo da vari�vel que ele vai apontar

    pv = &veiculo;  //ponteiro pv recebe o endere�o da vari�vel ve�culo

    cout << pv <<"\n" << &veiculo;

    //No endere�o apontado por *pv adicione o valor Moto
    *pv = "Moto";

     cout <<"\n" << veiculo <<"\n"<< *pv;

    return 0;
}
