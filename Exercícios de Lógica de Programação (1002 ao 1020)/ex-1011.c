// ESFERA
// Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
// A fórmula para calcular o volume é: (4/3) * pi * R^3

#include <stdio.h>
#include <math.h>

int main () {

float volEsfera;
float pi = 3.14159;
float raio;

printf("Calculo da Esfera!\n\n");

printf("Informe o valor do raio: ");
scanf("%f", &raio);
printf("\n");

volEsfera = (4.0/3.0) * pi * pow(raio, 3);

printf("O volume da esfera e = %f\n\n", volEsfera);
printf("Fim do algoritmo.\n");


    return 0;
}