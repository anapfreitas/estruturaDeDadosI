#include <iostream>

using namespace std;

//struct nomeStruct //criação Struct
struct Carro{
    //variáveis
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){

    Carro car1; //instância da struct Carro
    Carro car2;

    //atribuindo valores as variáveis da Struct Carro
    car1.nome = "Sakura";
    car1.cor = "Rosa com branco";
    car1.pot = 450;
    car1.velMax = 350;

    //imprimindo os valores da struct //cout: é um objeto usado junto com o operador de inserção (<<) para exibir/ imprimir texto na tela
    cout << "Nome ......................: " <<car1.nome <<" \n";
    cout << "Cor .......................: " <<car1.cor <<" \n";
    cout << "Potencia ..................: " <<car1.pot <<" \n";
    cout << "Velocidade Maxima .........: " <<car1.velMax <<" \n";



    return 0;
}
