// SALARIO
// Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas,
// o valor que recebe por hora e calcule o salário desse funcionário. A seguir, mostre o número
// e o salário do funcionário.

#include <stdio.h>

int main () {

int num;
float salario, valorPorHoratrab;

printf("Vamos descobrir o numero do empregado e o salario mensal.\n\n");
printf("Informe o numero do funcionario: ");
scanf("%d", &num);
printf("\n");

printf("Informe o valor por hora trabalhada: ");
scanf("%f", &valorPorHoratrab);
printf("\n");


salario = 8*valorPorHoratrab*30;

printf("O salario do funcionario numero: %d e = %.4f$ trabalhando 8 horas por dia dentro de um mes.\n\n", num, salario);
printf("Fim do algoritmo.\n");

    return 0;
}