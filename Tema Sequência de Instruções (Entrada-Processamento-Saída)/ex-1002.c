// A fórmula para calcular a área de uma circunferência é:
// area = PI * raio^2

#include <stdio.h>
#include <math.h>

int main () {

float area;
float raio;
float pi = 3.14159;

printf("Bem-vindo!\nEste algoritmo calcula a area de uma circunferencia!\n");
printf("por favor, entre com os seguintes valores ..\n");
printf("informe o valor do raio da circunferencia:\n");

scanf("%f", &raio);

area = pi * pow(raio,2);

printf("Aqui esta o valor da area da circunferencia: %f\n\n", area);
printf("Fim do algoritmo.\n");


    return 0;
}