
/*
Cada jogo custa R$ 19.90
50% do valor total é o salário

jogosVendidos = 
salario = jogosVendidos * 0.5
bonus = (jogosVendidos / 15) 

*/

#include <stdio.h>
#include <math.h>

int main (){
    int quantidadeJogos;
 
    printf("Quantos jogos foram vendidos?\n");
    scanf("%d", &quantidadeJogos);


    float 
        valorTotal = quantidadeJogos * 19.9, 
        salario = valorTotal * 0.5,
        bonus = floor(quantidadeJogos / 15) * (valorTotal * 0.08);
        

    printf("Venda total: %0.2f \nValor do salario: %0.2f \nValor do bonus: %0.2f\n", valorTotal, salario, bonus);
    
    return 0;
}