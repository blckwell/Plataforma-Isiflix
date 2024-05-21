// NÚMEROS ÍMPARES
// Leia um valor inteiro X(1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X,
// um valor por linha, inclusive o X, se for o caso.

#include <stdio.h>

int main()
{

    int valorInicial = 0;
    int valorFinal = 0;
    int resultado;

    printf("NUMEROS IMPARES!\n\n");

    printf("Informe os valores limites:\n");

    do
    {

        printf("Valor inicial: ");
        scanf("%d", &valorInicial);
        printf("\n");

        printf("Valor Final: ");
        scanf("%d", &valorFinal);
        printf("\n");

        if (valorInicial <= 0 || valorInicial >= 1000 || valorFinal <= 0 || valorFinal > 1000)
        {
            printf("Os valores estao dentro dos parametros.\n");
        }
        else
        {
            printf("Um dos valores nao esta dentro dos parametros (x >= 0 e x <= 1000)\n");
        }
    } while (valorInicial <= 0 || valorInicial >= 1000 || valorFinal <= 0 || valorFinal > 1000);

    resultado = valorFinal - valorInicial;

    for (int i = 0; i < resultado; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}