// SOMA SIMPLES
// Leia dois valores inteiros, no caso para variáveis A e B. A seguir, 
// calcule a soma entre elas e atribua à variável SOMA. A seguir escrevero valor desta variável.

#include <stdio.h>

int main()
{

int a, b, c;

printf("Bem vindo a calculadora de soma simples:\n");
printf("Aqui vamos calcular uma soma entre dois valores quaisquer .. \n");
printf("Informe os valores de A e B:\n");

printf("A = ");
scanf("%d", &a);
printf("\n");

printf("B = ");
scanf("%d", &b);
printf("\n");  

c = a + b;

printf("Aqui esta o resultado da soma:\nA + B = %d\n\n", c);
printf("Fim do algoritmo.\n");


    return 0;
}