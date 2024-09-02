// 24) Escreva um algoritmo em C que realize a multiplicação de A por B, ou seja, A * B, através de adições (somas). Esses dois valores são inseridos pelo usuário. EX: transformar 4*3 em 4+4+4.

#include <stdio.h>

int main()
{
    int A, B, resultado = 0, i;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    for (i = 0; i < B; i++)
    {
        resultado += A;
    }

    printf("Resultado de %d * %d = %d\n", A, B, resultado);
}
