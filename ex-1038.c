// LANCHE
// Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item.
// A seguir, calcule e mostre o valor da conta a pagar.
/*
Codigo - Descrição         - Preço
1      - Cachorro Quente     R$ 4.00
2      - X Salada            R$ 4.50
3      - X-Bacon             R$ 5.00
4      - Torrada Simples     R$ 2.00
5      - Refrigerante        R$ 1.50
*/

#include <stdio.h>

int main()
{

    int num1, num2;
    float total;

    printf("LANCHE!\n\n");

    printf("*** Bem vindo a Lancheria Well's!!! ***\n\n");
    printf("** Posso anotar o seu pedido? (1) - Sim (0) - Nao **\n");
    scanf("%d", &num1);

    if (num1 == 1)
    {
        printf("Otimo! Aqui esta o cardapio.\n\n");
        printf("Selecione o codigo referente ao lanche ou bebida que deseje.\n");
        printf("Codigo - Descricao         - Preco\n");
        printf("1      - Cachorro Quente     R$ 4.00\n");
        printf("2      - X Salada            R$ 4.50\n");
        printf("3      - X-Bacon             R$ 5.00\n");
        printf("4      - Torrada Simples     R$ 2.00\n");
        printf("5      - Refrigerante        R$ 1.50\n\n");

        scanf("%d", &num2);
    }
    else
    {
        printf("Ok! Tenha um bom dia.\n\n");
    }

    switch (num2)
    {
    case 1:
        printf("Informe a quantidade de Cachorros Quentes: \n");
        scanf("%f", &total);
        total = total * 4.00;

        printf("Total: R$ %.2f\n", total);
        break;
    case 2:
        printf("Informe a quanidade de X-Saladas: \n");
        scanf("%f", &total);
        total = total * 4.50;

        printf("Total: R$ %.2f\n", total);
        break;
    case 3:
        printf("Informe a quantidade de X-Bacons: \n");
        scanf("%f", &total);
        total = total * 5.00;

        printf("Total: R$ %.2f\n", total);
        break;
    case 4:
        printf("Infome a quantidade de Torradas Simples: \n");
        scanf("%f", &total);
        total = total * 2.00;

        printf("Total: R$ %.2f\n", total);
        break;
    case 5:
        printf("Informe a quantidade de Bebidas: \n");
        scanf("%f", &total);
        total = total * 1.50;

        printf("Total: R$ %.2f\n", total);
        break;
    default:
        printf("Opcao incorreta.\n");
    }

    printf("Fim do algoritmo.\n");

    return 0;
}