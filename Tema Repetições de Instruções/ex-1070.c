// SEIS NÚMEROS ÍMPARES
// Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X,
// um valor por linha, inclusive o X se for o caso.

#include <stdio.h>

int main () {

int X;

printf("SEIS NUMEROS IMPARES!\n\n");

printf("Informe um numero inteiro: ");
scanf("%d", &X);
printf("\n");

for(int i = 0; i < 6; i++) {
    if(X%2 == 1) {
        printf("%d\n", X);
        ++ X;
    } else {
        printf("%d Nao e um numero impar.\n", X);
        ++ X;
    } 
}

    return 0;
}