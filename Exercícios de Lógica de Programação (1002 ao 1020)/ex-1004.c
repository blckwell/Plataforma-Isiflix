// PRODUTO SIMPLES
// Leia dois valores inteiros. A seguir,
// calcule o produto entre estes dois valores e atribua esta operação à variável PROD.
// A seguir mostre a variável PROD com mensagem correspondente.


#include <stdio.h>

int main () {

int a, b, c;

printf("Bem vindo a calculadora de produto simples:\n");
printf("Aqui vamos calcular o produto entre dois valores quaisquer .. \n");
printf("Informe os valores de A e B:\n");

printf("A = ");
scanf("%d", &a);
printf("\n");

printf("B = ");
scanf("%d", &b);
printf("\n");  

c = a * b;

printf("Aqui esta o resultado da soma:\nA x B = %d\n\n", c);
printf("Fim do algoritmo.\n");

return 0;

}