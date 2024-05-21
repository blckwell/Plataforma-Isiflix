// PARES, IMPARES, POSITIVOS E NEGATIVOS
// Leia 5 valores. A seguir mostre quantos valores digitados foram pares, quantos valores
// digitados foram positivos e quantos valores digitados foram negativos.

#include <stdio.h>

int main()
{

    int valor[5];

    int positivo = 0;
    int negativo = 0;
    int par = 0;
    int impar = 0;

    printf("PARES, IMPARES, POSITIVOS E NEGATIVOS!\n\n");

    printf("Informe 5 valores:\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Valor %d: ", i);
        scanf("%d", &valor[i]);
        printf("\n");

        if (valor[i] > 0 && valor[i] % 2 == 0 || valor[i] == 0)
        {
            if (valor[i] == 0)
            {
                ++par;
            }
            else
            {
                ++positivo;
                ++par;
            }
        }
        else if (valor[i] < 0 && valor[i] % 2 == 0)
        {
            ++negativo;
            ++par;
        }
        else if (valor[i] > 0 && valor[i] % 2 == 1)
        {
            ++positivo;
            ++impar;
        }
        else
        {
            ++negativo;
            ++impar;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}