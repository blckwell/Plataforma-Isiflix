// NÚMEROS ÍMPARES
// Leia um valor inteiro X(1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X,
// um valor por linha, inclusive o X, se for o caso.

#include <stdio.h>

int main()
{

    int X = 0;
    int i = 0;

    printf("NUMEROS IMPARES!\n\n");

    printf("Informe os valores limites:\n");

    do
    {

        printf("Informe o valor: ");
        scanf("%d", &X);
        printf("\n");

        if (X > 1000 || X < 0)
        {
            printf("O numero informado nao esta dentro do range!\n");
            printf("Por favor, digite um numero maior que 0 e menor ou igual a 1000: ");
            printf("\n");
        }

    } while (X > 1000 || X < 0);

    while (i <= X)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
            ++i;
        }
        else
        {
            ++i;
        }
    }

    return 0;
}