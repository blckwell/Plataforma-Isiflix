// SOMA DE ÍMPARES CONSECUTIVOS
// Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

#include <stdio.h>

int main()
{

    int X;
    int Y;
    int i = 0;
    int j = 0;
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

    do
    {
        if (i < X)
        {
            if (i % 2 == 1)
            {
                somaX += i;
                ++i;
            }
            else
            {
                ++i;
            }
        }
        else if (i > X)
        {
            X *= -1;
            somaX += i;
            ++i;
            if (i % 2 == 1)
            {
                somaX += i;
            }
            else
            {
                ++i;
            }
            somaX *= -1;
        }
    } while (i != 0);

    do
    {
        if (j < Y)
        {
            if (j % 2 == 1)
            {
                somaY += j;
                ++j;
            }
            else
            {
                ++j;
            }
        }
        else if (j > Y)
        {
            Y *= -1;
            if (j % 2 == 1)
            {
                somaY += j;
                ++j;
            }
            else
            {
                ++j;
            }
            somaY *= -1;
        }
    } while (j != 0);

    soma = somaX + somaY;

    printf("%d\n", somaX);
    printf("%d\n", somaY);
    printf("%d\n\n", soma);

    printf("Fim do algoritmo.\n");

    return 0;
}