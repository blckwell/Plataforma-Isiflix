// CONVERSÃO DE TEMPO
// Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica,
// e informe-o expresso no formato horas/minutos/segundos
// obs: seg / 60 = minutos
//     min / 60 = horas

#include <stdio.h>

int main()
{

    int hora = 0;
    int minuto = 0;
    int segundo = 0;
    int temp;
    printf("CONVERSAO DE TEMPO\n\n");

    printf("Informe um valor em segundos para ser convertido para o formato apropriado: ");
    scanf("%d", &segundo);

    temp = segundo;
    minuto = segundo/60;
    temp = temp%60;
    
    hora = minuto/60;
    
    printf("%d(horas)/%d(minutos)/%d(segundos)\n\n", hora, minuto, segundo);

    printf("Fim do algoritmo.\n");

    return 0;
}