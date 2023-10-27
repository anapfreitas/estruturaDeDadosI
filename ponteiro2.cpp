#include <iostream>

using namespace std;

void somar (float *var, float valor){
    *var += valor;
}

void inicializarVetor(float *v){
    for (int i = 0; i < 5; i++){
        v[i] = 0;

    }
}

int main (){

    float num = 0;
    float vetor [5];

    somar (&num, 15);  //passando o endereço da variável
    inicializarVetor(vetor);

    cout << num << "\n\n";

    for (int i = 0; i < 5; i++){
        cout << vetor [i] <<"\n";
    }

    return 0;

}
