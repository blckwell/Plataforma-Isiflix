// PARES ENTRE CINCO NÚMEROS
// Faça um programa que leia 5 valores inteiros. Conte quantos destes valores
// digitados são pares e mostre esta informação.

#include <stdio.h>

int main()
{

    int vetor[5];
    int par = 0;
    int impar = 0;

    printf("PARES ENTRE CINCO NUMEROS!\n\n");

    printf("Informe 5 valores:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Valor %d: ", i);
        scanf("%d", &vetor[i]);
        printf("\n");

        if (vetor[i] % 2 == 0)
        {
            ++par;
        }
        else
        {
            ++impar;
        }
    }

    printf("Dos valores informados pelo usuario foram detectados %d pares.\n", par);
    printf("Dos valores informados pelo usuario foram detectados %d impares.\n", impar);

    return 0;
}