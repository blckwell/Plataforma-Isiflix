// GASTO DE COMBUSTÍVEL
// Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem,
//ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples 
// programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média 
// durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, calcular quantos litros seriam necessários.


/* 
tempo gasto da viagem 3hs X velocidade media 100km/h = 300 km/h
12 km por 1 litro

velocidade media = (tempo * velocidade) / 12 km/l
*/
#include <stdio.h>

int main () {

int tempo;
float velocidadeM;
float qtLitro;

printf("GASTO DE COMBUSTIVEL!\n\n");

printf("Informe o tempo gasto na viagem: ");
scanf("%d", &tempo);
printf("\n");

printf("Informe a velocidade media do automovel: ");
scanf("%f", &velocidadeM);

qtLitro = (tempo*velocidadeM)/12;

printf("Quantidade necessaria para realizar a viagem: %.3f km/l\n\n", qtLitro);

printf("Fim do algoritmo.\n");

    return 0;
}