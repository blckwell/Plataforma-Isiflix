// DDD
// Leia um número inteiro que representa um código de DDD para discagem interurbana.
// Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:
/*
DDD  CIDADE
61   Brasilia
71   Salvador
11   Sao Paulo
21   Rio de Janeiro
32   Juiz de Fora
19   Campinas
14   Jau
31   Belo Horizonte
27   Vitoria
*/

#include <stdio.h>

int main()
{

    int digito;

    printf("DDD!\n\n");

    printf("Informe o seu DDD: ");
    scanf("%d", &digito);

    switch (digito)
    {
    case 61:
        printf("Brasilia.\n\n");
        break;

    case 71:
        printf("Salvador.\n\n");
        break;

    case 11:
        printf("Sao Paulo.\n\n");
        break;

    case 21:
        printf("Rio de Janeiro.\n\n");
        break;

    case 32:
        printf("Juiz de Fora.\n\n");
        break;

    case 19:
        printf("Campinas.\n\n");
        break;

    case 14:
        printf("Jau.\n\n");
        break;

    case 31:
        printf("Belo Horizonte.\n\n");
        break;

    case 27:
        printf("Vitoria\n\n");

    default:
        printf("Opcao Invalida.\n\n");
        break;
    }

    printf("Fim do algoritmo.\n");

    return 0;
}