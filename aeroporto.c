// checar o RG, Passagem
// Checar data de nascimento dele e na passagem
// Checar qual o assento do passageiro e informar o assento
// Se não tiver RG deve ir para saída
// Se não tiver passagem deve ir para a recepção
// Se data não bater deve-se chamar a polícia

// Entrada dos dados
// inteiro positivo - quantidade de passageiros
// String - RG ou Nao possui
// String - Data - data de nascimento - DD/MM/AAAA
// String - Passagem ou Nao possui
// String - Data - data na passagem - DD/MM/AAAA
// String - A12

#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){

    int psg; 
    int diaa, mesa, anoa;
    int diab, mesb, anob;

    char rg[11], passagem[11], assento[11];

    // Formato de saída
    // caso o passageiro não tenha RG: A saída é nessa direção
    // caso o passageiro não tenha Passagem a saída: A recepção é nessa direção
    // caso as datas de nascimento não sejam iguais: 190
    // caso todos os anteriores não aconteção a saída deve ser: O seu assento é:
    printf("Quantos passageiros?\n");
    scanf("%d", &psg);

    for (int i = 1 ; i <= psg; i++){
        
        printf("O passageiro %d possui 'RG' ou 'Nao possui'?\n", i);
        scanf("%s", &rg);

        if (rg[0] == 'R'){

            printf("O passageiro %d possui 'Passagem' ou 'Nao possui'?\n", i);
            scanf("%s", &passagem);

            if (passagem[0] == 'P'){
                
                printf("Qual a data de nascimento do passageiro %d? No formato DD/MM/AAAA\n", i);
                scanf("%d/%d/%d", &diaa, &mesa, &anoa);

                printf("Qual a data que de nascimento do passageiro %d que consta na passagem? No formato DD/MM/AAAA\n", i);
                scanf("%d/%d/%d", &diab, &mesb, &anob);
                
                if ( diaa == diab && mesa == mesb && anoa == anob){
                    
                    printf("Qual o assento que consta na passagem do passageiro %d? No formato A12\n", i);
                    scanf("%s", &assento);
                    printf("Seu assento e: %s tenha um bom dia\n", assento);

                } else {

                    printf("190\n");

                }
            } else {

                printf("A recepcao e nessa direcao\n");

            }
        } else {

            printf("A saida e nessa direcao\n");

        }
    

    }
    return 0;
}