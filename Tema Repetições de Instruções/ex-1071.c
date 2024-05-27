// SOMA DE ÍMPARES CONSECUTIVOS
// Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

#include <stdio.h>

int main()
{

    int X;
    int Y;
    int soma = 0;
    int somaX = 0;
    int somaY = 0;

    printf("SOMA DE IMPARES CONSECUTIVOS.\n\n");

    printf("Informe o valor de X: ");
    scanf("%d", &X);
    printf("\n");

    printf("Informe o valor de Y: ");
    scanf("%d", &Y);
    printf("\n");

    while (X != 0)
    {
        if (X > 0)
        {
            if (X % 2 == 1)
            {
                somaX += X;
                --X;
            }
            else
            {
                somaX += 0;
                --X;
            }
        }
        else if (X < 0)
        {
            if (X % 2 == 1)
            {
                somaX += X;
                ++X;
            }
            else
            {
                somaX += 0;
                ++X;
            }
        }
    }

    while (Y != 0)
    {
        if (Y > 0)""
        {
            if (Y % 2 == 1)
            {
                somaY += Y;
                --Y;
            }
            else
            {
                somaY += 0;
                --Y;
            }
        }
        else if (Y < 0)
        {
            if (Y % 2 == 1)
            {
                somaY += Y;
                ++Y;
            }
            else
            {
                somaY += 0;
                ++Y;
            }
        }
    }

    printf("%d\n", somaX);
    printf("%d\n", somaY);

    return 0;
}