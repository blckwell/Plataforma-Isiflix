// POSITIVOS E MÉDIA
// Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
// Na pròxima linha, deve-se mostrar a média de todos os valores positivos digitados,
// com um dígito após o ponto decimal.

#include <stdio.h>

int main()
{

    float vetor[6];
    float media;

    int positivo = 0;
    int negativo = 0;

    printf("POSITVOS E MEDIA!\n\n");

    printf("Informe 6 valores:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Valor %d: ", i);
        scanf("%f", &vetor[i]);
        printf("\n");

        if (vetor[i] > 0)
        {
            media += vetor[i];
            ++positivo;
        }
        else
        {
            ++negativo;
        }
    }

    media = media / positivo;

    printf("Aqui estao os valores informados pelo usuario:\n\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%.2f\n", vetor[i]);
    }

    printf("Obtivemos %d valores positivos.\n", positivo);
    printf("Obtivemos %d valores negativos.\n", negativo);
    printf("A media desses valores e: %.2f.\n\n", media);

    printf("Fim do algoritmo.\n");

    return 0;
}