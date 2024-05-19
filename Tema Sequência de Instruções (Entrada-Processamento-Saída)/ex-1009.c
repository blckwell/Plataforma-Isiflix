// SALARIO COM BONUS
// Faça um programa que leia o nome de um vendedor, o seu salário fixo e total de vendas
// efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre
//suas vendas efetuadas, informar o total a receber no final do mês.

#include <stdio.h>

int main () {

char nome[20];
float salario, salarioB;
float totalVendas;

printf("Vamos saber o salario bonus do vendedor:\n\n");

printf("Informe o nome do vendedor: ");
scanf("%[^\n]", nome);
setbuf(stdin, NULL);
printf("\n");

printf("informe o salario do funcionario %s: ", nome);
scanf("%f", &salario);
printf("\n");

printf("Informe o total de vendas do funcionario %s em reais: ", nome);
scanf("%f", &totalVendas);
printf("\n");

salarioB = (salario + ((totalVendas*15)/100));

printf("O salario Bonificado do funcionario %s e = %.4f$\n\n", nome, salarioB);
printf("Fim do algoritmo.\n");

    return 0;
}