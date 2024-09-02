// 21) Escrever um algoritmo que leia um valor para uma variável n.

// Em seguida, calcule a tabuada de 1 a 10 para n. Mostre a tabuada um valor por linha.

#include <stdio.h>

int main()
{
    int val;
    printf("Insira um valor e lhe mostrarei a tabuada do mesmo\n");
    scanf("%i", &val);

    printf("A tabuada de %i e:\n", val);
    for (int i = 0; i <= 10; i++)
    {

        printf("%i * %i = %i\n", val, i, val * i);
    }
}
