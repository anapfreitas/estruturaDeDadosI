#include <iostream>
#include <list>

using namespace std;

int main (){

    list <int> aula, teste;
    int tam = 0;
    list <int> ::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam = 10;
    for (int i = 0; i < tam; i++){
        aula.push_front(i);   //insere o valor na frente
    }

    it = aula.begin(); //adiciona o inicio da lista
    advance(it, 3);   //posição
    aula.insert(it, 0);
    aula.erase(--it); //remove um elemento
    // aula.clear(); //remove todos os elementos da fila

    //it = aula.begin();
    //advance(it, 5);

    //aula.insert(it, 0); //insere o zero na posição 5

    //aula.sort(); //ordena a lista
    //aula.reverse(); //inverte a lista
    aula.merge(teste);  // lista aula vai receber os elementos da lista teste

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size(); //retorna o tamanho da lista
     for (int i = 0; i < tam; i++){
        cout << aula.front() << "\n"; //imprimindo o elemento que está na frente
        aula.pop_front(); //retira o elemento da frente
    }

    return 0;
}
