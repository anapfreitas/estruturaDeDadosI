#include <iostream>

using namespace std;

int main (){

    int *p;             //criação de ponteiro
    int vetor[10];      //criação de array

    p = &vetor[0];          //p vai receber o endereço do primeiro elemento do vetor
    *p = 10;                //atribuindo valor a posição 0 do vetor
    cout << "\n" << vetor[0] <<"\n";

    *(p += 1);  //incrementando o ponteiro
    *p = 20;    //atribuindo valor a posição 0 do vetor
    cout << "\n" << vetor[1] <<"\n";

    *(p += 1);
    *p = 30; //vetor[2] = 30;
    cout << "\n" << vetor[2] <<"\n";


    return 0;
}
