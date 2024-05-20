// AUMENTO DE SALÁRIO
// A empresa ABC resolveu conceder um aumento de salários e seus funcionários de acordo com a tabela abaixo:
/*
Salário                 Percentual
0.00    - 400.00        15%
400-01  - 800.00        12%
800.01  - 1200.00       10%
1200.01 - 2000.00       7%
Acima de  2000.00       4%
*/

#include <stdio.h>

int main()
{

    char nome[20];
    float salario;
    float salarioAjustado;
    float reajuste;

    printf("AUMENTO DE SALARIO!\n\n");

    printf("Informe o nome do funcionario: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]", nome);
    printf("\n");

    printf("Informe salario do funcionario %s: ", nome);
    scanf("%f", &salario);
    printf("\n");

    if (salario >= 0.00 && salario <= 400.00)
    {
        salarioAjustado = salario + (salario * 0.15);
        reajuste = salarioAjustado - salario;

        printf("Novo salario de %s: %.3f\n", nome, salarioAjustado);
        printf("Reajuste ganho: %.3f\n", reajuste);
        printf("Em percentual: 15 por cento.\n\n");
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        salarioAjustado = salario + (salario * 0.12);
        reajuste = salarioAjustado - salario;

        printf("Novo salario de %s: %.3f\n", nome, salarioAjustado);
        printf("Reajuste ganho: %.3f\n", reajuste);
        printf("Em percentual: 12 por cento.\n\n");
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        salarioAjustado = salario + (salario * 0.10);
        reajuste = salarioAjustado - salario;

        printf("Novo salario de %s: %.3f\n", nome, salarioAjustado);
        printf("Reajuste ganho: %.3f\n", reajuste);
        printf("Em percentual: 10 por cento.\n\n");
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        salarioAjustado = salario + (salario * 0.07);
        reajuste = salarioAjustado - salario;

        printf("Novo salario de %s: %.3f\n", nome, salarioAjustado);
        printf("Reajuste ganho: %.3f\n", reajuste);
        printf("Em percentual: 7 por cento.\n\n");
    }
    else
    {
        salarioAjustado = salario + (salario * 0.04);
        reajuste = salarioAjustado - salario;

        printf("Novo salario de %s: %.3f\n", nome, salarioAjustado);
        printf("Reajuste ganho: %.3f\n", reajuste);
        printf("Em percentual: 4 por cento.\n\n");
    }

    printf("Fim do algoritmo.\n");

    return 0;
}