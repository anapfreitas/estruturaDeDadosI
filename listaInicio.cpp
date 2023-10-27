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

//procedimento para inserir no início:
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
void inserirNoFim(No **lista, int num){   //a gente recebe um ponteiro que vai ser criado na função main e o valor que a gente quer inserir
    No *aux, *novo = malloc(sizeof(No));  //alocação de memória para um novo No

    if (novo){ //se alocada perfeitamente, inserção
        novo->valor = num;
        novo->proximo = NULL;

        // é o primeiro?
        if (*lista == NULL){ // o conteúdo dessa posição é nulo? se sim, significa que não tem ngm nessa posição
            *lista = novo;     //ai cria um novo

        } else{
            aux = *lista; //criação de um ponteiro auxiliar para percorrer a lista
            while(aux ->proximo){ //enquanto existir um proximo, vai p frente
                    aux = aux ->proximo;
                aux ->proximo = novo;
            }
    }

    } else    //senão
        printf("Erro ao alocar memória!\n");

}

// procedimento para inserir no meio:
void inserirNoMeio(No **lista, int num,int ant ){ //estou recebendo o ponteiro para a nossa lista // o num q eu vou receber  // ant: recebemos um valor de referência
     No *aux, *novo = malloc(sizeof(No));  //alocação de memória para um novo No

     if (novo){
        novo->valor = num;
        // é o primeiro?
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
     } else    //senão
        printf("Erro ao alocar memória!\n");

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
    No *lista = NULL; //criando a lista na função main

    do {
        printf("\n\t0 - Sair\n\t1 - Inserir no início\n\t2 - Inserir no fim\n\t3 - Inserir no meio\n\t4 - Imprimir\n\t5");
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
