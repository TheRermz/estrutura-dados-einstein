//17) Dado o dia da semana de 1 à 7, escreva na tela o correspondente por extenso (Domingo, Segunda-feira, ...Sábado).

#include<stdio.h>
int main()
{
    int diaSemana;
    printf("Diga o dia da semana (1 a 7)\n");
    scanf("%i", &diaSemana);

    if(diaSemana == 1)
    {
        printf("Domingo");
    }else if(diaSemana == 2)
    {
        printf("Segunda");
    }
    else if(diaSemana == 3)
    {
        printf("Terca");
    }
    else if(diaSemana == 4)
    {
        printf("Quarta");
    }
    else if(diaSemana == 5)
    {
        printf("Quinta");
    }
    else if(diaSemana == 6)
    {
        printf("Sexta");
    }
    else if(diaSemana == 7)
    {
        printf("Sabado");
    }else
    {
        printf("Nao e um dia da semana");
    }
}