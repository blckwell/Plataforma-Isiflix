// INTERVALO
// Você deve fazer um programa que leia um valor real qualquer e apresente uma mensagem dizendo
// em qual dos seguintes intervalos ([0, 25], [25, 50], [50, 75], [75, 100]) este valor se encontra.
// Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem
// "Fora do intervalo".

#include <stdio.h>

int main () {

float num;

printf("INTERVALO!\n\n");

printf("Informe um valor: ");
scanf("%f", &num);
printf("\n");

if(num >=0 && num < 25) {
    printf("O numero %.2f esta no intervalo [0, 25]\n\n", num);
} else if(num >= 25 && num < 50) {
    printf("O numero %.2f esta no intervalo [25, 50]\n\n", num);
} else if(num >= 50 && num < 75) {
    printf("O numero %.2f esta no intervalo [50, 75]\n\n", num);
} else if(num >= 75 && num <= 100) {
    printf("O numero %.2f esta no intervalo [75, 100]\n\n", num);
} else {
    printf("O numero %.2f nao pertece ao intervalo.\n\n", num);
}

printf("Fim do algoritmo.\n");

return 0;

}