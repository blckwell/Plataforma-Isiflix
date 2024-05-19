// TESTE DE SELEÇÃO
// Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A,
// e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A
// for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

#include <stdio.h>

int main()
{

    int A, B, C, D;
    int soma1, soma2;

    printf("TESTE DE SELECAO!\n\n");

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("\n");

    printf("Informe o valor de B: ");
    scanf("%d", &B);
    printf("\n");

    printf("Informe o valor de C: ");
    scanf("%d", &C);
    printf("\n");

    printf("Informe o valor de D: ");
    scanf("%d", &D);
    printf("\n");

    if (B > C && D > A)
    {
        soma1 = C + D;
        soma2 = A + B;
        if (soma1 > soma2)
        {
            if (C && D >= 0)
            {
                if (A % 2 == 0)
                {
                    printf("Valores aceitos.\n\n");
                }
            }
        }
    }
    else
    {
        printf("Valores nao aceitos.\n\n");
    }

    printf("Fim do algoritmo.\n");
}