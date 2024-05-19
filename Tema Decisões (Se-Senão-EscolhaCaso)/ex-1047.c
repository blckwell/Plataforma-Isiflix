// TEMPO DE JOGO COM MINUTOS
// Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo.
// A seguir calcule a duração do jogo. Obs.: O jogo tem duração mínima de um (1) minuto
// e duração máxima de 24 horas.

#include <stdio.h>

int main()
{

    int horaInicial;
    int minutoInicial;
    int horaFinal;
    int minutoFinal;

    int duracaoH;
    int duracaoM;
    int minConvertidoHora;

    printf("TEMPO DE JOGO COM MINUTOS!\n\n");

    printf("Infome a hora inicial do jogo: ");
    scanf("%d", &horaInicial);
    printf("\n");

    printf("Informe o minuto inicial do jogo: ");
    scanf("%d", &minutoInicial);
    printf("\n");

    printf("Informe a hora final do jogo: ");
    scanf("%d", &horaFinal);
    printf("\n");

    printf("Informe o minuto final do jogo: ");
    scanf("%d", &minutoFinal);

    duracaoH = horaInicial - horaFinal;
    duracaoM = minutoInicial - minutoFinal;
    if (duracaoM < 0)
    {
        duracaoM = -1 * duracaoM;
    } else {
        duracaoH = duracaoH * 60;
        duracaoH = duracaoH + duracaoM;
        duracaoM = duracaoH;
        if(duracaoH >= 60) {
            duracaoH = duracaoH/60;
        } else {
            duracaoH = 0;
        }
    }
    if (duracaoM >= 60)
    {
        duracaoM = duracaoM % 60;
        minConvertidoHora = duracaoM / 60;
    }

    if (duracaoH < 0)
    {
        duracaoH = -1 * duracaoH;
        duracaoH += minConvertidoHora;
    }
    else
    {
        duracaoH = 24 - duracaoH;
        duracaoH += minConvertidoHora;
    }

    printf("O jogo durou aproximadamente %d hora(s) e o %d minuto(s) .. \n\n", duracaoH, duracaoM);

    printf("Fim do algoritmo.\n");

    return 0;
}