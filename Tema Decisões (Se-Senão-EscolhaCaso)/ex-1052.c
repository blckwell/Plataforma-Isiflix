// MÊS
// Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado
// como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.

#include <stdio.h>

int main () {

int digito;

printf("MES!\n\n");

printf("Informe um numero entre 1 e 12: ");
scanf("%d", &digito);
printf("\n");

switch (digito)
{
case 1: printf("January.\n\n");
    break;

case 2: printf("February.\n\n");
break;

case 3: printf("March.\n\n");
break;

case 4: printf("April.\n\n");
break;

case 5: printf("May.\n\n");
break;

case 6: printf("June.\n\n");
break;

case 7: printf("July.\n\n");
break;

case 8: printf("August.\n\n"); 
break;

case 9: printf("September.\n\n");
break;

case 10: printf("Octuber.\n\n");
break;

case 11: printf("November.\n\n");
break;

case 12: printf("December.\n\n");
break;

default: printf("Opcao invalida.\n\n");
    break;
}

printf("Fim do algoritmo.\n\n");

    return 0;
}