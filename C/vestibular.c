
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

struct estudante{
    char nome[20];
    int q[10];
    int nota;
    struct estudante *prox;
};

typedef struct estudante Estudante;

typedef struct{
    Estudante *comeco;
}dadosEstudante;

// Fim da estrutura da lista

void novoEstudante(dadosEstudante *l){ // Inserir nó na lista
    Estudante *aux, *novoEst;
    int novoValor;
    char temp[20];
    int q[10];

    printf("Digite a entrada(Nome do participante seguido pelas notas separado por espaco ou * para finalizar a inclusao de dados):\n");
    scanf("%s %i %i %i %i %i %i %i %i %i %i", &temp, &q[1], &q[2], &q[3], &q[4], &q[5], &q[6], &q[7], &q[8], &q[9], &q[10]);

    if (temp[1] != '*'){
        
        if (aux == NULL){ // Sem valores 
            novoEst = malloc(sizeof(Estudante));
            strcpy(novoEst->nome, temp);
            
            for(int i = 1; i < 11; i++){
                
                novoEst -> q[i] = q[i];
            
            }

            novoEst -> prox = NULL;
            l->comeco = novoEst;
        } else { // Com valores
            while (aux->prox != NULL){
                aux = aux->prox;
            }
            novoEst = malloc(sizeof(No));
            strcpy(novoEst->nome, temp);
            
            for(int i = 1; i < 11; i++){
            
                novoEst -> q[i] = q[i];
            
            }

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
            printf("%s %i %i %i %i %i %i %i %i %i %i %i %i\n", aux->nome, aux->q[1], aux->q[2], aux->q[3], aux->q[4], aux->q[5], aux->q[6], aux->q[7], aux->q[8], aux->q[9], aux->q[10], aux->nota);

            aux = aux->prox;
        }
    }
}

// void calcularNota(dadosEstudante *l){
//     Estudante *aux;
//     aux = l->comeco;
//     int nota = 0;

//     if (aux == NULL){
//         printf("Lista vazia\n");
//     }else{
//         while(aux != NULL){
//             for (int i = 1; i <= 10; i++){
//                 if (aux->q[i] == r[i]){
//                     nota = nota + 1;
//                 } else {
//                     nota = nota + 0;
//                 }
//             }
//             aux->nota = nota;
//             aux = aux->prox;
//         }
//     }
// }

int main(){

    char temp[20];
    int r[10];

    dadosEstudante l;

    // solicitar uma entrada com nome e 10 inteiros - Primeiro teste

    printf("Qual o gabarito da prova (10 valores separados por espaco): \n");
    scanf("%i %i %i %i %i %i %i %i %i %i", &r[1], &r[2], &r[3], &r[4], &r[5], &r[6], &r[7], &r[8], &r[9], &r[10]);
    
    void calcularNota(dadosEstudante *l){
        Estudante *aux;
        aux = l->comeco;
        int nota = 0;

        if (aux == NULL){
            printf("Lista vazia\n");
        }else{
            while(aux != NULL){
                for (int i = 1; i <= 10; i++){
                    if (aux->q[i] == r[i]){
                        nota = nota + 1;
                    } else {
                        nota = nota + 0;
                    }
                }
                aux->nota = nota;
                aux = aux->prox;
            }
        }
    }
    
    novoEstudante(&l);
    imprimirEstudantes(&l);
    // l.inicio = no1;
    // imprimirLista(&l);
    return 0;
}
