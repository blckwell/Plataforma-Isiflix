// CALCULO DO PREÇO
// Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1,
// o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre
// o valor a ser pago.

#include <stdio.h>

typedef struct
{
    int codPeca;
    float valPeca;
} peca;

int main()
{

    peca peca1[5];
    peca peca2[5]; // Não foi utilizada, no futuro vamos modularizar para servir para n casos!
    float total;

    printf("Calculo do preco!\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o codigo da peca1 [%d]: ", i);
        scanf("%d", &peca1[i].codPeca);
        printf("\n");

        printf("Informe o valor da peca1, unidade [%d]: ", i);
        scanf("%f", &peca1[i].valPeca);
        printf("\n");

        total = total + peca1[i].valPeca;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Codigo peca1 [%d]: %d\n", i, peca1[i].codPeca);
        printf("Valor da peca1 [%d]: %.2f\n\n", i, peca1[i].valPeca);
    }

    printf("O valor total a pagar: %.2f\n\n", total);

    return 0;
}