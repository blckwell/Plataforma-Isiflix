// COORDENADAS DE UM PONTO
// Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano.
// A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos
// ou na origem (x = y = 0). Observe a figura

#include <stdio.h>

int main()
{

    float x, y;

    printf("COORDENADAS DE UM PONTO!\n\n");

    printf("Informe o valor de x = ");
    scanf("%f", &x);
    printf("\n");

    printf("Informe o valor de y = ");
    scanf("%f", &y);
    printf("\n");

    if (x == 0 && y == 0)
    {
        printf("Origem!\n\n");
    }
    else if ((x > 0 || x < 0) && (y == 0))
    {
        printf("Eixo X.\n\n");
    }
    else if ((y > 0 || y < 0) && (x == 0))
    {
        printf("Eixo Y.\n\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2.\n\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Q1.\n\n");
    }
    else if (y > 0 && x > 0)
    {
        printf("Q3.\n\n");
    }
    else
    {
        printf("Q4.\n\n");
    }

    printf("Fim do algoritmo.\n");

    return 0;
}