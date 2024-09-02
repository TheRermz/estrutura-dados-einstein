// Escreva um programa em C para ler dois valores para as variáveis A e B, e efetuar as trocas dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.

#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Ola! Insira dois valores\n");
    scanf("%d %d\n", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("%d, %d\n", a, b);
}
