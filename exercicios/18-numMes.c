//18) Elabore um programa que leia um número inteiro entre 1 e 12 e imprima o mês correspondente. Caso seja digitado um valor fora desse intervalo, deverá ser exibida uma mensagem informando que não existe mês com esse número.

#include <stdio.h>

int main()
{
    int numMes;
    printf("Insira um numero de 1 a 12 e direi qual mes corresponde a esse numero\n");
    scanf("%i", &numMes);

    if(numMes == 1)
    {
        printf("Janeiro\n");
    }
    else if(numMes==2)
    {
        printf("Fevereiro\n");
    }
    else if(numMes==3)
    {
        printf("Marco\n");
    }
    else if(numMes==4)
    {
        printf("Abril\n");
    }
    else if(numMes==5)
    {
        printf("Maio\n");
    }
    else if(numMes==6)
    {
        printf("Junho\n");
    }
    else if(numMes==7)
    {
        printf("Julho\n");
    }
    else if(numMes==8)
    {
        printf("Agosto\n");
    }
    else if(numMes==9)
    {
        printf("Setembro\n");
    }
    else if(numMes==10)
    {
        printf("Outubro\n");
    }
    else if(numMes==11)
    {
        printf("Novembro\n");
    }
    else if(numMes==12)
    {
        printf("Dezembro\n");
    }
    else
    {
        printf("Esse mes nao existe\n");
    }
}