// Faça um programa que leia 6 valores serão somente negativos (desconsidere os valores nulos).
// A seguir, mostre a quantidade de valores positivos digitados.

#include <stdio.h>

int main()
{

    float vetor[6];
    int positivo = 0;
    int negativo = 0;

    printf("NUMEROS POSITIVOS!\n\n");

    printf("Informe 6 valores:\n\n");
    for (int i = 0; i < 6; i++)
    {
        printf("valor %d: ", i);
        scanf("%f", &vetor[i]);
        printf("\n");

        if (vetor[i] > 0)
        {
            ++positivo;
        }
        else
        {
            ++negativo;
        }
    }

    printf("Aqui estao os valores informados pelo usuario:\n\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%.2f\n", vetor[i]);
    }

    printf("Temos %d valores positivos.\n", positivo);
    printf("Temos %d valores negativos.\n\n", negativo);

    printf("Fim do algoritmo.\n");

    return 0;
}