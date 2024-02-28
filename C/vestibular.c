
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
#include <string.h>

// Estrutura da lista
struct no{
    int valor;
    struct no *prox;
};

struct estudante{
    char nome[20];
    int q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;
    int nota;
    struct estudante *prox;
};

typedef struct no No;

typedef struct estudante Estudante;

typedef struct{
    No *inicio;
}Lista;

typedef struct{
    Estudante *comeco;
}dadosEstudante;

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

void inserirNo(Lista *l){ // Inserir nó na lista
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

void novoEstudante(dadosEstudante *l){ // Inserir nó na lista
    Estudante *aux, *novoEst;
    int novoValor;
    char temp[20];
    int q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;

    printf("Digite a entrada(Nome do participante seguido pelas notas separado por espaco ou * para finalizar a inclusao de dados):\n");
    scanf("%s %i %i %i %i %i %i %i %i %i %i", &temp, &q1, &q2, &q3, &q4, &q5, &q6, &q7, &q8, &q9, &q10);

    if (temp == '*'){
        if (aux == NULL){ // Sem valores
            novoEst = malloc(sizeof(Estudante));
            strcpy(novoEst->nome, temp);
            novoEst -> q1 = q1;
            novoEst -> q2 = q2;
            novoEst -> q3 = q3;
            novoEst -> q4 = q3;
            novoEst -> q5 = q5;
            novoEst -> q6 = q6;
            novoEst -> q7 = q7;
            novoEst -> q8 = q8;
            novoEst -> q9 = q9;
            novoEst -> q10 = q10;
            novoEst -> prox = NULL;
            l->comeco = novoEst;
        } else { // Com valores
            while (aux->prox != NULL){
                aux = aux->prox;
            }
            novoEst = malloc(sizeof(No));
            strcpy(novoEst->nome, temp);
            novoEst -> q1 = q1;
            novoEst -> q2 = q2;
            novoEst -> q3 = q3;
            novoEst -> q4 = q4;
            novoEst -> q5 = q5;
            novoEst -> q6 = q6;
            novoEst -> q7 = q7;
            novoEst -> q8 = q8;
            novoEst -> q9 = q9;
            novoEst -> q10 = q10;
            novoEst -> prox = NULL;
            aux->prox = novoEst;
        }
    } else {
        printf("Inclusao finalizada\n");
    }
}

void imprimirEstudantes(dadosEstudante *l){ // Função para imprimir a lista
    Estudante *aux;
    aux = l->comeco;
    if (aux == NULL){
        printf("Lista vazia\n");
    }else{
        while(aux != NULL){
            printf("%s %d %d %d %d %d %d %d %d %d %d %d\n", aux->nome, aux->q1, aux->q2, aux->q3, aux->q4, aux->q5, aux->q6, aux->q7, aux->q8, aux->q9, aux->q10, aux->nota);

            aux = aux->prox;
        }
    }
}

void calcularNota(dadosEstudante *l){
    Estudante *aux;
    aux = l->comeco;
    int nota;

    if (aux == NULL){
        printf("Lista vazia\n");
    }else{
        while(aux != NULL){
            aux->q1 == r1
            aux->nota = aux->q1 + aux->q2 + aux->q3 + aux->q4 + aux->q5 + aux->q6 + aux->q7 + aux->q8 + aux->q9 + aux->q10;
            aux = aux->prox;
        }
    }
}

int main(){

    char temp[20];
    int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;
    int q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;

    No *no1, *no2;
    dadosEstudante l;

    // solicitar uma entrada com nome e 10 inteiros - Primeiro teste

    //-------------PRIMEIRO TESTE ---------------//

    /*printf("Qual o gabarito da prova (10 valores separados por espaco): \n");
    scanf("%i %i %i %i %i %i %i %i %i %i", &r1, &r2, &r3, &r4, &r5, &r6, &r7, &r8, &r9, &r10);
    
    printf("Gabarito: %i %i %i %i %i %i %i %i %i %i\n", r1, r2, r3, r4, r5, r6, r7, r8, r9, r10);
    
   // while (1) {
        printf("Digite a entrada(Nome do participante seguido pelas notas separado por espaço):\n");
        scanf("%s %i %i %i %i %i %i %i %i %i %i", &temp, &q1, &q2, &q3, &q4, &q5, &q6, &q7, &q8, &q9, &q10);

        
        printf("%s %i %i %i %i %i %i %i %i %i %i", temp, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10);
        // if (temp != '*'){

        // } else {
        //     break;
        //     printf("Fim do programa\n");
        // }
    //}
    */ //-------------FIM PRIMEIRO TESTE ---------------//

    
    novoEstudante(&l);
    imprimirEstudantes(&l);
    // l.inicio = no1;
    // imprimirLista(&l);
    return 0;
}
