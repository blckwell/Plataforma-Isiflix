// SORT SIMPLES
// Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem
// crescente na mesma linha.

#include <stdio.h>

int main()
{

    int num1, num2, num3;
    int vetorResultado[3];

    printf("SORT SIMPLES!\n\n");

    printf("Informe 3 valores:\n");

    printf("Valor 1: ");
    scanf("%d", &num1);
    printf("\n");

    printf("Valor 2: ");
    scanf("%d", &num2);
    printf("\n");

    printf("Valor 3: ");
    scanf("%d", &num3);
    printf("\n");

    if (num1 <= num2 && num1 <= num3)
    {
        vetorResultado[0] = num1;
        if (num2 <= num3)
        {
            vetorResultado[1] = num2;
            vetorResultado[2] = num3;
        }
        else
        {
            vetorResultado[1] = num3;
            vetorResultado[2] = num2;
        }
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        vetorResultado[0] = num2;
        if (num1 <= num3)
        {
            vetorResultado[1] = num1;
            vetorResultado[2] = num3;
        }
        else
        {
            vetorResultado[1] = num3;
            vetorResultado[2] = num1;
        }
    }
    else
    {
        vetorResultado[0] = num3;
        if (num1 <= num2)
        {
            vetorResultado[1] = num1;
            vetorResultado[2] = num2;
        }
        else
        {
            vetorResultado[1] = num2;
            vetorResultado[2] = num1;
        }
    }

    printf("Resultado do Sort Simples:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", vetorResultado[i]);
    }

    printf("\n\nFim do algoritmo.\n");

    return 0;
}