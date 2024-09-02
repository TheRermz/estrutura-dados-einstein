// 15) Recebidos valores numéricos entre zero e cinco, escreva-os na forma literal.

#include <stdio.h>



int main()
{
    int num;

    printf("Por favor insira um numero de 0 a 5:\n");
    scanf("%i", &num);

    if(num == 5)
    {
        printf("Cinco");
    }
    else if(num == 4)
    {
        printf("Quatro");
    }
    else if(num == 3)
    {
        printf("Tres");
    }
    else if(num == 2)
    {
        printf("Dois");
    }
    else if(num == 1)
    {
        printf("Um");
    }
    else if(num == 0)
    {
        printf("zero");
    }
    else
    {
        printf("Numero nao esta entre 0 e 5");
    }
}