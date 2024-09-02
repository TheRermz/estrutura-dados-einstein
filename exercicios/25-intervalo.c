// 25) Escrever um programa em C que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações

#include <stdio.h>

int main()
{
    int valor, dentroIntervalo = 0, foraIntervalo = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o valor:\n");
        scanf("%i", &valor);

        if (valor >= 10 && valor <= 20)
        {
            dentroIntervalo++;
        }
        else
        {
            foraIntervalo++;
        }
    }

    printf("Quantidade de valores do intervalor [10,20]: %i\n", dentroIntervalo);
    printf("Quantidade de valores fora do intervalo: %i", foraIntervalo);
}
