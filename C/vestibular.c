
/*

nome do participante

resposta de 10

Printar lista de participantes e notas em ordem alfabética.

A maior pontuação e menor e os participantes.

Percentual de participantes que acertaram mais da metade.

Entrada gabarito com 10 inteiros
2 3 1 4 5 2 4 3 5 1 

Nome dos participantes e 10 inteiros

última linha * para informar o fim

*/

#include <stdio.h>
#include <stdlib.h>

// Estrutura da lista
struct no{
    int valor;
    struct no *prox;
};

typedef struct no No;

typedef struct{
    No *inicio;
}Lista;

// Fim da estrutura da lista


void imprimirLista(Lista *l){ // Função para imprimir a lista
    No *aux;
    aux = l->inicio;
    if (aux == NULL){
        printf("Lista vazia\n");
    }else{
        while(aux != NULL){
            printf("%d\n", aux->valor);
            aux = aux->prox;
        }
    }
}

void buscarNo(Lista *l){ // Função para buscar na lista
        No *aux;
        aux = l->inicio;

        int valorBuscado;
        printf("Digite o valor a ser buscado: ");
        scanf("%i", &valorBuscado);
        if (aux == NULL){
            printf("Lista vazia\n");
        }else{
            while (aux != NULL){
                if (aux->valor == valorBuscado){
                    printf("Valor encontrado\n");
                    break;
                }
                aux = aux->prox;
            }
        }
}

void inserirNo(Lista *l){
    No *aux, *novoNo;
    int novoValor;
    printf("Digite o valor a ser inserido: ");
    scanf("%i", &novoValor);

    if (aux == NULL){ // Sem valores
        novoNo = malloc(sizeof(No));
        novoNo -> valor = novoValor;
        novoNo -> prox = NULL;
        l->inicio = novoNo;
    } else { // Com valores
        while (aux->prox != NULL){
            aux = aux->prox;
        }
        novoNo = malloc(sizeof(No));
        novoNo -> valor = novoValor;
        novoNo -> prox = NULL;
        aux->prox = novoNo;
    }
}

int main(){
    No *no1, *no2;
    Lista l;

    no1 = malloc(sizeof(No));
    no2 = malloc(sizeof(No));

    no1->valor = 10;
    no2->valor = 20;
    no1->prox = no2;
    no2->prox = NULL;

    l.inicio = no1;
    imprimirLista(&l);
    return 0;
}
