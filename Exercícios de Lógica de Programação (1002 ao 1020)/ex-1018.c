// CÉDULAS
// Leia um valor inteiro. A seguir, calcule o menor número de notas possível (cédulas) no qual o valor
// pode ser decomposto. As notas consideradas são de 100, 50, 10, 5, 2 e 1. A seguir mostre o valor lido
// e a relação de notas necessárias.

#include <stdio.h>

int main()
{

    int num;
    int notaCem = 0, notaCinq = 0, notaVint = 0, notaDez = 0, notaCinc = 0, notaDois = 0, notaUm = 0;

    printf("CEDULAS!\n\n");

    printf("Informe o valor que vamos decompor: ");
    scanf("%d", &num);
    printf("\n");

    while (num > 1)
    {
        if (num >= 100)
        {
            num = num - 100;
            notaCem++;
        }
        else if (num >= 50)
        {
            num = num - 50;
            notaCinq++;
        }

        else if (num >= 20)
        {
            num = num - 20;
            notaVint++;
        }
        else if (num >= 10)
        {
            num = num - 10;
            notaDez++;
        }
        else if (num >= 5)
        {
            num = num - 5;
            notaCinc++;
        }
        else if (num >= 2)
        {
            num = num - 2;
            notaDois++;
        }
        else if (num >= 1)
        {
            num = num - 1;
            notaUm++;
        }
        else
        {
            printf("Numero menor do que 1.\n");
        }
    }

    printf("%d nota(s) de R$ 100,00\n", notaCem);
    printf("%d nota(s) de R$ 50,00\n", notaCinq);
    printf("%d nota(s) de R$ 20,00\n", notaVint);
    printf("%d nota(s) de R$ 10,00\n", notaDez);
    printf("%d nota(s) de R$ 5,00\n", notaCinc);
    printf("%d nota(s) de R$ 2,00\n", notaDois);
    printf("%d nota(s) de R$ 1,00\n", notaUm);

    return 0;
}