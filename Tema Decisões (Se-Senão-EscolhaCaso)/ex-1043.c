// TRIÂNGULO
// Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo.
// Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:
// Perimetro = xx.x
// Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura,
// mostrando a mensagem Area = xx.x

#include <stdio.h>

int main()
{

    float A, B, C;
    float perimetro;
    float areaTrap;

    printf("TRIANGULO!\n\n");

    printf("Informe o valor de A: ");
    scanf("%f", &A);
    printf("\n");

    printf("Informe o valor de B: ");
    scanf("%f", &B);
    printf("\n");

    printf("Informe o valor de C: ");
    scanf("%f", &C);
    printf("\n");

    if (A + B > C)
    {
        perimetro = A + B + C;
        printf("O perimetro = %.2f\n\n", perimetro);
    }
    else if (B + C > A)
    {
        perimetro = A + B + C;
        printf("O perimetro = %.2f\n\n", perimetro);
    }
    else if (A + C > B)
    {
        perimetro = A + B + C;
        printf("O perimetro = %.2f\n\n", perimetro);
    }
    else
    {
        areaTrap = ((A + B) * C) / 2;
        printf("A area do trapezio = %.2f\n\n", areaTrap);
    }

    printf("Fim do algoritmo.\n");

    return 0;
}