// IMPOSTO DE RENDA
// Há um país imaginário denominado Lisarb cuja moeda deste país é o Rombus e seu símbolo
// é o R$. Leia um valor real, equivalente ao salário de uma pessoa de Lisarb. Em seguida,
// calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, seguindo a tabela abaixo.
/*
de R$ 0.00 até R$ 2000.00       - Isento
de R$ 2000.01 até R$ 3000.00    - 8%
de R$ 3000.01 até R$ 4500.00    - 18%
acima de R$ 4500.00             - 28%
*/
// Lembre que, se o salário for $ 3002.00, a taxa que incide è de 8% apenas sobre R$ 1000.00,
// pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda.
// No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta
// en R$ 80.36 no total. O valor deve ser impresso com duas casas decimais.

#include <stdio.h>

int main()
{

    float valor;
    float resto;

    printf("IMPOSTO DE RENDA!\n\n");

    printf("Informe o salario da pessoa: ");
    scanf("%f", &valor);

    if (valor >= 0.00 && valor <= 2000.00)
    {
        printf("A pessoa esta isento do Imposto de Renda.\n\n");
    }
    else if (valor >= 2000.01 && valor <= 3000.00)
    {
        resto = valor - 2000.00;
        valor = resto * 0.8;

        printf("A pessoa devera contribuir com o Imposto de Renda com o valor de: %.2f\n\n", valor);
    }
    else if (valor >= 3000.01 && valor <= 4500.00)
    {
        valor = valor - 3000.00;
        valor = ((1000 * 8)/100) + ((valor * 18)/100);
        printf("A pessoa devera contribuir com o Imposto de Renda com o valor de: %.2f\n\n", valor);
    }
    else
    {
        valor = valor - 4500.00;
        valor = ((1000 * 8)/100) + ((1500 * 18)/100) + ((valor * 28)/100);
        printf("A pessoa devera contribuir com o Imposto de Renda com o valor de: %.2f\n\n", valor);
    }

    return 0;
}