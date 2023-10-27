#include <iostream>

using namespace std;

int main (){

    int *p;             //cria��o de ponteiro
    int vetor[10];      //cria��o de array

    p = &vetor[0];          //p vai receber o endere�o do primeiro elemento do vetor
    *p = 10;                //atribuindo valor a posi��o 0 do vetor
    cout << "\n" << vetor[0] <<"\n";

    *(p += 1);  //incrementando o ponteiro
    *p = 20;    //atribuindo valor a posi��o 0 do vetor
    cout << "\n" << vetor[1] <<"\n";

    *(p += 1);
    *p = 30; //vetor[2] = 30;
    cout << "\n" << vetor[2] <<"\n";


    return 0;
}
