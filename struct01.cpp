#include <iostream>

using namespace std;

//struct nomeStruct //criação Struct
struct Carro{
    //variáveis
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    //métodos:
    //informo o tipo de retorno, o nome da função e os parâmetros de entrada:
    void insere (string stNome, string stCor, int stPot, int stVelMax){
        nome = stNome;
        cor = stCor;
        pot = stPot;
        velMax = stVelMax;
        vel = 0;
    }

    void imprimir (){//imprimindo os valores da struct //cout: é um objeto usado junto com o operador de inserção (<<) para exibir/ imprimir texto na tela
        cout << "Nome ......................: " <<nome <<" \n";
        cout << "Cor .......................: " <<cor <<" \n";
        cout << "Potencia ..................: " <<pot <<" \n";
        cout << "Velocidade atual ..................: " <<vel <<" \n";
        cout << "Velocidade Maxima .........: " <<velMax <<" \n\n";
    }

    //método para mudar a velocidade
    void mudaVel(int mv){
        vel = mv;
        if (vel > velMax){
            vel = velMax;
        }
        if (vel < 0){
            vel = 0;
        }
    }
};

int main(){

    //criando um array do tipo struct:   //sempre utilizar ponteiro
    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    //adicionando possição ao array:
    carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;

    //atribuindo valores:
    carros[0].insere("Sakura", "Rosa e Branco", 450, 350);
    carros[1].insere("Gaara", "Vermelho", 250, 260);
    carros[2].insere("Naruto", "Laranja", 150,180);
    carros[3].insere("Sasuke", "Preto", 80, 120);
    carros[4].insere("Hinata", "Azul", 100, 150);


    //mudando a velocidade dos carros:
    carros[0].mudaVel (100);
    carros[1].mudaVel (120);
    carros[2].mudaVel (130);
    carros[3].mudaVel (140);
    carros[4].mudaVel (150);

    //imprimir informações de todos os carros:
    for (int i = 0; i <5; i++){
        carros[i].imprimir();  //carros na posição que está rodando o for mostra na tela
    }

    return 0;
}
