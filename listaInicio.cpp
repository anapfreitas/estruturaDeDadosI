#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;

}No;

typedef struct{
    No *inicio; //ponteiro para a lista
    int tam;    // tamanho da lista

}Lista;

void criarLista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;

}

//procedimento para inserir no in�cio:
void inserirNoInicio (Lista *lista, int num){
    No *novo = malloc (sizeof(No));
    if (novo){
        novo->valor = num;
        novo->proximo = lista ->inicio;
        *lista = novo;
    } else
        printf("Erro ao alocar memoria!\n");
}

//procedimento para inserir no fim:
void inserirNoFim(No **lista, int num){   //a gente recebe um ponteiro que vai ser criado na fun��o main e o valor que a gente quer inserir
    No *aux, *novo = malloc(sizeof(No));  //aloca��o de mem�ria para um novo No

    if (novo){ //se alocada perfeitamente, inser��o
        novo->valor = num;
        novo->proximo = NULL;

        // � o primeiro?
        if (*lista == NULL){ // o conte�do dessa posi��o � nulo? se sim, significa que n�o tem ngm nessa posi��o
            *lista = novo;     //ai cria um novo

        } else{
            aux = *lista; //cria��o de um ponteiro auxiliar para percorrer a lista
            while(aux ->proximo){ //enquanto existir um proximo, vai p frente
                    aux = aux ->proximo;
                aux ->proximo = novo;
            }
    }

    } else    //sen�o
        printf("Erro ao alocar mem�ria!\n");

}

// procedimento para inserir no meio:
void inserirNoMeio(No **lista, int num,int ant ){ //estou recebendo o ponteiro para a nossa lista // o num q eu vou receber  // ant: recebemos um valor de refer�ncia
     No *aux, *novo = malloc(sizeof(No));  //aloca��o de mem�ria para um novo No

     if (novo){
        novo->valor = num;
        // � o primeiro?
        if (*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        } else { //percorre a lista procurando o ant
            aux = *lista;
            while(aux ->valor != ant && aux->proximo){
                aux = aux ->proximo;
                novo -> proximo = aux->proximo;
                aux -> proximo = novo;
            }
        }
     } else    //sen�o
        printf("Erro ao alocar mem�ria!\n");

}

void imprimir(No * no){
    printf("\n\tLista: ");
    while(no){
        printf("%d", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main (){

    int opcao, valor, anterior;
    No *lista = NULL; //criando a lista na fun��o main

    do {
        printf("\n\t0 - Sair\n\t1 - Inserir no in�cio\n\t2 - Inserir no fim\n\t3 - Inserir no meio\n\t4 - Imprimir\n\t5");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserirNoInicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserirNoFim(&lista, valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d %d", &valor, &anterior);
            inserirNoMeio(&lista, valor, anterior);
            break;
        case 4:
            imprimir(lista);
            break;
        default:
            if (opcao != 0){
                printf("Opcao invalida");
            }
        }

    }while (opcao != 0);

    return 0;

}
