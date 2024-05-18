// CONSUMO
// Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em km)
// e o total de combustìvel gasto (em litros)

#include <stdio.h>

int main () {

float X;
float Y;

float consumo;

printf("CONSUMO!\n\n");

printf("Informe a distancia total percorrida: ");
scanf("%f", &X);
printf("\n");

printf("Informe o valor total de combustivel gasto: ");
scanf("%f", &Y);
printf("\n");

consumo = X/Y;

printf("O consumo medio do automovel foi %.3f km/l\n\n", consumo);

printf("Fim do algoritmo.\n");

return 0;

}