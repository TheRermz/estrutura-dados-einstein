// 20) Faça um algoritmo que receba números positivos até que o número zero seja digitado. Calcule e mostre ao final: a soma de todos os números digitados, a quantidade de números digitados, a média dos números digitados, o maior número digitado; o menor número digitado, a média dos números pares digitados, a porcentagem de números ímpares digitados;

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int num, i = 0, maior = INT_MIN, menor = INT_MAX, pares = 0, impares = 0;
    float mediaPares, porcImpares, val, media;

    printf("Digite n numeros, quando digitar 0 o programa ira parar.\n");

    while (true)
    {
        scanf("%i", &num);
        if (num == 0)
        {
            break;
        }
        if (i == 0)
        {
            maior = menor = num;
        }
        i++;

        if (maior < num)
        {
            maior = num;
        }
        else if (menor > num && num != 0)
        {
            menor = num;
        }

        if (num % 2 == 0)
        {
            pares += num;
        }
        else
        {
            impares++;
        }

        val += num;
        media = val / i;

        mediaPares = pares / i;
        porcImpares = (impares / i) * 100;
    }

    printf("O maior numero e: %i\nO menor numero e: %i\nA quantidade de numeros digitado e: %i\nA Media e: %f\nA media dos numeros pares e: %f\nE a porcentagem de impares digitado e: %.2f%%\n", maior, menor, i, media, mediaPares, porcImpares);
}
