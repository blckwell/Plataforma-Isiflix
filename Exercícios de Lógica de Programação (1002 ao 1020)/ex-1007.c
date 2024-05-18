// DIFERENÇA
// Leia quatro valores A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto
// de C e D segundo a fórmula: DIFERENCA = (A * B - C * D)

#include <stdio.h>

int main () {

int A, B, C, D;
int DIFERENCA;

printf("Bem vindo ao algoritmo DIFERENCA:\n");

printf("Informe o valor de A = ");
scanf("%d", &A);
printf("\n");

printf("Informe o valor de B = ");
scanf("%d", &B);
printf("\n");

printf("Informe o valor de C = ");
scanf("%d", &C);
printf("\n");

printf("Informe o valor de D = ");
scanf("%d", &D);
printf("\n");

DIFERENCA = (A*B - C*D);

printf("DIFERENCA = %d\n\n", DIFERENCA);
printf("Fim do algoritmo.\n");


    return 0;
}