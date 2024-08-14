// Escreva um programa em C que leia 15 valores reais, encontra o maior e o menor deles e mostra o resultado.

#include <stdio.h>

int main()
{
    float valor[15], maior = valor[0], menor;
    int i = 0;

    while (i < 5)
    {
        printf("Insira um valor:\n");
        scanf("%f", &valor[i]);
        menor = valor[0];

        if (maior < valor[i])
        {
            maior = valor[i];
        }
        if (valor[i] < menor)
        {
            menor = valor[i];
        }

        i++;
    }
    printf("Maior valor: %f\n", maior);
    printf("Menor valor: %f", menor);
}
