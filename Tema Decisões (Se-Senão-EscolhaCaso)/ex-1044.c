// TEMPO DE JOGO
// Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo,
// sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração
// mínima de 1 hora e máxima de 24 horas.

#include <stdio.h>

int main()
{

    int horaInicial;
    int horaFinal;
    int duracao;

    printf("TEMPO DE JOGO!\n\n");

    printf("Informe o horario inicial do jogo(em horas): ");
    scanf("%d", &horaInicial);
    printf("\n");

    printf("Informe o horario final do jogo(em horas): ");
    scanf("%d", &horaFinal);

    duracao = (horaInicial - horaFinal);
    if (duracao < 0)
    {
        duracao = -1 * duracao ;
    }
    else
    {
        duracao = 24 - duracao;
    }
    printf("O jogo durou em media %d hora(s)\n\n", duracao);

    return 0;
}