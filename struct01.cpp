#include <iostream>

using namespace std;

//struct nomeStruct //cria��o Struct
struct Carro{
    //vari�veis
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){

    Carro car1; //inst�ncia da struct Carro
    Carro car2;

    //atribuindo valores as vari�veis da Struct Carro
    car1.nome = "Sakura";
    car1.cor = "Rosa com branco";
    car1.pot = 450;
    car1.velMax = 350;

    //imprimindo os valores da struct //cout: � um objeto usado junto com o operador de inser��o (<<) para exibir/ imprimir texto na tela
    cout << "Nome ......................: " <<car1.nome <<" \n";
    cout << "Cor .......................: " <<car1.cor <<" \n";
    cout << "Potencia ..................: " <<car1.pot <<" \n";
    cout << "Velocidade Maxima .........: " <<car1.velMax <<" \n";



    return 0;
}
