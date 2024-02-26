
#include <stdio.h>

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

int main(){

    int vetor[10];

    printf("Qual o gabarito da prova?");
    scanf("%d %d %d %d %d %d %d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4], &vetor[5], &vetor[6], &vetor[7], &vetor[8], &vetor[9]);

    char nome[100];
    int respostas[10];
    int maior = 0, menor = 10, acertos = 0, total = 0;

    printf("Qual o nome do participante?\n");
    scanf("%s", &nome);

    while (nome[0] != '*'){

        printf("Qual a resposta do participante?\n");
        scanf("%d %d %d %d %d %d %d %d %d %d", &respostas[0], &respostas[1], &respostas[2], &respostas[3], &respostas[4], &respostas[5], &respostas[6], &respostas[7], &respostas[8], &respostas[9]);

        int acertosParticipante = 0;

        for (int i = 0; i < 10; i++){
            if (respostas[i] == vetor[i]){
                acertosParticipante++;
            }
        }

        if (acertosParticipante > maior){
            maior = acertosParticipante;
        }

        if (acertosParticipante < menor){
            menor = acertosParticipante;
        }

        if (acertosParticipante > 5){
            acertos++;
        }

        total++;

        printf("Qual o nome do participante?\n");
        scanf("%s", &nome);
    }

    printf("Maior pontuação: %d\nMenor pontuação: %d\n", maior, menor);

    printf("Percentual de participantes que acertaram mais da metade: %0.2f\n", (float)acertos/total*100);

    return 0;
}
