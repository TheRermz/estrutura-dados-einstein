// 22) Escreva um algoritmo que gere o números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto igual a 5.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraNumeroAleatorio(int min, int max, int count)
{
    printf("Gerar numero aleatorio entre %i e %i\n", min, max);
    for (int i = 0; i < count; i++)
    {
        int num_aleatorio = rand() % (max - min + 1) + min;
        // printf("%i", num_aleatorio);
        if (num_aleatorio % 11 == 5)
        {
            printf("%i\n", num_aleatorio);
        }
    }
}

int main()
{
    int min = 1000, max = 1999, count = 100;
    geraNumeroAleatorio(min, max, count);
}
