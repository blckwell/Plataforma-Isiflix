// IDADE EM DIAS
// Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias.
// Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste
// nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício
// com objetivo de testar raciocínio matemático simples.

#include <stdio.h>

int main () {

int idade;
int ano;
int temp;

printf("IDADE EM DIAS!\n\n");

printf("Informe tua idade para mim converter para anos, meses e dias: ");
scanf("%d", &idade);

temp = idade;
ano = idade/12;
temp = temp%12;



    return 0;
} 