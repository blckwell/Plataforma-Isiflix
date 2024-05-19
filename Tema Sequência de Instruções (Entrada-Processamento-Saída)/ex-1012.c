// ÁREAS
// Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e mostre:
// a) a área di triângulo retângulo que tem A por base e C por algura.
// b) a área do círculo de raio C. (pi = 3.14159).
// c) a área do trapézio que tem A e B por bases e C por altura.
// d) a área do quadrado que tem lado B.
// e) a área do retângulo que tem lados A e B.

#include <stdio.h>
#include <math.h>

#define pi 3.14159

void areaTriRet(float A, float C) {
    float total;
    total = (A * C)/2;
    printf("TRIANGULO: %.3f\n", total);
};

void areaCirc(float C) {
    float total;
    total = pi * pow(C, 2);
    printf("CIRCULO: %.3f\n", total);
};

void areaTrap(float A, float B, float C) {
    float total;
    total = ((A + B) * C)/2;
    printf("TRAPEZIO: %.3f\n", total);
};

void areaQuad(float B) {
    float total;
    total = B*B;
    printf("QUADRADO: %.3f\n", total);
};

void areaRet(float A, float B) {
    float total;
    total = A*B;
    printf("CIRCULO: %.3f\n\n", total);
};

int main () {

void areaTriRet(float A, float C);
void areaCirc(float C);
void areaTrap(float A, float B, float C);
void areaQuad(float B);
void areaRet(float A, float B);

float A, B, C;

printf("AREAS!\n\n");


printf("Informe o valor de A: ");
scanf("%f", &A);
printf("\n");

printf("Informe o valor de B: ");
scanf("%f", &B);
printf("\n");

printf("Informe o valor de C: ");
scanf("%f", &C);
printf("\n");

areaTriRet(A, C);
areaCirc(C);
areaTrap(A, B, C);
areaQuad(B);
areaRet(A, B);

printf("Fim do algoritmo.\n");

    return 0; 
}