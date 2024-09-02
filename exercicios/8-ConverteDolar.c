// 8) Elaborar um programa que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). O programa em C deverá solicitar o valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário.

#include <stdio.h>

float converteReal(float cotacao, float real)
{
    float conversao;
    conversao = real / cotacao;
    return conversao;
}

int main()
{
    float cotacao, real, res;
    printf("Insira o valor atual do dolar\n");
    scanf("%f", &cotacao);

    printf("Agora insira o valor em reais que deseja converter:\n");
    scanf("%f", &real);

    res = converteReal(cotacao, real);
    printf("O valor de R$%.2f equivale a $%.2f\n", real, res);
}
